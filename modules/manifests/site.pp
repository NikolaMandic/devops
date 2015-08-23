# .../puppet/manifests/site.pp

# iptables purge
resources { "firewall":
  purge   => true
}

Firewall {
  before  => Class['fw::post'],
  require => Class['fw::pre'],
}

include openssh
node default {
  class {'l23network':
    use_ovs=>true
  }
  #$interface='eth0'
  #include eth0tobridge

  class { ['eth0tobridge']: interface=>'eth0'}
  include rdo
  class { ['fw::pre', 'fw::post']: }
}

