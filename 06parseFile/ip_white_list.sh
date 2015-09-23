#!/bin/sh

while read line
do
	echo $line
	iptables -P INPUT DROP
	iptables -P OUTPUT DROP
	iptables -P FORWARD DROP
	iptables -A INPUT -s $line -j ACCEPT
	iptables -A INPUT -d $line -j ACCEPT
	iptables -A OUTPUT -s $line -j ACCEPT
	iptables -A OUTPUT -d $line -j ACCEPT
	iptables -A FORWARD -s $line -j ACCEPT
	iptables -A FORWARD -d $line -j ACCEPT
done < ip_list.txt 

