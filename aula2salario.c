#include <stdio.h>

int main()
{
  float bruto;
  float liquido;
  
  printf("\nEntre com o valor do salario:");
  scanf("%f", &salario);

  liquido = bruto * 0.8; 
  
  printf("\nSeu salario liq =%2f\n", liquido);
    
  return 0;
}