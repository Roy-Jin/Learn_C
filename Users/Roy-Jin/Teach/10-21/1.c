#include <stdio.h>

// 2. 编写程序，将一个三位数整数256的个位、十位和百位分离后输出，输出结果为a=2，b=5，c=6。
int ti2()
{
    int m = 256;
    int a = m / 100;
    int b = (m - a * 100) / 10;
    int c = m % 10;
    printf("题目二：\n\t");
    printf("a=%d, b=%d, c=%d\n", a, b, c);
}

// 3. 已知x=3.6，y=4.2。编写程序，求表达式x+y及(int)x%(int)(x+y)的值。
int ti3()
{
    float x = 3.6;
    float y = 4.2;
    int c = (int)x % (int)(x + y);
    printf("题目三：\n\t");
    printf("x+y=%.1f, (int)x%(int)(x+y)=%d \n", x + y, c);
}

int main()
{
    ti2();
    ti3();
    return 0;
}