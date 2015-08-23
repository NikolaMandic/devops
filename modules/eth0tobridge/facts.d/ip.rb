
class dns ($interface) {
  $address = inline_template("<%= scope.lookupvar('::ipaddress_${interface}') -%>")

  $message = "So you want to know the IP address for ${interface} huh?"
  $message += "Well, it's ${address}"
  notify {  "${message}": }
}
class { 'dns': interface => 'eth0' }
