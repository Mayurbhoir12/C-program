

//accept n no. feom user and perform the addition
//input
//value of N:10 20 30 40 50
//output
//addition is:150
//algorithm
/* start


*/
#include<stdio.h> //for printf &scanf
#include<stdlib.h>// for malloc and free
/////
//application name :addition of n number
//inpur : n no.
//autor : mayur dhondibhau bhoir
//date: 15 september 2022
/// 


int main()
{

int *Arr=NULL;
int isize=0;
int i=0;
int isum=0;
printf("please enter how many element you want?\n");
scanf("%d",&isize);
Arr=(int * )malloc(isize* sizeof(int));
printf("please enter the element\n");
for(i-0;i<isize;i++)
{
    scanf("%d",&Arr[i]);
}

for(i=0;i<isize;i++)
{
    isum=isum+Arr[i];

}
printf("Addition is %d\n",isum);
free(Arr);


    return 0;
}