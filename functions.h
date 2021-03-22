#include <stdio.h>
#include <stdlib.h>
#include "complex.h"

///Todas as funções retornam um Struct Complex

Complex create(int real, int img){
    Complex newComplex;
    newComplex.real = real;
    newComplex.img = img;
    return newComplex;
}

Complex sum(Complex c1, Complex c2){
    Complex newComplex;
    newComplex.real = c1.real + c2.real;
    newComplex.img = c1.img + c2.img;
    return newComplex;
}

Complex subtract(Complex c1, Complex c2){
    Complex newComplex;
    newComplex.real = c1.real - c2.real;
    newComplex.img = c1.img - c2.img;
    return newComplex;
}

Complex multiply(Complex c1, Complex c2){
    Complex newComplex;
    newComplex.real = c1.real*c2.real + (-1)*(c1.img*c2.img);
    newComplex.img = c1.real*c2.img + c1.img*c2.real;
    return newComplex;
}

//Realiza a operação de divisão pela multiplicacao do conjugado do divisor
//z = a + bi  conj(z) = a - bi
Complex divide(Complex c1, Complex c2){
    Complex newComplex;
    int divisorConjugado = c2.real*c2.real + c2.img*c2.img;  
    newComplex.real = (c1.real*c2.real + c1.img*c2.img)/divisorConjugado;
    newComplex.img = (-1*(c1.real*c2.img) + c1.img*c2.real)/divisorConjugado;
    return newComplex;
}