#include <stdio.h>
#include <stdlib.h>
// ctrl s 할 때 저장은 그 기본 폴더에 하기(그게뜰거야) 
int main(int argc, char *argv[])
{
    char c;
    int i;
    
    printf("input a number: ");
    scanf("%c", &c);//char 형태로 받을거니까 %c야  
    //char 형태로 받아서 숫자로 변환시킬거니까 
    i = c - '0';//c저장된 문자를 숫자로 변환 by 아스키코드
     
    printf("The number is %i\n",i);
     
  system("PAUSE");
  return 0;
}
