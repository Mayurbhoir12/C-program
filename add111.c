
#include<stdio.h>
 int Addition(int A,int B)
{

    int output=0;
    output=A+B;
    return output;
}

 int main()
 {
  auto int A=0;
  auto int B=0;
  auto int ians=0;
  printf("enter the number\n");
  scanf("%d",&A);
  scanf("%d",&B);


  ians=Addition(A,B);
  printf("%d",ians);




    return 0;

 }