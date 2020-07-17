#include<stdio.h>
#include<cs50.h>

void pyramidBulider(int height);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8); //check the input value, if it is between 1-8

    pyramidBulider(height);
}

void pyramidBulider(int height)
{
    for (int a = 0; a < height; a++) //height conntrol
    {
        for (int s = 1; s < height - a; s++) //right spaces control
        {
            printf(" ");
        }

        for (int p = 0; p < a + 1; p++) //#'s buildier for left 
        {
            printf("#");
        }

        printf("  ");

        for (int i = 0; i < a + 1; i++) //#'s buildier for right
        {
            printf("#");
        }

        printf("\n");
    }
    printf("\n");
}