#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int display_odd_series(int);

unsigned long int factorial(int number)
{
  unsigned long int fact = 1;
  for (int num = 1; num <= number; num++)
  {
    fact = fact * num;
  }
  return fact;
}

int fibonacci(int fibonacciTerm)
{
  int firstNumber = -1;
  int secondNumber = 1;
  for (int term = 1; term <= fibonacciTerm; term++)
  {
    int sum = firstNumber + secondNumber;
    firstNumber = secondNumber;
    secondNumber = sum;
    printf("%d \n", secondNumber);
  }
  return 0;
}

int display_odd_series(int number)
{
  for (int current_number = 1; current_number < number; current_number += 2)
  {
    printf("%d\n", current_number);
  }
  return 0;
}

int main(void)
{
  int number;
  printf("Enter a number for calculating factorial: ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu \n", number, factorial(number));
  printf("Enter a number for series: ");
  scanf("%d", &number);
  printf("Fibonacci Series: \n");
  fibonacci(number);
  printf("Odd series: \n");
  display_odd_series(number);
  return 0;
}