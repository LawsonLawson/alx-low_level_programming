#!/bin/bash
#changing all .c files to object code
gcc -c *.c
#creating static library
ar rc liball.a *.o
#indexing the library
ranlib liball.a
