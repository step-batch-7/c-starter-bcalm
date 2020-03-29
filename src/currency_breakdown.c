#include<stdio.h>

int currency_breakdown(long int);
long int print_currency(long int, int);

long int print_currency(long int money, int note)
{
  if(money >= note){
    printf("%ld * Rs %d\n", money / note, note);
  }
  return money % note;
}

int currency_breakdown(long int rupee)
{
  long int remaining_money = rupee;
  remaining_money = print_currency(remaining_money, 2000);
  remaining_money = print_currency(remaining_money, 500);
  remaining_money = print_currency(remaining_money, 200);
  remaining_money = print_currency(remaining_money, 100);
  remaining_money = print_currency(remaining_money, 50);
  remaining_money = print_currency(remaining_money, 20);
  remaining_money = print_currency(remaining_money, 10);
  remaining_money = print_currency(remaining_money, 5);
  remaining_money = print_currency(remaining_money, 2);
  remaining_money = print_currency(remaining_money, 1);
  return 0;
}

int main(void)
{
  long int rupee;
  printf("Enter Rupees which you want to withdraw: ");
  scanf("%ld", &rupee);
  currency_breakdown(rupee);
  return 0;
}