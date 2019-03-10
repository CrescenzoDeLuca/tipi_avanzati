#include <stdio.h>

int main() {

int i, somma, vet[3];

printf("inserire i numeri == \n");
for ( i = 0; i < sizeof(vet) / sizeof(int) ; i++) {
  scanf("%d\n", &vet[i]);
}

somma = vet[0] + vet[1] + vet[2];

double media = (double)somma;
media = media / 3;

printf("Valori iniziali = \n");
printf("primo = %d \n",vet[0]);
printf("primo = %d \n",vet[1]);
printf("primo = %d \n",vet[2]);
printf("\n");

printf("La somma e' == %d\n", somma );

printf("La media e' == %f\n", media );
  return 0;
}
