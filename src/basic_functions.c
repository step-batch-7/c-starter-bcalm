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
float fahrenheit_to_centigrade(float);
float centigrade_to_fahrenheit(float);
double average_of_three(int, int, int);
int greater_of_two(int, int);
int greater_of_three(int, int, int);

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

float fahrenheit_to_centigrade(float fahrenheit_temp){
  return (fahrenheit_temp - 32) / 1.8;
}

float centigrade_to_fahrenheit(float centigrade_temp){
  return centigrade_temp * 1.8 + 32;
}

double average_of_three(int number1, int number2, int number3){
  return (number1 + number2 + number3) / 3.00;
}

int greater_of_two(int number1, int number2){
  return number1 >= number2 ? number1 : number2;
}

int greater_of_three(int number1, int number2, int number3){
  int greatest = greater_of_two(number1, number2);
  return greater_of_two(greatest, number3);
}

int main(void){
  int number, number1, number2, number3, principal;
  float rate_of_interest, time, fahrenheit_temp, centigrade_temp;
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
  scanf("%f", &rate_of_interest);
  printf("Enter time(In year): ");
  scanf("%f", &time);
  printf("Simple interest is %f \n", simple_interest(principal,rate_of_interest,time));
  printf("Compound interest is %f \n", compound_interest(principal,rate_of_interest,time));
  printf("Enter temp(In fahrenheit): ");
  scanf("%f", &fahrenheit_temp);
  printf("%f fahrenheit temperature is equal to %f centigrade\n",fahrenheit_temp,fahrenheit_to_centigrade(fahrenheit_temp));
  printf("Enter temp(In centigrade): ");
  scanf("%f", &centigrade_temp);
  printf("%f centigrade temperature is equal to %f fahrenheit\n",centigrade_temp,centigrade_to_fahrenheit(centigrade_temp));
  printf("Enter numbers for average and find greatest:\n");
  printf("Enter first number: ");
  scanf("%d", &number1);
  printf("Enter second number: ");
  scanf("%d", &number2);
  printf("Enter third number: ");
  scanf("%d", &number3);
  printf("Average of %d, %d and %d is %f \n", number1, number2, number3, average_of_three(number1, number2, number3));
  printf("%d is the greatest number\n", greater_of_three(number1, number2, number3));
  return 0;
}