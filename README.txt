g++ -o foo main.cpp -L. -lcalculator
 gcc -shared -o libcalculator.so Calculate.o
 gcc -fPIC -c Calculate.cpp