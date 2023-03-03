#!/bin/sh
cc tests.c -Wall -Werror -Wextra -L. -lft -I includes
./a.out