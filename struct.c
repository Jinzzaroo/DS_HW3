#include <stdio.h>

//구조체 선언 방식 1 : struct 이용
struct student1
{
    char lastName;
    int studentId;
    char grade;
};

//구조체 선언 방식 2 : typedef 이용
typedef struct
{
    char lastName;
    int studentId;
    char grade;
} student2;

int main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    struct student1 st1 = {'A', 100, 'A'};          //student1 구조체를 쓰려면 앞에 struct 써야한다.
    printf("st1.lastName = %c\n", st1.lastName);    //구조체 멤버에 접근하려면 구조체변수이름.구조체멤버 형식으로 써야한다.
    printf("st1.studentId = %d\n", st1.studentId);
    printf("st1.grade = %c\n", st1.grade);

    student2 st2 = {'B', 200, 'B'};                 //student2 구조체는 앞에 struct 안 써도 된다.
    printf("\nst2.lastName = %c\n", st2.lastName);
    printf("st2.studentId = %d\n", st2.studentId);
    printf("st2.grade = %c\n", st2.grade);

    student2 st3;
    st3 = st2;  //구조 치환은 가능, st2의 값이 st3로
    printf("\nst3.lastName = %c\n", st3.lastName);
    printf("st3.studentId = %d\n", st3.studentId);
    printf("st3.grade = %c\n", st3.grade);

    //전체 구조의 동등성 검사는 불가능
    /* equality test */
    // if (st3 == st2) /* not working */
    //     printf("equal\n");
    // else
    //     printf("not equal\n");
    // return 0;
}