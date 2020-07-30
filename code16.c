#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char *names[2],name[100];//sudhir shiva
    int i;
    for(i=0;i<2;i++)//0 1
    {
    	names[i]= (char *)malloc(1);//
    	scanf("%s",&name);
    	strcpy(names[i], name);//sudhir shiva
	}	
    printf("%s", names[0]);
    return 0;
}
