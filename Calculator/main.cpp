//
//  main.cpp
//  Calculator
//
//  Created by Alexis Fernando Rodriguez on 02/11/2017.
//  Copyright © 2017 Alexis Fernando Rodriguez. All rights reserved.
//

#include <iostream>
#include "stdio.h"
int sumar(int numenoUno, int numeroDos);
int restar(int numeroUno, int numeroDos);
int multiplicar(int numeroUno, int numeroDos);
int dividir(int numeroUno, int numeroDos);

int main(int argc, const char * argv[]) {
    int primerNumero = 5;
    int segundoNumero = 0;
    printf("La suma de %d y %d es: %d \n",primerNumero, segundoNumero, sumar(primerNumero, segundoNumero));
    printf("La resta de %d y %d es: %d \n",primerNumero, segundoNumero, restar(primerNumero, segundoNumero));
    printf("La multiplicacion de %d y %d es: %d \n",primerNumero, segundoNumero, multiplicar(primerNumero, segundoNumero));
    printf("La division de %d y %d es: %d \n",primerNumero, segundoNumero, dividir(primerNumero, segundoNumero));
    
    return 0;
}

int sumar(int numeroUno, int numeroDos){
    return numeroUno + numeroDos;
}

int restar(int numeroUno, int numeroDos){
    return numeroUno - numeroDos;
}

int multiplicar(int numeroUno, int numeroDos){
    return numeroUno * numeroDos;
}

int dividir(int numeroUno, int numeroDos){
    if(numeroDos == 0){
        return -1;
    }
    return numeroUno / numeroUno;
}
