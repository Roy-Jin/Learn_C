#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Author: Roy-Jin
// 猜数字游戏

int startGame();

int main()
{
    int ch = 'Y';
    
    printf("***欢迎来到猜数字游戏***\n\n");
    printf("请回车以开始游戏>>>");
    scanf("%*c");

    while (1)
    {
        startGame();
        printf("游戏结束，是否再玩一局？(Y/y)：");
        scanf(" %c", &ch);
        if (ch != 'Y' && ch != 'y')
        {
            break;
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

int startGame()
{
    int num, guess, count = 0;

    srand(time(NULL));
    num = rand() % 100 + 1;

    while (1)
    {
        printf("你要猜的数字：");
        if (scanf("%d", &guess) != 1 || guess < 1 || guess > 100)
        {
            printf("[!]输入无效，请输入一个在1到100之间的整数\n");
            scanf("%*[^\n]"); // 清空输入缓冲区
            scanf("%*c");     // 跳过换行符
            continue;
        }

        if (guess == num)
        {
            count++;
            printf("[@]恭喜你猜对了！\n一共使用了【%d】次猜测机会。\n", count);
            break;
        }
        else if (guess < num)
        {
            printf("[@]你猜的数字太小了！\n");
        }
        else
        {
            printf("[@]你猜的数字太大了！\n");
        }

        count++;

        if (count == 10)
        {
            printf("[@]你已经猜错十次，游戏失败！\n正确的数字是【%d】\n", num);
            break;
        }
    }

    return 0;
}
