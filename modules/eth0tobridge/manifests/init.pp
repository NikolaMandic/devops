# == Class: eth0tobridge
#
# Full description of class eth0tobridge here.
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
#  class { 'eth0tobridge':
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
#class eth0tobridge {

#notify {  "asdasd": }

#}

class eth0tobridge ($interface) {
  $address = inline_template("<%= scope.lookupvar('::ipaddress_${interface}') -%>")
  $macaddress = inline_template("<%= scope.lookupvar('::macaddress_#{interface}') -%>")
  $netmask = inline_template("<%= scope.lookupvar('::netmask_#{interface}') -%>")

  #l23network::l2::bridge {'br-ex2': }


  l23network::l3::ifconfig { $interface : ipaddr => 'none'}
  #network::if::static { 'eth0':
  #    ensure    => 'up',
  #    ipaddress => 'undef',
  #}
  network::bridge::static { 'br-ex2':
    ensure        => 'up',
    ipaddress     => $address,
    netmask       => $netmask,
    #macaddress    => $macaddress
  }
  l23network::l2::port {'eth0': bridge => 'br-ex2'}


}
#class { 'eth0tobridge': interface => 'eth0' }
