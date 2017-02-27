#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;

    do{
        printf("Height: ");
        height = GetInt();
        if (height == 0)
        {
            return 0;
        }
    }
    while (height < 1 || height > 23);
    //height loop
    for (int i = 0; i < height; i++){
        //spaces loop
        for (int j = 0; j < height - i - 1; j++)
        {
            printf(" ");
        }
        //hashes loop
        for (int k = 0; k < i + 2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
