#include <stdio.h>
#include <string.h>

int main()
{
    int i, len, is_word_end = 0;
    
    char s[1000];
    gets(s);

    len = strlen(s);

    for (i = 0; s[i] != 0; i++) {
        printf("%c", s[i]);

        if (s[i] == ' ') {
            printf("\n");
        }
    }

    return 0;
}