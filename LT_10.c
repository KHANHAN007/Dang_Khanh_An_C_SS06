// so nguyen to: 2 3 5 7

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int flag = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (!flag)
        printf("So %d la so nguyen to.", n);
    else
        printf("So %d khong phai la so nguyen to.", n);
}