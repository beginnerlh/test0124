//实现 strStr() 函数。
//
//给定一个 haystack 字符串和一个 needle 字符串，在 haystack 字符串中找出 needle 字符串出现的第一个位置(从0开始)。如果不存在，则返回 - 1。
//
//示例 1:
//
//输入 : haystack = "hello", needle = "ll"
//输出 : 2
//	 示例 2 :
//
// 输入 : haystack = "aaaaa", needle = "bba"
//  输出 : -1
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
int strStr(char* haystack, char* needle) {
	int i = 0;
	int j = 1;
	int	k = 0;
	if (haystack == NULL || needle == NULL || needle[0] == '\0')
	{
		return 0;
	}

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			k = i + 1;
			j = 1;			//每次循环赋初值必不可少
			while (needle[j] != '\0' && haystack[k] != '\0')
			{
				if (needle[j] != haystack[k])
				{
					break;
				}

				++j;
				++k;
			}

			if (needle[j] == '\0')
				return i;
			else if (haystack[k] == '\0')
				return -1;
			else
				++i;

		}
		else
			++i;
	}
	return -1;

}
int main()
{
	char a[] = "hello";
	char b[] = "ll";
	int num = strStr(a, b);
	printf("%d\n", num);
	system("pause");
	return 0;
}