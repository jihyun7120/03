#include <stdio.h>
#include <stdlib.h>
// ctrl s �� �� ������ �� �⺻ ������ �ϱ�(�װԶ�ž�) 
int main(int argc, char *argv[])
{
    char c;
    int i;
    
    printf("input a number: ");
    scanf("%c", &c);//char ���·� �����Ŵϱ� %c��  
    //char ���·� �޾Ƽ� ���ڷ� ��ȯ��ų�Ŵϱ� 
    i = c - '0';//c����� ���ڸ� ���ڷ� ��ȯ by �ƽ�Ű�ڵ�
     
    printf("The number is %i\n",i);
     
  system("PAUSE");
  return 0;
}
