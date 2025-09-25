#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //실습3
  
  int sec; 
  
  printf("input the second : ");
  scanf("%d",&sec); //변수 sec에 초 입력 받은 거 저장  
  
  printf("the time is %d : %d\n",sec/60,sec%60); //입력받은 초를 60으로 나누면 몫은 분으로, 나머지는 초로  
  
  system("PAUSE");	
  return 0;
}
