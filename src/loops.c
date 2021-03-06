#include <stdio.h>

unsigned long int factorial(int);
int fibonacci(int);
int print_odds(int);
int print_numbers(int, int, int);
int print_evens(int);
int multiplication_table(int, int);
int sum_of_n_numbers(int, int);
int product_of_n_numbers(int, int);
int print_odd_numbers(int,int);
int print_nth_number(int, int ,int);
int sum_of_even_numbers(int, int);
int print_odd_backwards(int);

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

int print_numbers(int start_from, int upto, int addition)
{ 
  while(start_from <= upto)
  {
    printf("%d\n", start_from);
    start_from += addition;
  }
  return 0;
}

int print_odds(int number)
{
  return print_numbers(1, number, 2);
}

int print_evens(int number)
{
  return print_numbers(2, number, 2);
}

int multiplication_table(int mth_term, int nth_term)
{
  for(int num =1; num <= nth_term; num++)
  {
    printf("%d * %d = %d\n", mth_term, num, mth_term*num);
  }
  return 0;
}

int sum_of_n_numbers(int start_number, int end_number)
{
  int sum = 0;
  while(start_number < end_number)
  {
    sum = sum + start_number;
    start_number++;
  }
  return sum;
}


int product_of_n_numbers(int start_number, int end_number)
{
  int product = 1;
  while(start_number < end_number)
  {
    product = product * start_number;
    start_number++;
  }
  return product;
}

int print_odd_numbers(int start_number, int end_number)
{
  int current_number = start_number % 2 ? start_number: start_number + 1;
  return print_numbers(current_number, end_number, 2); 
}

int print_nth_number(int start_number, int end_number, int addition)
{
  return print_numbers(start_number, end_number, addition);
}

int sum_of_even_numbers(int start_number, int end_number)
{
  int sum = 0;
  int current_number = start_number % 2 ? start_number + 1: start_number;
  while(current_number <= end_number)
  {
    sum = sum + current_number;
    current_number += 2;
  }
  return sum;
}

int print_odd_backwards(int number)
{
  int current_number = number % 2 ? number : number -1;
  while(current_number >= 1)
  {
    printf("%d\n", current_number);
    current_number -= 2;
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

  printf("Enter two numbers for sum all numbers b/w them:\n");
  printf("Enter starting range: ");
  scanf("%d", &number1);
  printf("Enter ending range: ");
  scanf("%d", &number2);
  printf("Sum of all numbers b/w %d and %d is %d\n", number1, number2, sum_of_n_numbers(number1, number2));
  
  printf("Enter two numbers for product all numbers b/w them:\n");
  printf("Enter starting range: ");
  scanf("%d", &number1);
  printf("Enter ending range: ");
  scanf("%d", &number2);
  printf("Product of all numbers b/w %d and %d is %d\n", number1, number2, product_of_n_numbers(number1, number2));

  printf("Enter two number for printing odd numbers b/w them:\n");
  printf("Enter starting range: ");
  scanf("%d", &number1);
  printf("Enter ending range: ");
  scanf("%d", &number2);

  print_odd_numbers(number1,number2);
  printf("Enter range and addition: \n");
  printf("Enter starting range: ");
  scanf("%d", &number1);
  printf("Enter ending range: ");
  scanf("%d", &number2);
  printf("Enter addition: ");
  scanf("%d", &number);
  print_nth_number(number1, number2, number);

  printf("Enter two numbers: \n");
  printf("Enter starting range: ");
  scanf("%d", &number1);
  printf("Enter ending range: ");
  scanf("%d", &number2);
  printf("Sum of all even number is %d \n", sum_of_even_numbers(number1, number2));

  printf("Enter number:");
  scanf("%d", &number);
  printf("Odd series in backwards: \n");
  print_odd_backwards(number);
  return 0;
}