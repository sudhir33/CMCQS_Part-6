#include<stdio.h>
void swap(char *str1, char *str2)//100 200
{
  char *temp = str1;//temp=100
  str1 = str2;//str1=200
  str2 = temp;//str2=100
 printf("%s %s\n",str1,str2);
}  
   
int main()
{
  char *str1 = "Python";
  char *str2 = "Java";
  swap(str1, str2);//
  printf("%s, %s", str1, str2);
  return 0;
}
