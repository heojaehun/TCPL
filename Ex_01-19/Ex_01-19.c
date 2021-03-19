#include <stdio.h>

#define MAXLINE 1000
#define MAXBUFF 100


int mygetline(char s[], int lim);
void copyline(char to[], char from[], int len);
void reverse(char s[], int len);

void main()
{
    char line[MAXLINE];
    char buff[MAXBUFF][MAXLINE];
    int len = 0;
    int idx = 0;


    while((len = mygetline(line, MAXLINE)) > 0)
    {
        reverse(line, len);
        copyline(buff[idx], line, len);
        idx++;
    }

    int i = 0;
    while(i < idx)
    {
        printf("%d %s", i, buff[i]);
        i++;
    }
}

int mygetline(char s[], int lim)
{
    int i = 0;
    char c;

    while((i < MAXLINE-1) && ((c = getchar()) != EOF) && (c != '\n'))
    {
        s[i] = c;
        i++;
    }

    if (c == '\n')
    {
        s[i] = c;
        i++;
    }

    s[i] = '\0';

    return i;
}

void copyline(char to[], char from[], int len)
{
    while(len--)
        to[len] = from[len];
}

void reverse(char s[], int len)
{
    int head, tail;
    head = 0;
    tail = len - 1;

    while (s[tail] == '\0' || s[tail] == '\n')
        tail--;

    while(head < tail)
    {
        char temp;

        temp = s[head];
        s[head] = s[tail];
        s[tail] = temp;

        head++;
        tail--;
    }
}
