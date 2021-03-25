#include <stdio.h>
#include <stdlib.h>
#include "complex.h"


//Todas as funções retornam um ponteiro para complex (p_complex)
//allocate cria ponteiro para complexo
p_complex allocate() {
    p_complex newComplex;
    newComplex = malloc(sizeof(Complex));
    return newComplex;
}


p_complex create(int real, int img) {
    p_complex newComplex = allocate();
    newComplex->real = real;
    newComplex->img = img;
    return newComplex;
}


p_complex sum(p_complex c1, p_complex c2){
    p_complex newComplex = allocate();
    newComplex->real = c1->real + c2->real;
    newComplex->img = c1->img + c2->img;
    return newComplex;
}


p_complex subtract(p_complex c1, p_complex c2) {
    p_complex newComplex = allocate();
    newComplex->real = c1->real - c2->real;
    newComplex->img = c1->img - c2->img;
    return newComplex;
}


p_complex multiply(p_complex c1, p_complex c2) {
    p_complex newComplex = allocate();
    newComplex->real = c1->real*c2->real + (-1)*(c1->img*c2->img);
    newComplex->img = c1->real*c2->img + c1->img*c2->real;
    return newComplex;
}


p_complex power(p_complex c1) {
    p_complex newComplex = allocate();
    newComplex->real = c1->real*c1->real + (-1)*(c1->img*c1->img);
    newComplex->img = c1->real*c1->img + c1->img*c1->real;
    return newComplex;
}


/*Realiza a operação de divisão pela multiplicacao do conjugado do divisor
//z = a + bi  conj(z) = a - bi
//Seria adequado que a mascara para c-real, c-img fosse um float, porem seria preciso alterar
todos os tipos int(%d) na main */
p_complex divide(p_complex c1, p_complex c2) { 
    p_complex newComplex = allocate();
    int divisorConjugado = c2->real*c2->real + c2->img*c2->img;  
    newComplex->real = (c1->real*c2->real + c1->img*c2->img)/divisorConjugado;
    newComplex->img = (-1*(c1->real*c2->img) + c1->img*c2->real)/divisorConjugado;
    return newComplex;
}