#ifndef FACTORIAL_H_
#define FACTORIAL_H_
#include "Factorial.h"


int main(){

    Factorial f(3);

    cout <<f.calculateFactorial()<<endl;

    cout << f.calculateFactorial(true)<<endl;


    return 0;
}