#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //�ǽ�6
  
  int sec;
  
  printf("input the second : ");
  scanf("%d",&sec);
  
  printf("The time for %d second is %d : %d : %d\n",sec,
                                                  sec/3600, //hour
                                                 (sec%3600)/60, //minute
                                                  sec%60); //second
  
  system("PAUSE");	
  return 0;
  
}
