#!/bin/bash
gcc -Wall -peadantic -Werror -Wextra -c *.c
ar rc liball.a *.o
ranlib liball.a
