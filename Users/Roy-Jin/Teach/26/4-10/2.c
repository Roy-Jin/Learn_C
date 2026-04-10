#include <stdio.h>

/**
 * @brief 统计字符串中某个字符出现的次数
 * @param s 待统计的字符串
 * @param c 要统计的字符
 * @return 字符 c 在字符串 s 中出现的次数
 */
int countChar(char s[], char c) {
    int count = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[] = "hello world";
    char target = 'o';
    int result = countChar(str, target);
    printf("字符 '%c' 在字符串 \"%s\" 中出现了 %d 次。\n", target, str, result);
    
    char str2[] = "programming";
    char target2 = 'g';
    int result2 = countChar(str2, target2);
    printf("字符 '%c' 在字符串 \"%s\" 中出现了 %d 次。\n", target2, str2, result2);
    
    return 0;
}