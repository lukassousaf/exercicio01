#include <stdio.h>

int main()
{
int fatorial, valor;
printf("Insira um valor: ");
scanf("%d", &valor);
 
for(fatorial = 1; valor > 1; valor = valor - 1)
fatorial = fatorial * valor;
 
printf("\nFatorial: %d", fatorial);
return 0;
}
