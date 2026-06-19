#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_VETOR 5000
#define ITERACOES 500000000

int dados[TAMANHO_VETOR];

int main() {
    unsigned long i;
    unsigned long soma = 0;

   
    for (int j = 0; j < TAMANHO_VETOR; j++) {
        dados[j] = j;
    }

    printf("Iniciando teste PREVISIVEL robusto...\n");

    for (i = 0; i < ITERACOES; i++) {
     
        int valor = dados[i % TAMANHO_VETOR];
        
      
        if (valor >= 0) { 
            soma += 1;
        } else {
            soma += 2;
        }
    }

    printf("Fim do teste. Soma: %lu\n", soma);
    return 0;
}
