#include <stdio.h>
#include <stdlib.h>
// ctrl s �� �� ������ �� �⺻ ������ �ϱ�(�װԶ�ž�) 
int main(int argc, char *argv[])
{
    char c, d;
    
    printf("input a character: ");
    scanf("%c", &c);
    
    d = c + 1;

    printf("the next character of %c(%d) is %c(%d)\n", c, c, d, d); 
    
    system("PAUSE");
  return 0;
}
