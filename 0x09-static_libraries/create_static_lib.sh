#!/bin/bash
#changing all .c files to object code
gcc -c *.c
#creating static library and indexing it
ar rc liball.a *.o && ranlib liball.a
