#include<stdio.h>
#include<cs50.h>

void pyramidBuilder(int h);

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8); //check the input value, if it is between 1-8
    
    pyramidBuilder(height);
}

void pyramidBuilder(int height)
{
    for (int v = 0; v < height; v++) //height conntrol
    {
        for (int j = height; j > (v + 1); j--) //spaces control
        {
            printf(" ");
        }
        for (int i = 0; i < (v + 1); i++) //#'s control'
        {
            printf("#");
        }
        printf("\n");
    }

}