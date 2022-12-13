#include <stdio.h>

int main()
{
    char c;
    char s[50];
    char sen[50];

    scanf("%c\n", &c);
    scanf("%s\n", s);
    fgets(sen, sizeof(sen), stdin);

    printf("%c\n", c);
    printf("%s\n", s);
    printf("%s", sen);

    return 0;
}