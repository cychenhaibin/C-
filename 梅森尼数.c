#include<stdio.h>
#include<math.h>
int main()
{
    int n, b = 0;
    long long i;
    double a;
    int flag = 1;
    for (n = 2; n <= 50; n++)
    {
        a = pow(2, n) - 1;
        long long c = ceil(a);
        flag = 1;
        for (i = 2; i < sqrt(c); i++)
        {
            if (c % i == 0)
            {
                flag = 0;
                break;
            }


        }
        if (flag)
        {
            printf("2^%d-1=%.0lf\n", n, a);
            b++;
        }


    }
    printf("指数n于[2,50]中梅森尼数共有%d个.", b);
}

