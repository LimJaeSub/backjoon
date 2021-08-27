#include<iostream>
#include<stdio.h>
#include<cstring>

long long int d(int n)
{
	int result;
	if ((n >= 1) && (n <= 9))
	{
		result = n + n;
	}
	else if ((n >= 10) && (n <= 99))
	{
		result = n + (n / 10) + (n % 10);
	}
	else if ((n >= 100) && (n <= 999))
	{
		result = n + (n / 100) + (n % 100)/10 + (n % 10);
	}
	else if ((n >= 1000) && (n <= 9999))
	{
		result = n + (n / 1000) + (n % 1000) / 100 + (n % 100) / 10 + (n % 10);
	}
	else if (n == 10000)
	{
		result = n + (n / 10000);
	}

	return result;
}

int main(void)
{
	int arr[15000];
	memset(arr, 0, sizeof(int) * 15000);

	for (int i = 0;i < 10000;i++)
	{
		int checknum = d(i+1);
		arr[checknum - 1] = 1;
	}
	for (int j = 0;j <= 10000;j++)
	{
		if (arr[j] == 0)
		{
			std::cout << j+1 << std::endl;
		}
	}

}

/*
#include <iostream>
#include <cstring>
void d(int *arr);

int main() {
   int arr[20000];

   memset(arr, 0, sizeof(int) * 20000);
   d(arr);

   for (int i = 0; i < 10000; i++) {
	  if (arr[i] == 0)
		 std::cout << i+1 << '\n';
   }
   return 0;
}

void d(int *arr) {
   for (int i = 1; i <= 10000; i++) {
	  int num = i;

	  while (num < 10000) {
		 num += (num / 1000) + (num % 1000) / 100 + (num % 100) / 10 + (num % 10);
		 arr[num - 1] = 1;
	  }
   }
}
*/