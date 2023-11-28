#!/usr/bin/env bash

num=123445679999999999999998
function strrlong () {


	for ((i=2;i<=$num;i++));
	do
		n=$(($num%$i))

		if [ $n == 0 ];
		then
			echo $i
			break
		fi
	done

}

strrlong
