/*
Author : Sofia Varandas
File : bissexto.c
Exercise 4.7 - Ano bissesto
*/

#include <stdio.h>

// This function return if the year is a leap year
int bissexto(int n) {
  if((n%4==0 && !(n%100==0)) || n%400==0){
    return 1;
  } else {
    return 0;
  }
}



int main(void) {

  int ano;

  printf("Intruduza o ano:");
  scanf("%d", &ano);
  printf("O ano é bissexto se valor 1 não é bissexto se valor 0 : valor %d\n", bissexto(ano));
  return 0;
}
