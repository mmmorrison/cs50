#include <cs50.h>
#include<stdio.h>

int main(void){

    printf("Give me an integer:\n");
    int n = GetInt();

    if (n > 0){
        printf("You picked a positive integer!\n");
    } else {
        printf("You picked a negative integer! \n");
    }
}
