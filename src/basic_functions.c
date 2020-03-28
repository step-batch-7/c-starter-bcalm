#include <stdio.h>
#include <math.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);
int greatest_common_divisor(int, int);
int lcm(int, int);
double simple_interest(int, float, float);
double compound_interest(int, float, float);

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

int lcm(int number1, int number2){
  int gcd = greatest_common_divisor(number1, number2);
  int product = number1 * number2;
  return product / gcd;
}

double simple_interest(int principal, float rate_of_interest, float time){
  return (principal*rate_of_interest*time)/100;
}

double compound_interest(int principal, float rate_of_interest, float time){
  return principal * pow((1 + rate_of_interest/100), time);
}

int main(void){
  int number, number1, number2, principal, rate_of_interest, time;
  printf("Enter the number: ");
  scanf("%d", &number);
  printf("%d is %s \n", number, is_even(number) ? "Even" : "Not even");
  printf("%d is %s \n", number, is_odd(number) ? "Odd" : "Not odd");
  printf("Square of %d is %d \n", number, square(number));
  printf("Cube of %d is %d \n", number, cube(number));
  printf("Enter two numbers for calculating G.C.D.\n");
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  printf("GCD of %d and %d is %d \n", number1, number2, greatest_common_divisor(number1, number2));
  printf("LCM of %d and %d is %d \n", number1, number2, lcm(number1, number2));
  printf("Enter details for calculating interest\n");
  printf("Enter amount: ");
  scanf("%d", &principal);
  printf("Enter rate of interest: ");
  scanf("%d", &rate_of_interest);
  printf("Enter time(In year): ");
  scanf("%d", &time);
  printf("Simple interest is %f \n", simple_interest(principal,rate_of_interest,time));
  printf("Compound interest is %f \n", compound_interest(principal,rate_of_interest,time));
  return 0;
}