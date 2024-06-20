#include <unistd.h>

void put_nbr(int n)
{
    int i = 0;
    char c[3];

    while (n / 10 > 0)
    {
        if (n / 10 > 0)
        {
            c[i] = n % 10 + '0';
            n = n / 10;
        }
        i++;
    }
    c[i] = n + '0';
    while (c[i])
    {
        write(1, &c[i], 1);
        i--;
    }
}

void put_nbr_recursive(int n) // 10 -> 0
{
    char r;
    if (n >= 10)
    {
        put_nbr_recursive(n / 10);
        char c = (n % 10) + '0';
        write(1, &c, 1);
    }
    else 
    {
        char c = (n % 10) + '0';
        write(1, &c, 1);
    }
}


int main(void)
{
    int n = 1;
    while(n <= 100)
    {
        if (n % 3 == 0 && n % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if (n % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if (n % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else
        {
            put_nbr_recursive(n);
        }
        write(1, "\n", 1);
        n++;
    }
    return 0;
}