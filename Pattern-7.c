/*

     1  3  5  7  9
    11 13 15 17 19
    21 23 25 27 29
    31 33 35 37 39
    41 43 45 47 49

*/

#include <stdio.h>

int main()
{
    for (int i = 1, k = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++, k += 2)
        {
            printf("%2d ", k);
        }

        printf("\n");
    }

    return 0;
}