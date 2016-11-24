#include <stdio.h>
#include <cs50.h>

int main(void){

    printf("Give me an integer:\n");
    int n = GetInt();

    if (n > 0){
        printf("You picked a positive integer!");
    } else if (n == 0){
        printf("You picked 0");
    } else {
        printf("You picked a negative integer!");
    }

}
