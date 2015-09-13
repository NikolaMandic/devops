internal=$1
external=$2

iptables -I FORWARD -i $internal -o $external -j ACCEPT
iptables -I FORWARD -i $external -o $internal -m state --state ESTABLISHED,RELATED  -j ACCEPT
iptables -t nat -A POSTROUTING -o $external -j MASQUERADE

