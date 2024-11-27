#include <stdio.h>

int main()
{
    int a, oddCount = 0, evenCount = 0;
    for (int i = 0; i < 5; ++i)
    {
        scanf("%d", &a);
        if (a % 2 != 0)
            oddCount++;
        else
            evenCount++;
    }
    printf("So so chan: %d", evenCount);
    printf("\nSo so le: %d", oddCount);
}