#include <cs50.h>
#include <stdio.h>
#include <math.h>

int int main(void) {
  float change;
  int coins = 0;

  do {
    printf("How much change is owed? \n");
    change = GetFloat();
  } while(change <= 0);

}
