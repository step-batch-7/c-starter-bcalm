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

int currency_breakdown(long int amount)
{
  long int remaining_money = amount;
  int note = 2000;
  remaining_money = print_currency(remaining_money, note);
  note = 500;
  remaining_money = print_currency(remaining_money, note);
  note = 200;
  remaining_money = print_currency(remaining_money, note);
  note = 100;
  remaining_money = print_currency(remaining_money, note);
  note = 50;
  remaining_money = print_currency(remaining_money, note);
  note = 20;
  remaining_money = print_currency(remaining_money, note);
  note = 10;
  remaining_money = print_currency(remaining_money, note);
  note = 5;
  remaining_money = print_currency(remaining_money, note);
  note = 2;
  remaining_money = print_currency(remaining_money, note);
  note = 1;
  remaining_money = print_currency(remaining_money, note);
  return 0;
}

int main(void)
{
  long int amount;
  printf("Enter Amount ");
  scanf("%ld", &amount);
  currency_breakdown(amount);
  return 0;
}