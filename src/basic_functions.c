#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int greatest_common_divisor(int, int);

unsigned char is_even(int number){
  return number % 2 == 0;
}

unsigned char is_odd(int number){
  return (!is_even(number));
}

int square(int number){
  return number * number;
}

int cube(int number){
  return number * square(number);
}

int greatest_common_divisor(int number1, int number2){
  if (number1 == 0){
    return number2;
  }
  return greatest_common_divisor(number2 % number1, number1);
}

int main(void){
  int number, number1, number2 ;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "Even" : "Not even");
  printf("%d is %s \n", number, is_odd(number) ? "Odd" : "Not odd");
  printf("Square of %d is %d \n", number, square(number));
  printf("Cube of %d is %d \n", number, cube(number));
  printf("Enter two numbers for calculating G.C.D.\n ");
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  printf("G.C.D. of %d and %d is %d \n", number1, number2, greatest_common_divisor(number1, number2));
  return 0;
}