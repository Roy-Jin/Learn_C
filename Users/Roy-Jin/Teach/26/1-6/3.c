#include <stdio.h>
#include <math.h>
int main()
{
    int m, i, k, h = 0, leap = 1;
    printf("1~200之间的素数如下：\n");
    // 单独处理素数2（唯一的偶素数）
    printf("%-4d", 2);
    h++; // 素数计数加1
    if (h % 10 == 0)
    {
        printf("\n");
    }
    // 从3开始，只遍历奇数（步长设为2，排除所有偶数）
    for (m = 3; m <= 200; m += 2)
    {
        k = sqrt(m);
        // 内循环也从3开始遍历奇数（偶数因数已提前排除）
        for (i = 3; i <= k; i += 2)
        {
            if (m % i == 0)
            {
                leap = 0;
                break;
            }
        }
        if (leap)
        {
            printf("%-4d", m);
            h++;
            if (h % 10 == 0)
            {
                printf("\n");
            }
        }
        leap = 1; // 重置素数标记
    }
    printf("\nThe total is %d\n", h);
    // system("pause");
    return 0;
}
