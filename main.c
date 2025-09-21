#include <stdio.h>
#include <stdlib.h>
// ctrl s 할 때 저장은 그 기본 폴더에 하기(그게뜰거야) 
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
