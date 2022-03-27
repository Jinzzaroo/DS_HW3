#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    int list[5];    //원소 5개인 list 배열 선언
    int *plist[5];  //원소 5개인 포인터 plist 배열 선언

    //list[0]과 list[1]에 각각 10, 11 값 초기화
    list[0] = 10;
    list[1] = 11;

    //plist[0]에게 int형의 값을 갖고 사이즈는 4bytes인 메모리를 할당하여 (from heap) 그 메모리 주소를 건네준다.
    plist[0] = (int *)malloc(sizeof(int));  

    printf("list[0] \t\t= %d\n", list[0]);

    //list의 주소 = list의 값 = list[0]의 주소 = list + 0 의 주소 = list + 0 의 값
    printf("address of list \t= %p\n", list);
    printf("address of list[0] \t= %p\n", &list[0]);

    //list 배열의 원소들은 int 형이므로 각 원소의 메모리는 4 bytes 를 차지한다.
    //따라서 index가 +1 되면 주소값 역시 4만큼 올라간다.
    printf("address of list + 0 \t= %p\n", list + 0);
    printf("address of list + 1 \t= %p\n", list + 1);
    printf("address of list + 2 \t= %p\n", list + 2);
    printf("address of list + 3 \t= %p\n", list + 3);
    printf("address of list + 4 \t= %p\n", list + 4);
    printf("address of list[4] \t= %p\n", &list[4]);
    free(plist[0]); //메모리 반환을 안 하면 동적 메모리 할당을 하는 이유가 없다.
}