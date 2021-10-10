#include "counter.h"

int main(int argc, char **argv)
{
    int count;

    count = countFromTerm();
    if (count < 0)
    {
        printf("Ooops!\n");
        return 2;
    } else
    {
        printf("Sum of symbols between brackets = %i\n", count);
        return 0;
    }
}
