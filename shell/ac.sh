#!/bin/sh
echo "Enter the choice :"
read b
case $b in
1)
ls -a ;;
2)
ls ;;
*)
echo "Invalid"
esac
