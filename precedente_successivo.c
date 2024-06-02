// Dato in input un numero scrivere un programma in linguaggio C che stampi il numero precedente e 
// il numero successivo di quello inserito

#include <stdio.h>
int numero, numeroPrecedente, numeroSuccessivo;
int main (void){
	printf("Inserisci un numero");
	scanf("%d", &numero);
	numeroPrecedente = numero--;
	numeroSuccessivo = numero++;
	printf("Il tuoi numeri sono %d e %d", numeroPrecedente, numeroSuccessivo);
	return 0;
	}

