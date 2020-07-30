#include<stdio.h>
int main()
{
    char name[]="This is Sudhir";
    char *ptr;
    ptr=name;//
    while(*ptr != '\0')
    {
    	if(*ptr%2==0)
        	printf("%c", *ptr);
        ptr++;
    }	
    return 0;
}
