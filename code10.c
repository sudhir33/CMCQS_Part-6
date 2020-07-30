#include<stdio.h>
int main()
{
    char *p1 = "Sudhir";
    char **p2;
    p2 = &p1;//
    *p2="Sudheer";
    printf("%s", p1);
    return 0;
}
