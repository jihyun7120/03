#include <stdio.h>
#include <stdlib.h>
// ctrl s 할 때 저장은 그 기본 폴더에 하기(그게뜰거야) 
int main(int argc, char *argv[])
{
    int input_int; //input_int라는 변수 생성 
    float input_float;//마찬가지롯생성 
    
    printf("enter an integer: "); 
    scanf("%d", &input_int);//변수입력받기.&붙이는거잊지말기
    
     printf("enter a float: "); 
    scanf("%f", &input_float);
    
    printf("integer : %d, float : %f\n", input_int, input_float);
     
  system("PAUSE");
  return 0;
}
