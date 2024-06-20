#include <unistd.h>

int main(int argc, char **argv)
{
    // Escape conditions
    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        int n = 0;

        while (argv[1][n])
        {
            write(1, &argv[1][n], 1);
            n++;
        }
            write(1, "\n", 1);
    }
    return (0);
}

    // argc ->> 1 / a.out
    // argc ->> 2 / a.out arg1
    // argc ->> 3 / a.out arg1 arg2
    // argv[0] -> "a.out"
    // argv[1] -> "arg1"
    // argv[2] -> "arg2"