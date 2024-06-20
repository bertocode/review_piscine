#include <unistd.h>

int main (void)
{
    write(1, "o", 1);
    write(1, "\n", 1);
    return 0;
}