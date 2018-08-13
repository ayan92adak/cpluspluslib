#include"Calculate.h"


int calculate::compute(int x, int y,Operation op){
    if(op==E_ADD)
    {
        return x + y;
    }
    if(op==E_SUB)
    {
        return x - y;
    }
    if(op==E_DIV)
    {
        return x / y;
    }
    if(op==E_MUL)
    {
        return x * y;
    }

}

