#include <stdio.h>
#include <stdlib.h>
int isPrime(int num)
{
    int i, count = 0;
    for(i=1; i<=num; i++)
    {
        if(num%i == 0)
            count++;
    }
    if(count = 1)
        return 1;
    else
        return 0;
}
