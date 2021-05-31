#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int count;
	int mainnum;
	int inputnum;
	
	scanf_s("%d", &count);
	scanf_s("%d", &mainnum);
	int* arr = (int*)malloc(sizeof(int) * count);

	for (int i = 0; i < count; i++)
	{
		scanf_s("%d", &inputnum);
		arr[i] = inputnum;
	}

	for (int i = 0; i < count; i++)
	{
		if (arr[i] < mainnum)
		{
			printf("%d ",arr[i]);
		}
	}
}