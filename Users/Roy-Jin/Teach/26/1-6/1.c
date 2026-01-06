#include <stdio.h>
int main()
{
    // 斐波那契前两项初始值
    long a = 1, b = 1, c;
    int i;
    // 先输出前两项，占12位宽度
    printf("%12ld%12ld", a, b);
    // 循环生成第3到第40项（共38次循环）
    for (i = 3; i <= 40; i++)
    {
        c = a + b;
        printf("%12ld", c);
        // 每4项换行
        if (i % 4 == 0)
        {
            printf("\n");
        }
        a = b;
        b = c;
    }
    // 处理最后一行不足4项的换行
    if (40 % 4 != 0)
    {
        printf("\n");
    }
    return 0;
}
