#include <stdio.h>

//student 구조체 생성
struct student
{
    char lastName[13]; /* 13 bytes */
    int studentId;     /* 4 bytes */
    short grade;       /* 2 bytes */
};

int main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    struct student pst;     //student 형 변수 pst 선언
    printf("size of student = %ld\n", sizeof(struct student));  //student의 구조체의 크기는 24 (4bytes 기준으로 패딩)
    //13 + 4 + 2 해서 19가 나올 것 같으나 padding, 즉 4bytes씩 끊어서 남은 빈 공간은 그대로 비어있게 놔둔다.
    //따라서 lastName[13]은 16, short는 4 할당
    printf("size of int = %ld\n", sizeof(int)); //4
    printf("size of short = %ld\n", sizeof(short)); //2

    return 0;
}