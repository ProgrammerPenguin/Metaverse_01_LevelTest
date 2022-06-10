//7. 1 ~25까지의 숫자가 랜덤하게 배치되는 5X5의 빙고게임 판을 생성한 후, 숫자 입력을 받을 때마다 해당 숫자를 지워주고 가로, 세로, 대각선의 빙고 줄이 완성될 때마다 빙고 개수를 갱신해서 표시해 주는 빙고 게임을 제작 하시오.
//출력예시)
//19 17	16	23	20
//5	 13	10	14	24
//6	 12	18	2	4
//21 3	7	11	1
//15 25	22	8	9
//현재 0줄의 빙고가 완성되었습니다.
//숫자를 입력해 주세요 :

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>
// 
//int main()
//{
//	srand(time(NULL));
//	int num = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			num = rand() % 25 + 1;
//			printf(" %3d ", num);
//		}
//		printf("\n");
//	}
//	
//}
