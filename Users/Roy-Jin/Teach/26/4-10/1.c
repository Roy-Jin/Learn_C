#include <stdio.h>
#include <string.h>

typedef struct {
    char ch[1000];
    int len;
} SeqString;

int numwords(SeqString s) {
    char prec = ' ';
    char nowc;
    int num = 0;
    int i;

    for (i = 0; i < s.len; i++) {
        nowc = s.ch[i];
        if ((nowc != ' ') && (prec == ' ')) {
            num++;
        }
        prec = nowc;
    }
    return num;
}

int main() {
    SeqString s;
    int num;
    char st[1000] = {"To a large degree, the measure of our peace of mind is determined by how much we are able to live on the present moment. Irrespective of what happened yesterday or last year, and what may or may not happen tomorrow, the present moment is where you are always!"};

    strcpy(s.ch, st);
    s.len = strlen(st);

    puts(st);

    num = numwords(s);

    printf("英文短文中单词个数为:%d\n", num);

    return 0;
}