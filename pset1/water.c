#include <stdio.h>
#include <cs50.h>

int main(void)
{   int bottles = 12;
    printf("How many minutes did you shower today?\n");
    int minutes = GetInt();
    printf("Your shower is eqivalant to %d bottles of water.\n", bottles * minutes);
}
