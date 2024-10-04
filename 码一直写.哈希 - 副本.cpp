#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int v(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0' + 1;
    else if(c >= 'A' && c <= 'Z')
    {
        return c - 'A' + 11;
    }
    else
    {
        return c - 'a' + 37;
    }
}
int turn(char a[])
{
    int base = 499;
    int ans = v(a[0]);
    for (int i = 1; i < strlen(a); i++)
    {
        ans = ans * base + v(a[i]);
    }
    return ans;
}
int main() {
    char str[100][100];
    for (int i = 0; i < 5; i++)//输入字符串
    {
        scanf("%s", str[i]);
    }
    int haxi[100];
    for (int i=0; i < 5; i++)//转化
    {
        haxi[i] = turn(str[i]);
    }
    for (int i = 0; i < 5; i++)//输出哈希值
    {
        printf("%d\n", haxi[i]);
    }
}