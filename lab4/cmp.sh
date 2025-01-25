#!/bin/bash

PROGRAM="task_$1"
FLAGS="-Wall -Wextra -Wconversion -Wsign-conversion -Werror -Wpedantic  -std=c11"

if [[ $2 ]] ; then
	FLAGS="$FLAGS $2"
fi

gcc "$PROGRAM.c" $FLAGS -o "$PROGRAM.out"
 
