#include <stdio.h>

unsigned char is_even(int);
unsigned char is_odd(int);
int square(int);
int cube(int);

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

int main(void){
  return 0;
}