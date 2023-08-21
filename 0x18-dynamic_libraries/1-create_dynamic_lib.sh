#!/bin/bash
gcc -c -fPIC *.clks
gcc -shared -o liball.so *.o