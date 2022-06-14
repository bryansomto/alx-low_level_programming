#!/bin/bash
gcc -c *.c -fPIC; gcc -o *.o -shared liball.so
