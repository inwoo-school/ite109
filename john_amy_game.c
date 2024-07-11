#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int a, b;

    printf("type a number (range: 1 <= N <= 1000)\n");
    scanf("%d", &N);

    if (!(N >= 1 && N <= 1000))
    {
        printf("input out of range\n");
        exit(-1);
    }

    for (a = 1; a <= 500; a++)
    {
        for (b = 1; b <= a; b++)
        {
            if ((a*a - b*b) == N)
            {
                printf("(%d,%d)\n",a,b);
            }
        }
    }
}


