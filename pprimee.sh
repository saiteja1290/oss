#!/bin/bash
echo "Enter Number"
read n
for ((i=2;i<n;i++)); do

    rem=$((n % i))
    if [ $rem -eq 0 ]; then
        echo "Not Prime"
        exit 0
    fi
done
echo "PRIME"