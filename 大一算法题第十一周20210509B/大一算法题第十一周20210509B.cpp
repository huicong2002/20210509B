#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long long int arr[55];
	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 2;
	for (int i = 3; i < 55; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	int x;
	scanf("%d", &x);
	long long int X = arr[x];

	printf("%lld", X);
	
	return 0;
}