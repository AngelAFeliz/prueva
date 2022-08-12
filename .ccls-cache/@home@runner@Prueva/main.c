#include <stdio.h>

int main(void) { 
  int edad = 0;
  
  printf("dame tu edad: ");
  scanf("%d",&edad);

  
if (edad  > 120)
{ 
  printf("usted miente");
  return 0;
}
if (edad  >=18)
{ 
  printf("usted es mayor de edad");
  return 0;
}
if (edad  >0)
{ 
  printf("usted es menor de edad");
  return 0;
}
}
  