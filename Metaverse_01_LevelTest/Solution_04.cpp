//4. �迭�� ���� ������������ �����ؼ� ��ȯ�ϴ� �Լ��� ���� �Ͻÿ�.

#include <stdio.h>

// �迭�� �ϳ� ����� ���ϸ鼭 ���� �־ ��ȯ�ϰ�;����� �ð��� ������ ���߽��ϴ�.

void sortArray(int* arr, int n)
{
	int minnum[1000] = { 0 };
	for (int i = n; i > 0; i--)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] > minnum[i])
			{
				minnum[j] = arr[j];
			}
			n--;
		}
		arr[i] = minnum[i];
	}

}

int main()
{
	int arr[5] = { 5, 2, 4, 1, 3 };
	sortArray(arr, 5);

}
// arr : [ 1, 2, 3, 4, 5 ]
