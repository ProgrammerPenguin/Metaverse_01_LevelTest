// 1.	�����Ϳ� ���۷����� Ȱ���� �Լ� �ܺο��� ����� �� ������ ������ ���� ���� �ٲٴ� Swap �Լ��� ���� �����Ͻÿ�.
// A.	void swap(int* a, int* b);
// B.	void swap(int& a, int& b);
#include <stdio.h>

// A.void swap(int* a, int* b);
void swap(int* a, int* b)
{
	int num = 0;
	int* temp = &num; // a�� �ű� temp�� �����.
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

// ����Ȯ��
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



// ������ �� Ǯ�� �ֺ��ο��� ��Ʈ�� �޾� �ۼ�
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