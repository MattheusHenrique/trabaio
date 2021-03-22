//Arquivo de testes
#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//recebe um complexo e verifica se ele e igual ou nao ao parametro esperado. 
void assertEqual(Complex c,int real, int img, int numberTest){
    if(c.real == real && c.img == img)
        printf("test%d OK\n", numberTest);
    else
        printf("test%d FALSE\n", numberTest);
}


void testComplexs(){
    Complex c1, c2, c3;

    c1 = create(0, 0);
    assertEqual(c1, 0, 0, 1);
    
    c2 = create(1, 1);

    c3 = sum(c1, c2);
    assertEqual(c3, 1, 1, 2);

    c3 = subtract(c1, c2);
    assertEqual(c3, -1, -1, 3);

    c3 = multiply(c1, c2);
    assertEqual(c3, 0, 0, 4);

    c3 = divide(c1, c2);
    assertEqual(c3, 0, 0, 5);
}

int main(void){
    testComplexs();
}