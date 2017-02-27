#include <stdio.h>
#include <cs50.h>

int main(void){

    printf("Give me an integer: \n");
    int x = GetInt();

    printf("Give me another integer: \n");
    int y = GetInt();

    printf("The sum of %d and %d is %d.\n", x, y, x + y);
}
