ifconfig -a | grep -o -E 'ether .*' | sed 's/ether//'
