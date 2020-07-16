#include<stdio.h>
#include<cs50.h>

int main(void)
{
    string name = get_string("What's your name? "); //ask for name, save the return value in the variable of type string called "name"
    printf("Hello, %s!\n", name); //join the user name with a greeting
}