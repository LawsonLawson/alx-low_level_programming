#!/bin/bash
#changing all .c files to object code
gcc -c *.c
#creating static library and indexing it on the go
ar rc liball.a *.o && ranlib liball.a
