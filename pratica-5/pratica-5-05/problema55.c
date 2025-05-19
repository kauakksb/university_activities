#include <stdio.h>

int populacao(unsigned long int popA, double taxaA, unsigned long int popB, double taxaB){

    taxaA = taxaA/100;
    taxaB = taxaB/100;
    double novaPopA, novaPopB;
    int anos = 0;

    while(novaPopA < novaPopB){
        anos ++;
        if (anos == 1){
            novaPopA = popA * taxaA;
            novaPopB = popB * taxaB;
        }

        novaPopA = novaPopA * taxaA;
        novaPopB = novaPopB * taxaB;
        
    }

    return anos;
}