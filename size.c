#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    int **x;
    printf("sizeof(x) = %lu\n", sizeof(x));     //x는 주소
    printf("sizeof(*x) = %lu\n", sizeof(*x));   //*x도 주소
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x는 정수값
}