//字符串拼接，整型数转字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void func1();
void func2();
char *String_stitching(char *str1, char *str2);
int main()
{
    func1();
    func2();
    return 0;
}

void func1()
{
    //字符串拼接
    char *str1 = "hello";
    char *str2 = "world";
    char *str = String_stitching(str1, str2);
    printf("%s\n", str);
}

void func2()
{
    //整型数转字符串拼接
    int num = 398;
    char *str1 = "hello";
    char str2[4];
    str2[0] = num%1000/100 + '0';
    str2[1] = num%100/10 + '0';
    str2[2] = num%10 + '0';
    str2[3] = '\0';
    char *str = String_stitching(str2, str1);
    printf("%s\n", str);
}
char *String_stitching(char *str1, char *str2)
{
    char *str = (char*)malloc(strlen(str1)+strlen(str2));
    strcpy(str, str1);
    strcat(str, str2);
    return str;
}
