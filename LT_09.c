#include <stdio.h>

int check(int n)
{
    int tmp = 0, N = n;
    while (n != 0)
    {
        tmp += (n % 10) * (n % 10) * (n % 10);
        n /= 10;
    }
    return tmp==N;
}
int main()
{
    int result = 100;
    while(result<1000)
    {
        if(check(++result))
            printf("%d\t", result);
    }
}