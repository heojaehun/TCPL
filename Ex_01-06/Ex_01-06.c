#include <stdio.h>

/*
 * # Ex_01-06 
 * 
 * ## 문제
 * - getchar() != EOF가 0 또는 1이 되는지 실험해보라.
 *
 * ## 참고
 * - Ubuntu 환경에서 EOF 입력은 Ctrl+D로 할 수 있다.
 * - Windows 환경에서는 실험해보지 않았다.
 */

void main()
{
    int c;

    while(c = (getchar() != EOF))
        printf("%d\n", c);

    printf("\n%d\n", c);
}
