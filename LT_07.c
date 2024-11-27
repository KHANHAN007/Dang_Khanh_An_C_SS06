#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            printf("%d %d", i, n / i);
            printf("\n");
        }
    }
}