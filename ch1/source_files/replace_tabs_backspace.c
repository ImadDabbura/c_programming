#include <stdio.h>

/* replace tabs with \t, backspace with \b, and \ with \\ */
int main()
{
    int c;

    while ((c = getchar())!= EOF){
        if (c == '\t')
            printf("\\t");
        else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }
}
