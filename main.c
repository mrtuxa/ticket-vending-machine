#include <stdio.h>

int main(void)
{
  int ticket_type = 0;
  int ticket_quantity = 0;
  int ticket_discount = 0;

  printf("Welcome to the ticket machine!\n");
  printf("Please choose the type of ticket you want to purchase:\n");
  printf("1. Single ticket\n");
  printf("2. Ten-ride ticket\n");
  printf("3. Monthly ticket\n");
  scanf("%d", &ticket_type);

  printf("Please enter the number of tickets you want to purchase: ");
  scanf("%d", &ticket_quantity);

  printf("Do you qualify for any discounts?\n");
  printf("1. No discount\n");
  printf("2. Child discount\n");
  printf("3. Student discount\n");
  printf("4. Senior discount\n");
  scanf("%d", &ticket_discount);

  double ticket_price = 0.0;
  if (ticket_type == 1)
  {
    ticket_price = 2.5;
  }
  else if (ticket_type == 2)
  {
    ticket_price = 20.0;
  }
  else if (ticket_type == 3)
  {
    ticket_price = 50.0;
  }

  if (ticket_discount == 2)
  {
    ticket_price *= 0.5;
  }
  else if (ticket_discount == 3)
  {
    ticket_price *= 0.8;
  }
  else if (ticket_discount == 4)
  {
    ticket_price *= 0.9;
  }

  printf("The total cost of your purchase is %.2f.\n", ticket_price * ticket_quantity);
}