#!/bin/sh

for i in `seq 1 10`
do
if [[ $i = 3 ]] 
then

break

fi 
echo $i
done
