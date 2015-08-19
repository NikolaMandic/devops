# == Class: firewall
#
# Full description of class firewall here.
#
# === Parameters
#
# Document parameters here.
#
# [*sample_parameter*]
#   Explanation of what this parameter affects and what it defaults to.
#   e.g. "Specify one or more upstream ntp servers as an array."
#
# === Variables
#
# Here you should define a list of variables that this module would require.
#
# [*sample_variable*]
#   Explanation of how this variable affects the funtion of this class and if
#   it has a default. e.g. "The parameter enc_ntp_servers must be set by the
#   External Node Classifier as a comma separated list of hostnames." (Note,
#   global variables should be avoided in favor of class parameters as
#   of Puppet 2.6.)
#
# === Examples
#
#  class { firewall:
#    servers => [ 'pool.ntp.org', 'ntp.local.company.com' ],
#  }
#
# === Authors
#
# Author Name <author@domain.com>
#
# === Copyright
#
# Copyright 2015 Your name here, unless otherwise noted.
#
class firewall {
  class my_fw::pre {
    Firewall {
      require => undef,
    }
# Default firewall rules
    firewall { '000 accept all icmp':
      proto  => 'icmp',
             action => 'accept',
    }->
    firewall { '001 accept all to lo interface':
      proto   => 'all',
              iniface => 'lo',
              action  => 'accept',
    }->
    firewall { '002 reject local traffic not on loopback interface':
      iniface     => '! lo',
                  proto       => 'all',
                  destination => '127.0.0.1/8',
                  action      => 'reject',
    }->
    firewall { '003 accept related established rules':
      proto  => 'all',
             state  => ['RELATED', 'ESTABLISHED'],
             action => 'accept',
    }
->
firewall { '999 drop all other requests':
  action => 'drop',
}->
firewall { '006 Allow inbound SSH (v6)':
  port     => 22,
  proto    => tcp,
  action   => accept,
}->
firewallchain { 'INPUT:filter:IPv4':
  ensure => present,
  policy => drop,
  before => undef,
}
  }


  class my_fw::post {
    firewall { '999 drop all':
      proto  => 'all',
             action => 'drop',
             before => undef,
    }
firewallchain { 'INPUT:filter:IPv4':
  ensure => present,
  policy => drop,
  before => undef,
}
  }

  firewallchain { 'INPUT:filter:IPv4':
    ensure => present,
           policy => drop,
           before => undef,
  }
resources { 'firewall':
  purge => true,
}
resources { 'firewallchain':
  purge => true,
}
Firewall {
  before  => Class['my_fw::post'],
  require => Class['my_fw::pre'],
}
class { ['my_fw::pre', 'my_fw::post']: }
class { 'firewall': }

}
