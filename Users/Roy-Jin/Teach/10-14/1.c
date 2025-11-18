//编写程序，将”“China 译成密码，密码规律：用原来的字母后面第4个字母代替原来的字母、例如：字母“A后面第4个字母是E、用E代替A。因此.China 应译为”Gimre 并输出。

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("<<<原文本: ");
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 4;
            if (str[i] > 'Z') {
                str[i] = str[i] - 26;
            }
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] + 4;
            if (str[i] > 'z') {
                str[i] = str[i] - 26;
            }
        }
    }
    printf(">>>加密后: %s\n", str);
    return 0;
}
