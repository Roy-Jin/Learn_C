// 判断是否为闰年

#include <stdio.h>

int main()
{
    int year;
    printf("输入一个年份：");
    scanf("%d", &year);

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        printf("%d 是一个闰年\n", year);
    }
    else
    {
        printf("%d 不是一个闰年\n", year);
    }

    return 0;
}