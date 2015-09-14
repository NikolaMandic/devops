cd /var/lib/cinder
mv cinder-volumes cinder-volumes.back`date +%s`
dd if=/dev/zero of=./cinder-volumes bs=1 count=0 seek=$1
umount /dev/loop2
losetup /dev/loop2 cinder-volumes
pvcreate /dev/loop2 -ff
vgcreate cinder-volumes /dev/loop2
service cinder-volume restart; service cinder-api restart; service cinder-scheduler restart;
