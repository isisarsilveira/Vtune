#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 5000
#define ITERACOES 500000000

int dados[TAMANHO_VETOR];

int main() {
    unsigned long i;
    unsigned long soma = 0;

    
    srand(42); 

    
    for (int j = 0; j < TAMANHO_VETOR; j++) {
        dados[j] = rand();
    }

    printf("Iniciando teste IMPREVISIVEL robusto...\n");

    for (i = 0; i < ITERACOES; i++) {
        
        int valor = dados[i % TAMANHO_VETOR];
        
      
        if ((valor % 2) == 0) { 
            soma += 1;
        } else {
            soma += 2;
        }
    }

    printf("Fim do teste. Soma: %lu\n", soma);
    return 0;
}
