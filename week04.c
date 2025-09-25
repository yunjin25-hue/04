#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //실습4
  
  int year;
  
  printf("input the year : ");
  scanf("%d",&year);
  
  printf("is the year %d the leap year? : %d\n",   //C언어는 가독성을 위해 한 줄 띄어도 문제 X 
                                              year,
                                              (year%4==0 && year%100!=0) || (year%400==0)); 
                                              //년도가 4로 나누어 떨어지면서 100으로 나누어 떨어지지 않거나 400으로 나누어 떨어지면 윤년 
  
  
  system("PAUSE");	
  return 0;
}
