#include<stdio.h>

unsigned long int factorial(int);

unsigned long int factorial(int number){
  unsigned long int fact = 1;
  for(int num = 1; num <= number; num++){
    fact = fact * num;
  }
  return fact;
}

int main(void){
  int number;
  printf("Enter a number for calculating factorial: ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu \n", number, factorial(number));
  return 0;
}