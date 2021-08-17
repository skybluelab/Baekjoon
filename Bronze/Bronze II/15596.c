#include <stdio.h>

long long sum(int *a, int n)
{

    long long Sum = 0;
    for(int i = 0 ; i < n; i++){
        Sum = Sum + a[i];
    }

    return Sum;
}