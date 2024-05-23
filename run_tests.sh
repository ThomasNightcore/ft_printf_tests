#!/bin/zsh

## Path to your header file
includes_dir="./.."

cc -Werror -Wextra -Wall testcases.c ../libftprintf.a  -I$includes -o test.a
./test.a
rm -f test.a
