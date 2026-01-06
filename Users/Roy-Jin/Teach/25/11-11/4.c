#include <stdio.h>
int main()
{
    int x = 20;
    printf("%d", 0 < x < 20);
    printf("%d\n", 0 < x && x < 20);
    return 0;
}