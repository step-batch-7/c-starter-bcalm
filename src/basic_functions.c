#include <stdio.h>

unsigned char isEven(int);
unsigned char isOdd(int);

unsigned char isEven(int number){
  return number % 2 == 0;
}

unsigned char isOdd(int number){
  return (!isEven(number));
}

int main(void){
  return 0;
}