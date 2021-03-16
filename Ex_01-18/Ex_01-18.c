#include <stdio.h>
#define MAXLINE 1000
#define MAXBUFF 100

int mygetline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char buff[MAXBUFF][MAXLINE];
    char longest[MAXLINE];
    int buff_idx, i;

    max = 0;
    buff_idx = 0;

    while ((len = mygetline(line, MAXLINE)) > 0)
    {
        if (len > max) 
        {
            max = len;
            copy(longest, line);
        }

        printf("%d\n", len);
        
        if (len > 1)
        {
            copy(buff[buff_idx], line);
            buff_idx = (buff_idx + 1) % MAXBUFF;
        }
    }
    if (max > 0)
        printf("Longest: %s", longest);


    for(i = 0; i < buff_idx; i++)
        printf("[%3d] %s", i, buff[i]);

    return 0;
}   

int mygetline(char s[], int lim)
{
    int c, i;

    for(i = 0; i < lim-1 && (c=getchar()) != EOF && c!= '\n'; ++i)
        s[i] = c;

    while (s[i-1] == ' ' || s[i-1] == '\t')
        i--;

    printf("%d...\n", i);

    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}
