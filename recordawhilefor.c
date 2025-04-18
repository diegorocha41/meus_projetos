#include <stdio.h>

int main(){

    int i = 0;

while (i <= 10) 
{
  if (i % 2 == 0) //para imprimir os numeros impares so mudar a condicional !=
  {
    printf("o numero %d é par!\n/", i);
  }
    
  i++;
}

return 0;

}