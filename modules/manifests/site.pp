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
include eth0tobridge
include rdo
class { ['fw::pre', 'fw::post']: }

