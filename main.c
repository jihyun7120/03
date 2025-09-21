#include <stdio.h>
#include <stdlib.h>
// ctrl s 할 때 저장은 그 기본 폴더에 하기(그게뜰거야) 
int main(int argc, char *argv[])
{
    int ja, mo;
    
    printf("enter bunja: ");
    scanf("%i", &ja);
    
    printf("enter bunmo: ");
    scanf("%i", &mo);
    
    printf("the result is %f\n", (float)ja/mo);
    
    system("PAUSE");
  return 0;
}
