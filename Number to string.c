//program to convert number to string using sprintf() functions
#include <stdio.h>
#include <string.h>

int main()
{
    char n[20];
    float a = 32.73;
    sprintf(n, "%f", a);
    printf("\nThe string for the num is %s", n);
    return 0;
}
