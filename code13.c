#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Programming";
    char str2[20];
    strcpy(str2,str1);//str2="Programming"
    printf("%s %s ",str1,str2);//
    printf("%d ", (str1!=str2));//1
    printf("%d ", strcmp(str1,str2));//0
    return 0;
}
