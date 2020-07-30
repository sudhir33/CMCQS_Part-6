#include<stdio.h>
void swap(char **str1, char **str2)
{
  char *temp = *str1;//temp=python
  *str1 = *str2;//str1=java
  *str2 = temp;//str2=python
}  
   
int main()
{
  char *str1 = "Python";
  char *str2 = "Java";
  swap(&str1, &str2);//
  printf("%s, %s", str1, str2);
  return 0;
}
