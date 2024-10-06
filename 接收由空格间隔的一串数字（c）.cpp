#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[10000];
	int count = 0;
	int i = 0;
	do
	{
		scanf("%d", &a[i]);
		i++;
	} while (getchar() != '\n');
	return 0;
}