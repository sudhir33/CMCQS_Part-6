#include<stdio.h>
int main()
{
    char name[]="This is Sudhir";
    char *ptr;
    ptr=name;//h
    while(*ptr != '\0')//T
    {
        printf("%c", *ptr);//This is sudhir
        ptr++;
    }	
    return 0;
}
