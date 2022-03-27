#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    int list[5];        //원소 5개를 갖는 list 배열 선언
    int *plist[5] = {   //주소가 담겨 있는 변수, 즉 포인터 변수를 원소로 갖는 plist 배열 선언
        NULL,
    };

    plist[0] = (int *)malloc(sizeof(int));  //포인터 plist[0]에다가 Heap영역에서 int형의 값을 갖는 int사이즈(4bytes) 메모리의 주소를 할당
    list[0] = 1;
    list[1] = 100;
    *plist[0] = 200;    //11 line에서 할당된 메모리의 값을 200으로 초기화

    printf("value of list[0] = %d\n", list[0]);                 //list[0]의 값 -> 1
    printf("address of list[0] = %p\n", &list[0]);              //list[0]의 주소 -> ....FF0c
    printf("value of list = %p\n", list);                       //list의 값 -> list[0]의 주소 -> ....FF0c
    printf("address of list (&list) = %p\n", &list);            //list의 주소 -> list[0]의 주소 -> ....FF0c
    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);                 //list[1]의 값 -> 100
    printf("address of list[1] = %p\n", &list[1]);              //list[1]의 주소 -> list[0]의 주소 + 4 bytes -> ....FF10
    printf("value of *(list+1) = %d\n", *(list + 1));           // *(list + 1) 값 ->list[1]의 값 -> 100
    printf("address of list+1 = %p\n", list + 1);               //(list + 1)의 주소 -> list[1]의 주소 -> ....FF10
    printf("----------------------------------------\n\n");
    printf("value of *plist[0] = %d\n", *plist[0]);             // *(plist[0]) 값 -> 200   by line 14
    printf("&plist[0] = %p\n", &plist[0]);                      //plist[0]의 주소 -> ....FEF8
    printf("&plist = %p\n", &plist);                            //plist의 주소 -> plist[0]의 주소 -> ....FEF8
    printf("plist = %p\n", plist);                              //plist의 값 -> plist[0]의 주소 -> ....FEF8
    printf("plist[0] = %p\n", plist[0]);                        //plist[0]의 값 -> 포인터 plist[0]이 가리키고 있는 메모리의 주소 -> ....18E0

    //plist[0]이외의 plist[]들은 주소를 받지 못했으므로 초기값인 null
    printf("plist[1] = %p\n", plist[1]);
    printf("plist[2] = %p\n", plist[2]);
    printf("plist[3] = %p\n", plist[3]);
    printf("plist[4] = %p\n", plist[4]);
    free(plist[0]);     //Heap영역에서 쓴 메모리를 다시 반환
}