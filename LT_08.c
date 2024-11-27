#include <stdio.h>

int main()
{
    float n, l, t;
    scanf("%f%f%f", &n, &l, &t);

    while(t--)
    {
        n +=n * l;
    }
    printf("%.3f", n);
    
}