함수의 반환 형을 적지 않아도 에러가 발생하지 않았다.
대신 경고는 뜬다.
반환 형을 지정하지 않은 경우 기본값인 int형이 된다.

``` c
Ex_01-03.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
    3 | main()
      | ^~~~
```
