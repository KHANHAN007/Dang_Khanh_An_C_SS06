#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; ++i)
    {
        switch ((i % 5 == 0) ? (i % 3 == 0 ? 1 : 0) : (i % 3 == 0 ? -1 : 2))
        {
        case -1:
            printf("Fizz ");
            break;
        case 0:
            printf("Buzz ");
            break;
        case 1:
            printf("FizzBuzz ");
        default:
            printf("%d ", i);
            break;
        }
    }
    return 0;
}