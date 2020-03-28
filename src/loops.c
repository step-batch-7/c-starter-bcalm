#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int display_odd_series(int);
int display_alternative_number(int, int);

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

int display_alternative_number(int start_from, int upto)
{ 
  while(start_from < upto)
  {
    printf("%d\n", start_from);
    start_from += 2;
  }
  return 0;
}

int display_odd_series(int number)
{
  return display_alternative_number(1, number);
}

int display_even_series(int number)
{
  return display_alternative_number(2, number);
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
  printf("Even series: \n");
  display_even_series(number);
  return 0;
}