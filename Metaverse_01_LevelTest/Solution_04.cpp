//4. 배열의 값을 오름차순으로 정렬해서 반환하는 함수를 구현 하시오.

#include <stdio.h>

// 배열을 하나 만들어 비교하면서 값을 넣어서 반환하고싶었으나 시간이 부족해 못했습니다.

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
