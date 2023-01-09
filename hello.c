#include <stdio.h>
#include <cs50.h>

// Greet User Return Name
int main(void)
{
    string name = get_string("What's your name? ") ;
    printf("hello %s\n", name);
}
