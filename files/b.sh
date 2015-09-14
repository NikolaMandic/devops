iptables -t nat -A PREROUTING  -p tcp -i eth1 -j DNAT --to-destination 46.xx.xx.xx
iptables -t nat -A POSTROUTING -p tcp -d 10.0.xx.xx -j SNAT --to-source 10.0.xx..xx

