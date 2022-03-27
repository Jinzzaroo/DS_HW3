#include <stdio.h>
void print1(int *ptr, int rows);
int main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    int one[] = {0, 1, 2, 3, 4};        //각 원소의 값이 초기화 되어있는 one 배열 선언
    printf("one = %p\n", one);          //one은 주소
    printf("&one = %p\n", &one);        //&one = one
    printf("&one[0] = %p\n", &one[0]);  //&one[0] = &one = one
    printf("\n");
    print1(&one[0], 5);     //(주소, 정수값)
    return 0;
}

//배열의 각 주소와 값을 출력하는 함수
//주소를 받아 ptr에 넘겨줌. 마찬가지로 주소를 넘겨주었으니 call by reference
void print1(int *ptr, int rows)
{ /* print out a one-dimensional array using a pointer */
    int i;
    printf("Address \t Contents\n");
    for (i = 0; i < rows; i++)
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //ptr이 one값(주소)를 받으므로  *(ptr + i)는 *(one + i)
    printf("\n");
}