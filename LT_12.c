#include <stdio.h>

int main()
{
    int n, Fn,F1=0,F2=1;
    scanf("%d", &n);

    n -= 2;
    printf("%d %d ", F1, F2);
    while (n--)
    {
        Fn = F1 + F2;
        F1 = F2;
        F2 = Fn;
        printf("%d ", Fn);
    }
}