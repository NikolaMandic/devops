    1  system-config-firewall-tui
    2  ls
    3  system-config-firewall-tui
    4  iptables-save > x
    5  cat x
    6  pwd
    7  packstack --allinone
    8  reboot
    9  ip a
   10  ping google.com
   11  tcpdump -i br-ex -vvvv -XX  -n "host 172.24.4.226"
   12  tcpdump -i br-0 -vvvv -XX  -n "host 172.24.4.226"
   13  tcpdump -i br0 -vvvv -XX  -n "host 172.24.4.226"
   14  tcpdump -i br-ex -vvvv -XX  -n "host 172.24.4.226"
   15  tcpdump -i br0 -vvvv -XX  -n "host 172.24.4.226"
   16  tcpdump -i br-ex -vvvv -XX 
   17  tcpdump -i br-ex -vvvv -XX -n
   18  tcpdump -i br-ex -vvvv -XX 
   19  tcpdump -i br-ex -vbvvv -XX 
   20  tcpdump -i br-int -vbvvv -XX 
   21  tcpdump -i br-int -vvvv -XX  
   22  cat  /proc/sys/net/ipv4/ip_forward
   23  tcpdump -i br-int -vvvv -XX  
   24  tcpdump -i br-ex -vvvv -XX  
   25  tcpdump -i br-ex -vvvv -XX  icmp
   26  cat keystonerc_admin 
   27  ip a
   28  ovs-vsctl br-int show
   29  ovs-vsctl show
   30  ip address add 10.0.0.1/24 dev br0
   31  ip a
   32  iptables -t nat -A POSTROUTING -o br0 -j MASQUERADE
   33  tcpdump -i vm2
   34  ip address del 10.0.0.1/24 dev br0
   35  ip address add 10.0.0.5/24 dev br0
   36  ip address add 10.0.0.1/24 dev vm2
   37  ovs-vsctl show
   38  tcpdump -i vm2
   39  ip address del 10.0.0.1/24 dev vm2
   40  ip address del 10.0.0.5/24 dev br0
   41  ip address add 10.0.0.5/24 dev br0
   42  ip address del 10.0.0.5/24 dev br0
   43  ip address add 10.0.0.1/24 dev br0
   44  iptables -t nat -A POSTROUTING -o br-int -j MASQUERADE
   45  tcpdump -i vm2
   46  tcpdump -i vm1
   47  tcpdump -i br-int
   48  ip addr
   49  ip link set br-int up
   50  tcpdump -i br-int
   51  tcpdump -i br-ex
   52  ip link set br-ex up
   53  ip addr
   54  tcpdump -i br-ex
   55  route
   56  tcpdump -i br-int
   57  tcpdump -i br-ex
   58  ip address add 172.24.4.225/24 dev br0
   59  tcpdump -i br-ex
   60  ip link add dev vm11 type veth peer name vm22
   61  ovs-vsctl add-port br-ex vm11
   62  ip link set vm22 master br0
   63  tcpdump -i br-ex
   64  ip a
   65  iptables -t nat -A POSTROUTING -o br-ex -j MASQUERADE
   66  tcpdump -i br-ex
   67  ip address del 172.24.4.225/24 dev br0
   68  ip tuntap add tapmm mode tap
   69  ip link set tapmm master brm
   70  ip link set tapmm master br-ex
   71  ip link set tapmm master br0
   72  ip address add 172.24.4.225/24 dev br0
   73  tcpdump -i br-ex
   74  ip address del 172.24.4.225/24 dev br0
   75  ip address add 172.24.4.225/24 dev tapmm
   76  tcpdump -i br-ex
   77  ip address del 172.24.4.225/24 dev tapmm
   78  ip link set tapmm nomaster br0
   79  ip link set tapmm nomaster 
   80  ovs-vsctl add-port br-ex tapmm
   81  ip address add 172.24.4.225/24 dev tapmm
   82  tcpdump -i br-ex
   83  ovs-vsctl show
   84  cat keystonerc_admin 
   85  ip address del 172.24.4.225/24 dev tapmm
   86  ip address add 172.24.4.225/28 dev tapmm
   87  tcpdump -i br-ex
   88  ip a
   89  ovs-vsctl 
   90  ovs-vsctl --help
   91  ovs-vsctl list
   92  ovs-vsctl list-br
   93  ovs-vsctl list-ifaces br-int
   94  ovs-vsctl list-ifaces br-ex
   95  ovs-vsctl show
   96  ovs-vsctl show br-ex
   97  ip a
   98  iptables -t nat -A POSTROUTING -o tapmm -j MASQUERADE
   99  tcpdump -i br-ex
  100  ip address add 172.24.4.225/28 dev br-ex
  101  iptables -t nat -A POSTROUTING -o br-ex -j MASQUERADE
  102  tcpdump -i br-ex
  103   iptables -A FORWARD -i br-ex -m state --state ESTABLISHED,RELATED
  104  tcpdump -i br-ex
  105  iptables -t nat -A POSTROUTING -o br-ex -j MASQUERADE
  106  tcpdump -i br-ex
  107  ipa a
  108  ip a
  109  tcpdump -i br-ex
  110   iptables -A FORWARD -i br0 -m state --state ESTABLISHED,RELATED
  111  tcpdump -i br-ex
  112   iptables -A FORWARD -i br0 -m state --state ESTABLISHED,RELATED -j ACCEPT
  113  tcpdump -i br-ex
  114   iptables -A FORWARD -i br-ex -m state --state ESTABLISHED,RELATED -j ACCEPT
  115  tcpdump -i br-ex
  116  ping 8.8.8.8
  117  tcpdump -i br0 -vvvv -XX icmp
  118  tcpdump -i br0 -vvvv -XX icmp -n
  119  system-config-firewall-tui
  120  ping google.com
  121  tcpdump -i br-ex
  122  tcpdump -i br-ex -vvvv -XX
  123  tcpdump -i br-ex -vvvv -XX -n
  124  tcpdump -i br-ex -vvvv -XX  -n "dst host 173.194.116.103 or src host 173.194.116.103"
  125  tcpdump -i br0 -vvvv -XX  -n "dst host 173.194.116.103 or src host 173.194.116.103"
  126  tcpdump -i eth0 -vvvv -XX  -n "dst host 173.194.116.103 or src host 173.194.116.103"
  127  tcpdump -i br0 -vvvv -XX  -n "dst host 173.194.116.103 or src host 173.194.116.103"
  128  tcpdump -i br-ex -vvvv -XX  -n "dst host 173.194.116.103 or src host 173.194.116.103"
  129  cat keystonerc_admin 
  130  tcpdump -i br-ex -vvvv -XX  -n "dst host 8.8.8.8 or src host 8.8.8.8"
  131  tcpdump -i br0 -vvvv -XX  -n "dst host 8.8.8.8 or src host 8.8.8.8"
  132  tcpdump -i br-ex -vvvv -XX  
  133  iptables -t nat -A POSTROUTING -o br-ex -j MASQUERADE
  134  ip a
  135  ip list dev br-ex
  136  iptables -t nat -A POSTROUTING -o tapmm -j MASQUERADE
  137  tcpdump -i tapmm -vvvv -XX  
  138  ip link set tapmm up
  139  tcpdump -i tapmm -vvvv -XX  
  140  tcpdump -i br0 -vvvv -XX  -n 
  141  ip address del 172.24.4.225/24 dev tapmm
  142  ip address del 172.24.4.225/28 dev tapmm
  143  ip address del 172.24.4.225/28 dev br-ex
  144  ip a
  145  tcpdump -i br-int -vvvv -XX  
  146  tcpdump -i br-ex -vvvv -XX  
  147  tcpdump -i br-ex -vvvv -XX  -n "host 172.24.4.226" 
  148  ip address add 172.24.4.225/28 dev br0
  149  ip address del 172.24.4.225/28 dev br0
  150  ipa 
  151  ip a
  152  ovs-vsctl show br-ex
  153  ovs-vsctl show 
  154  ip address del 172.24.4.225/28 dev vm22
  155  ip address add 172.24.4.225/28 dev vm22
  156  ip link set dev vm22 up
  157  ip link set dev vm11 up
  158  ip address del 172.24.4.225/28 dev vm22
  159  ip address add 172.24.4.225/28 dev br-ex
  160  iptables -A FORWARD -i br0 -o br-ex -j ACCEPT
  161  iptables -D FORWARD -i br0 -o br-ex -j ACCEPT
  162  iptables -A FORWARD -i br-ex -o br0 -j ACCEPT
  163  iptables -A FORWARD -i br0 -o br-ex -m state --state ESTABLISHED,RELATED  -j ACCEPT
  164  iptables -t nat -A POSTROUTING -o br- -j MASQUERADE
  165  iptables -t nat -A POSTROUTING -o br0 -j MASQUERADE
  166  ip address add 172.24.4.225/28 dev br-ex
  167  ip a
  168  system-config-firewall-tui
  169  iptables -L -t FORWARD
  170  iptables -L -t 
  171  iptables -L 
  172  ptables -A FORWARD -i br-ex -j ACCEPT
  173  iptables -A FORWARD -i br-ex -j ACCEPT
  174  iptables -A FORWARD -o br-ex -j ACCEPT
  175  cat keystonerc_admin 
  176  ip address add 172.24.4.225/28 dev br-ex
  177  ip address add 10.0.0.4/28 dev br-ex
  178  ip address del 10.0.0.4/28 dev br-ex
  179  ip link set dev vm11 up
  180  ip link set dev vm2 up
  181  ip link set dev vm1 up
  182  ip link set dev vm22 up
  183  ip a
  184  iptables
  185  iptables -L
  186  iptables -I FORWARD -o br-ex -j ACCEPT
  187  iptables -t nat -A POSTROUTING -o br0 -j MASQUERADE
  188  iptables -t nat -A POSTROUTING -o br-ex -j MASQUERADE
  189  iptables -L
  190  iptables -L -t nat
  191  iptables -t nat -A POSTROUTING -o br-int -j MASQUERADE
  192  iptables -I FORWARD -o br-int -j ACCEPT
  193  ovs-vsctl show 
  194  ip a
  195  ip address del 10.0.0.4/28 dev br-ex
  196  ip a
  197  ip address del 10.0.0.1/28 dev br0
  198  ip address del 10.0.0.1/24 dev br0
  199  ip a
  200  tcpdump -i br-ex -vvvv -XX  -n "host 172.24.4.226" 
  201  tcpdump -i br-ex -vvvv -XX  -
  202  tcpdump -i br-ex -vvvv -XX  
  203  tcpdump -i br-int -vvvv -XX  
  204  tcpdump -i br0 -vvvv -XX  
  205  tcpdump -i br-ex -vvvv -XX  
  206  tcpdump -i br-int -vvvv -XX  
  207  ip address add 10.0.0.1/24 dev br-int
  208  iptables -I FORWARD -i br-int -j ACCEPT
  209  tcpdump -i br-int -vvvv -XX  
  210  iptables -t nat -A POSTROUTING -o br-int -j MASQUERADE
  211  iptables -t nat -A POSTROUTING -o br0 -j MASQUERADE
  212  tcpdump -i br-int -vvvv -XX  
  213  input=br-ex
  214  output=br0
  215  iptables -I FORWARD -i $input -o $output -j ACCEPT
  216  iptables -I FORWARD -i $output -o $input -m state --state ESTABLISHED,RELATED  -j ACCEPT
  217  iptables -t nat -A POSTROUTING -o $input -j MASQUERADE
  218  $input
  219  iptables -t nat -I POSTROUTING -o $input -j MASQUERADE
  220  ip link set dev vm22 down
  221  ip link set dev vm11 down
  222  ip link set dev vm1 down
  223  ip link set dev vm2 down
  224  ip a
  225  ip address del 10.0.0.1/24 dev br-int
  226  ip address del 172.24.4.225/28 dev tapmm
  227  ip link set tapmm nomaster 
  228  ip link set tapmm master br-int
  229  ovs-vsctl add-port br-ex tapmm
  230  ovs-vsctl del-port br-ex tapmm
  231  ovs-vsctl add-port br-int tapmm
  232  ip address add 172.24.4.225/28 dev tapmm
  233  ip address add 10.0.0.1/24 dev br-int
  234  ip link set dev tapmm up
  235  ip link set dev tapmm down
  236  ip link set dev vm1 up
  237  ip link set dev vm2 up
  238  ip link set dev vm11 up
  239  ip link set dev vm22 up
  240  ip a
  241  ip address add 10.0.0.1/28 dev br0
  242  iptables -I FORWARD -i $output -o $input -m state --state ESTABLISHED,RELATED  -j ACCEPT
  243  input=br-int
  244  output=br0
  245  iptables -I FORWARD -i $input -o $output -j ACCEPT
  246  iptables -I FORWARD -i $output -o $input -m state --state ESTABLISHED,RELATED  -j ACCEPT
  247  iptables -t nat -A POSTROUTING -o $output -j MASQUERADE
  248  iptables -t nat -I POSTROUTING -o $output -j MASQUERADE
  249  route
  250  ip address del 10.0.0.1/28 dev br0
  251  ovs-vsctl show 
  252  ip address del 10.0.0.1/28 dev vm1
  253  ip address add 10.0.0.1/28 dev vm1
  254  ip address add 10.0.0.1/28 dev vm11
  255  ip route del unreachable 10.0.0.0/24 via br0
  256  ip route del unreachable 10.0.0.0/24 
  257  ip route
  258  ip route del unreachable 10.0.0.0/28 dev br0 
  259  ip route del unreachable 10.0.0.0/28  br0 
  260  ip route del unreachable 10.0.0.0/28  
  261  ip route add -net 10.0.0.0 netmask 255.255.255.128 gw 10.0.0.1
  262  up route add -net 10.0.0.0 netmask 255.255.255.128 gw 10.0.0.1
  263  ip route add 10.0.0.0/24 via 10.0.0.1
  264  ip route add 10.0.0.0/28 via 10.0.0.1
  265  ip route
  266  ls
  267  ip a
  268  ip address del 10.0.0.1/28 dev br0
  269  ip a
  270  tcpdump -i br-int -vvvv -XX
  271  cat keystonerc_admin 
  272  ip a
  273  ip address add 172.24.4.226/28 dev br-ex
  274  ls
  275  input=br-ex
  276  iptables -I FORWARD -i $output -o $input -m state --state ESTABLISHED,RELATED  -j ACCEPT
  277  iptables -I FORWARD -i $input -o $output -j ACCEPT
  278  iptables -I FORWARD -i br-ex -o br0 -j ACCEPT
  279  iptables -I FORWARD -i br0 -o br-ex -m state --state ESTABLISHED,RELATED  -j ACCEPT
  280  ip a
  281  ip address del 172.24.4.225/28 dev tapmm
  282  ip address del 172.24.4.225/28 dev br-ex
  283  ip address add 172.24.4.225/28 dev br-ex
  284  ip address add 172.24.4.226/28 dev br0
  285  ip address del 172.24.4.226/28 dev br-ex
  286  ip a
  287  ip address del 172.24.4.226/28 dev tapmm
  288  ip address add 172.24.4.226/28 dev tapmm
  289  ovs-vsctl show 
  290  ip link set tapmm master brm
  291  ip address add 172.24.4.226/28 dev tapm
  292  ip tuntap add tapmm2 mode tap
  293  ovs-vsctl add-port br-ex tapmm2
  294  ip address del 172.24.4.226/28 dev tapmm
  295  ip address add 172.24.4.226/28 dev tapmm2
  296  ip link set dev vm22 up
  297  ip link set dev tapmm2 up
  298  ip a
  299  ovs-vsctl show 
  300  ip route
  301  ip address del 172.24.4.226/28 dev br0
  302  ethtool tapmm2
  303  ovs-vsctl add-port br-ex tapmm2
  304  ip address del 172.24.4.226/28 dev tapmm2
  305  ip a
  306  ip route
  307  ip address 
  308  ip 
  309  ip address flush vm1
  310  ip address flush vm2
  311  ip address flush vm22
  312  ip address flush vm1
  313  ip address flush vm11
  314  ip a
  315  tcpdump -i br-int -vvvv -XX  
  316  tcpdump -i br-ex -vvvv -XX  
  317  route
  318  tcpdump -i br-ex -vvvv -XX  
  319  cat keystonerc_admin 
  320  vim a
  321  vim a.sh
  322  chmod +x a.sh 
  323  vim a.sh 
  324  ./a.sh br-ex br0
  325  ip a
  326  ovs-vsctl show 
  327  ip a
  328  ls /sys/class/net
  329  ls /sys/class/net/
  330  ls /sys/class/net/ -la
  331  history
  332  history > h
