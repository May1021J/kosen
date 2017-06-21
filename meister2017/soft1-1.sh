#!/bin/bash

echo $1 $2
a=$1
b=$2
rr=$(( $a % $b ))
echo $rr

#aはbより大きくする
while [[ $rr -ne 0 ]]
do
	a=$b
	b=$rr
	rr=$(( $a % $b ))
	echo $b
done
exit 0

