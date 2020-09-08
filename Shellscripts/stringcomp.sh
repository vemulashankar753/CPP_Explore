#!/bin/bash


VAR1="Linuxize"
VAR2="Linuxize"
#lenght of var1
n=${#VAR1}

echo "length of var1 is: $n"

#if [ "$VAR1" = "$VAR2" ]; then
#    echo "Strings are equal."
#else
#    echo "Strings are not equal."
#fi

if [[ "$VAR1" ==  "$VAR2" ]]; then
    echo "Strings are equal."
else
    echo "Strings are not equal."
fi
