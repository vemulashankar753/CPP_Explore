#!/bin/bash
op=$(ls -lrt | awk '{print $2}')
echo $?
echo $op
echo $?
