#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //�ǽ�3
  
  int sec; 
  
  printf("input the second : ");
  scanf("%d",&sec); //���� sec�� �� �Է� ���� �� ����  
  
  printf("the time is %d : %d\n",sec/60,sec%60); //�Է¹��� �ʸ� 60���� ������ ���� ������, �������� �ʷ�  
  
  system("PAUSE");	
  return 0;
}
