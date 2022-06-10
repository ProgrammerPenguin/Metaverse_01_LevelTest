//5. 로또 번호 생성기를 구현 하시오.
//A.최대 번호값과 생성 숫자 개수를 입력하면 해당 조건 내에서 중복되지 않는 숫자를 출력하는 로또 번호 생성기를 구현.
//B.최대값 : 60, 생성숫자 : 10 을 입력하면 1 ~60 사이의 중복되지 않는 숫자 10개를 생성한다.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
// 최대값과 생성숫자를 입력해 랜덤하게 생성숫자만큼 출력을 하게 하였으나 겹치는 부분처리과정을 해결하지못했습니다.
// 배열로 저장한 후 처리하고 싶었으나 부족해서 정확하게 하지 못했습니다.

//int main()
//{
//	srand(time(NULL));
//	int maxnum = 0, wantnum = 0;
//	scanf("%d %d", &maxnum, &wantnum); 
//
//	//int* ptr2[maxnum] = { 0 };
//	//int* ptr;
//	//ptr = (int*)malloc(sizeof(int) * maxnum);
//	//for (int i = 0; i < maxnum; i++)
//	//{
//	//	ptr = &i;
//	//}
//	//
//
//
//
//
//	for (int i = 0; i < wantnum; i++)
//	{
//		int choicenum = rand() % maxnum + 1;
//		printf("%d\n", choicenum);
//	}
//
//	
//}
