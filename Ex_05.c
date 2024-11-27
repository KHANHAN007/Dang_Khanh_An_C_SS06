#include <stdio.h>

int isLeapYear(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}
int main()
{
    int y, m;
    printf("Nhap nam: ");
    scanf("%d", &y);
    printf("Nhap thang: ");
    scanf("%d", &m);

    if (y < 0)
    {
        printf("Nam khong hop le. ");
        return 1;
    }

    int dayOfMonth = 0;
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dayOfMonth = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        dayOfMonth = 30;
        break;
    case 2:
        if (isLeapYear(y))
            dayOfMonth = 29;
        else
            dayOfMonth = 28;
        break;
    default:
        printf("Thang nhap vao khong hop le.");
        return 1;
    }
    printf("Thang %d nam %d co %d", m, y, dayOfMonth);
    return 0;
}
