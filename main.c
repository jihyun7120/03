#include <stdio.h>
#include <stdlib.h>
// ctrl s �� �� ������ �� �⺻ ������ �ϱ�(�װԶ�ž�) 
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
