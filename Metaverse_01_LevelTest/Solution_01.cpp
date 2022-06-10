// 1.	포인터와 레퍼런스를 활용해 함수 외부에서 선언된 두 정수형 변수의 값을 서로 바꾸는 Swap 함수를 각각 구현하시오.
// A.	void swap(int* a, int* b);
// B.	void swap(int& a, int& b);
#include <stdio.h>

// A.void swap(int* a, int* b);
void swap(int* a, int* b)
{
	int num = 0;
	int* temp = &num; // a를 옮길 temp를 만든다.
	*temp = *a;   
	*a = *b;
	*b = *temp;
	return;
}

// B.void swap(int& a, int& b);
void swap2(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
	return;

}

// 구동확인
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int* aP = &a;
//	int* bP = &b;
//	swap(aP, bP);
//	printf("%d %d \n", a, b);
//
//	int c = 9;
//	int d = 14;
//	swap2(c, d);
//	printf("%d %d\n", c, d);
//
//}



// 문제를 다 풀고 주변인에게 힌트를 받아 작성
//void swap(int* a, int* b)
//{
//	int temp = *a;
//
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//
//	swap(&a, &b);
//	printf("%d %d", a, b);
//
//}