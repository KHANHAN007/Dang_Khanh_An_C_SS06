// so nguyen to: 2 3 5 7

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int flag, count = 0, i = 2;
    while (n != count)
    {
        flag = 0;
        for (int j = 2; j * j <= i; ++j)
        {
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            printf("%d ", i);
            count++;
        }
        i++;
    }
}