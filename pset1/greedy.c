#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int coins = 0;
    float change;
    float balance;
    float newBalance;

    do
    {
        printf("How much change is owed? \n");
        change = GetFloat();
    }

    while(change <= 0);

    change = round(change * 100);
    coins = change / 25;
    balance = (int)change % 25;
    coins += balance / 10;
    newBalance = (int)balance % 10;
    coins += newBalance / 5;
    newBalance = (int)balance % 5;
    coins += newBalance;

    printf("%d\n", coins);
}
