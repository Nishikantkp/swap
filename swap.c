#include<stdio.h>

void swap(int *first_no,int *second_no)
{
  int temp;
  temp=*first_no;
  *first_no=*second_no;
  *second_no=temp;
}
void main()
{
  int First_num, Second_num;
  printf("Enter two numbers u want to be swapped: ");
  scanf("%d%d", &First_num, &Second_num);
  swap(&First_num,&Second_num);
  printf("After swap the numbers are: %d,%d",First_num,Second_num);
}