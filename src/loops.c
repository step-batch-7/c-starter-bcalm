#include <stdio.h>

unsigned long int factorial(int);
void fibonacci(int);

unsigned long int factorial(int number)
{
  unsigned long int fact = 1;
  for (int num = 1; num <= number; num++)
  {
    fact = fact * num;
  }
  return fact;
}

void fibonacci(int fibonacciTerm)
{
  int firstNumber = -1;
  int secondNumber = 1;
  for (int term = 1; term <= fibonacciTerm; term++)
  {
    int sum = firstNumber + secondNumber;
    firstNumber = secondNumber;
    secondNumber = sum;
    printf("%d fibonacci term is %d \n", term, secondNumber);
  }
}

int main(void)
{
  int number;
  printf("Enter a number for calculating factorial: ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu \n", number, factorial(number));
  printf("Enter a number for till you want to print fibonacci series: ");
  scanf("%d", &number);
  fibonacci(number);
  return 0;
}