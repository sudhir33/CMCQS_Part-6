#include<stdio.h>
int main()
{
	char str[2];
    int i=0;
    scanf("%s", str);//sudhir\0
    while(str[i] != '\0')//
    {
        printf("%c", str[i]);//s
        i++;
    }	
    return 0;
}
