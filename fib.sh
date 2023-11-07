#!/bin/bash
echo "Enter Number"
read n
a=0
b=1
t=0
for ((i=0;i<n;i++)); do
t=$((a+b))
a=$b
b=$t
echo "A: $a B:$b"
done
echo $b