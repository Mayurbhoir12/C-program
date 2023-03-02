#include<stdio.h>
#include<stdlib>


int main()
{
int Arr[5];  //static memory allocation
int *p=NULL;
p=(int *)malloc(sizeof(int)*5);
//use memory
free(p);
//code
    return 0; //memory of Arr getsdeallocate at this point
}