#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c *.o && ar rc liball.a *.o

