#include <stdio.h>
#include <stdlib.h>
#include "functions.h"


//Formata a saida do numero complexo
void format(Complex c){
    
    if(c.real == 0 && c.img == 0)
        printf("0\n");
    
    else if(c.real == 0)
        printf("%di\n", c.img);
    
    else if(c.img == 0)
        printf("%d\n", c.real);

    else
        printf("%d+(%di)\n", c.real, c.img);

}

int main(void){

    //declaração e chamada de funções 
    Complex c1, c2, c3, c4, c5, c6, c7, c8;
    
    c1 = create(2, 2);
    c2 = create(1, 1);
    c3 = sum(c1, c2);
    c4 = subtract(c2, c1);
    c5 = multiply(c1, c2);
    c6 = divide(c1, c2);
    c7 = create(0, 0);
    c8 = power(c1);
    
    
    //Impressão dos resultados obtidos
    format(c1);
    format(c2);
    format(c3);
    format(c4);
    format(c5);
    format(c6);
    format(c7);
    format(c8);
}