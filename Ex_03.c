#include <stdio.h>

int main()
{
    int pass = 3012006, n, i = 5;
    printf("Nhap mat khau co 7 chu so:");
    do
    {
        scanf("%d", &n);
        if (n != pass)
        {
            if (i == 0)
            {
                printf("Da nhap sai 5 lan.");
                return 1;
            }
            printf("Mat khau sai. con %d lan nhap.", i);
            i--;
        }
    } while (n != pass);
    printf("Mat khau dung.");
}