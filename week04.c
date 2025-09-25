#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  //½Ç½À2
  
  int num_1,num_2;
  
  printf("input two integers : ");
  scanf("%d %d",&num_1,&num_2);
  
  printf("+ result is %d\n",num_1+num_2);
  printf("- result is %d\n",num_1+-num_2);
  printf("* result is %d\n",num_1*num_2);
  printf("/ result is %d\n",num_1/num_2);
  printf("%% result is %d\n",num_1%num_2);
  
  system("PAUSE");	
  return 0;
}
