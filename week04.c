#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //�ǽ�4
  
  int year;
  
  printf("input the year : ");
  scanf("%d",&year);
  
  printf("is the year %d the leap year? : %d\n",   //C���� �������� ���� �� �� �� ���� X 
                                              year,
                                              (year%4==0 && year%100!=0) || (year%400==0)); 
                                              //�⵵�� 4�� ������ �������鼭 100���� ������ �������� �ʰų� 400���� ������ �������� ���� 
  
  
  system("PAUSE");	
  return 0;
}
