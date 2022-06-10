//6. Joker를 포함한 53장의 카드를 섞은 후, 두 명의 플레이어에게 7장씩의 카드를 배분하는 프로그램을 만드시오.
//A.♠♣♥◆ 네 개의 기호 + 기호 별 각각 A, 2 ~10, J, Q, K 값의 카드 존재
//B.출력예시)	Player 1 : ♥3, Joker, ♣A, ♣J, ◆1, ◆10, ♠4
//Player 2 : ♥6, ◆2, ◆5, ♠Q, ♠K, ♣2, ♣3

// 문자열에 저장 후 한 장씩 줄 때마다 예외처리를 하고 싶었으나 구현능력이 부족했습니다.  
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>  
#include <time.h>

//int main()
//{
//	srand(time(NULL));
//	int cardnum = rand() % 53;
//	const char* card[53];
//	for (int i = 0; i < 52; ++i)
//	{
//		if (i < 14)
//		{
//			for (int j = 0; j < 14; ++j)
//			{
//				card[i] = "♥";
//			}
//		}
//	}
//}
