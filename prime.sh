#!/bin/bash
echo "Enter your Number"
read n
for ((i = 2; i < n ; i++)); do
    rem=$((n % i))  # Removed the dollar sign and corrected the calculation
    if [ $rem -eq 0 ]; then  # Added spaces inside square brackets
        echo "Not a Prime"
        exit 0
    fi
done
echo "Prime"

