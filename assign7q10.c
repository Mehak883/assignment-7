// 10. Write a program to print all Armstrong numbers under 1000
#include <stdio.h>
int main()
{
    int n, temp = 0, r, rev = 0;
    printf("Armstrong numbers under 1000 : ");
    for (n = 0; n < 1000; n++)
    {
        temp = n;
        rev = 0;
        while (temp > 0)
        {
            r = temp % 10;
            temp = temp / 10;
            rev = rev + r * r * r;
        }
        if (n == rev)
        {
            printf("%d ", rev);
        }
    }
    return 0;
}