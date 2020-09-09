#!/bin/bash 
gcc -wall -fPIC -c *.c
gcc *.o -shared -o liball.so 

