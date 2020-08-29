#!/bin/bash
op=$(ls -lrt | awk '{print $2}')
echo $?
echo $op
echo $?
echo "Total no.of args passed to this script are $#"

echo "printing the $* output"
echo $*
echo "printing the $@ output"
echo $@


