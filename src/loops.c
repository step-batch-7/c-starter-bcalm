#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int print_odds(int);
int print_alternative_number(int, int);
int multiplication_table(int, int);

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

int print_alternative_number(int start_from, int upto)
{ 
  while(start_from < upto)
  {
    printf("%d\n", start_from);
    start_from += 2;
  }
  return 0;
}

int print_odds(int number)
{
  return print_alternative_number(1, number);
}

int print_evens(int number)
{
  return print_alternative_number(2, number);
}

int multiplication_table(int mth_term, int nth_term)
{
  for(int num =1; num <= nth_term; num++)
  {
    printf("%d * %d = %d\n", mth_term, num, mth_term*num);
  }
  return 0;
}

int main(void)
{
  int number, number1, number2;
  printf("Enter a number for calculating factorial: ");
  scanf("%d", &number);
  printf("Factorial of %d is %lu \n", number, factorial(number));
  printf("Enter a number for printing series: ");
  scanf("%d", &number);
  printf("Fibonacci Series: \n");
  fibonacci(number);
  printf("Odd series: \n");
  print_odds(number);
  printf("Even series: \n");
  print_evens(number);
  printf("Enter two numbers for multiplication table:\n");
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  multiplication_table(number1, number2);
  return 0;
}