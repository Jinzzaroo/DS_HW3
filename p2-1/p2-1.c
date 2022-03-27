#include <stdio.h>
#define MAX_SIZE 100

float sum(float[], int);
float input[MAX_SIZE], answer;
int i;

void main(void)
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    for (i = 0; i < MAX_SIZE; i++)
        input[i] = i;
    /* for checking call by reference */
    printf("address of input = %p\n", input);
    answer = sum(input, MAX_SIZE);  //input의 값은 주소이고 이 주소를 list에 넘겨준다, MAX_SIZE 값을 n에 복사시켜 넣어준다.
    printf("The sum is: %f\n", answer);
}

//배열의 원소들의 합을 구하는 함수
//sum(x,y)에서 매개 변수 x는 배열의 주소를 가져오고 y는 정수 값을 복사해 가져온다.
//즉 x는 call by reference, y는 call by value
float sum(float list[], int n)
{
    printf("value of list = %p\n", list);       //list의 값에 input의 주소가 들어간다. -> list는 input을 가리킨다.
    printf("address of list = %p\n\n", &list);  //list의 값에 주소가 있지만 list 자체에도 고유의 주소가 있다.
    int i;
    float tempsum = 0;
    for (i = 0; i < n; i++)
        tempsum += list[i];     //list는 주소이고, list[i]는 list + i 가 주소인, 즉 가리키는 메모리의 값이다
    return tempsum;
}