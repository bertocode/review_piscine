#include <stdio.h>

int atoi(char *c)
{
    int number;
    int sign;
    int n;

    n = 0;
    sign = 1;
    number = 0;
    while(c[n] == 32 || (c[n] <= 13 && c[n] >= 9)) // spaces and tabs and other spacing
        n++;
    if (c[n] == '-' || c[n] == '+')
    {
        if(c[n] == '-')
            sign = -1;
        n++;
    }
    while (c[n] >= '0' && c[n] <= '9')
    {
        number = number * 10 + (c[n] - '0');
        n++;
    }
    return (sign * number);
}

int main(void)
{   
    printf("%d", atoi("     +4324a32"));
    printf("%s", "\n");
    return 0;
}