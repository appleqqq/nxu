#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>  
#include<string.h>  

int main()
{
    int k;
    scanf("%d", &k);
    char s[500000];
    char c1, c2;
    scanf("%s %c %c", s, &c1, &c2);

    int len = strlen(s);
    int count = 0;
    int i = 0;
    int posb = -1; // 用于记录当前找到的c2的位置  

    // 从左到右遍历字符串，查找以c1开头、c2结尾的子串  
    while (s[i] != '\0')
    {
        if (s[i] == c1)
        {
            // 重置posb以查找当前c1之后的c2  
            posb = strlen(s)-1;
            while (posb >= i + k-1)
            {
                if (s[posb]==c2)
                {
                    count++;
                }
                posb--;
            }
            // 如果找到了c2且子串长度大于等于k，则计数  

            // 不需要break，因为我们要继续查找下一个可能的c1  
        }
        i++;
    }
    // 输出结果，不需要除以2  
    printf("%d", count);
    return 0;
}