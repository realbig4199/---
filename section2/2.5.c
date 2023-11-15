#include <stdio.h>

int main()
{
    int x, y, z;  // 변수 선언 : int를 담을 메모리 공간을 확보하고 그 공간을 변수 x를 통해 접근할 수 있음.
    int Z;  // 대문자와 소문자를 구분함. (즉, 다른 변수)

    x = 1;  // 변수에 값 대입
    y = 2;

    z = x + y;  // 변수에 연산 결과 대입 (=)

    printf("%d", z);

    return 0;   // 반환형과 일치시킴.
}