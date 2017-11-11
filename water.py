#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    float g;
    float o;
    int b;
    do{
        printf("Minutes: ");
        n=get_int();
    }
    while (n<0);
    g=n*1.5;
    o=g*128;
    b=o/16;
    printf("Bottles: %i\n",b);
}
