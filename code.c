#include <stdio.h>
void strfun(char *p)
{
	int i=0;
	for(i=0;p[i]!='\0';i++)
	{
		printf("%c",p[i]);
	}
}
int main()
{
	char str[100];
	int i;
	scanf("%[^\n]s",&str);//This is programming\0
	strfun(str);//
	//printf("%d",str);
	
	return 0;
}
