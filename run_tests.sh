#!/bin/zsh

CC=cc

$CC -Werror -Wextra -Wall testcases.c ../libftprintf.a ../libft/libft.a -I../. -o test.a
./test.a
rm -f test.a
