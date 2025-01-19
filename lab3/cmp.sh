#!/bin/bash
gcc task_$1.c -Wall -Wextra -Wconversion -Wsign-conversion -Werror -Wpedantic -std=c11 -o task_$1.out
