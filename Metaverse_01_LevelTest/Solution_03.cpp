// 3.다음의 형태로 * 을 출력하는 코드를 구현 하시오.
// 피라미드형 별찍기

#include <stdio.h>
// 공백은 1씩 줄어들고, 별은 2n개씩 증가함으로 반복문을 써서 해결해야겠다고 생각했습니다.
//int main()
//{
//		int count = 5;
//	for(int i = 0; i < count; i++)
//	{
//		for (int j = count - 1; j > i; j--)
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}