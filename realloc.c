#include<stdio.h>
#include<stdlib.h>

int main()
{
int *p=NULL;
p=(int *)malloc(sizeof(int )*10);
p=(int *)realloc(p,15*sizeof(int));
free(p);




    return 0;

}