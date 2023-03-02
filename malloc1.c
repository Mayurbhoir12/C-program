#include<stdio.h>
#include<stdlib.h>
struct demo
{
int i;
float f;

};
int main()
{
struct demo obj;
struct demo *ptr=NULL;
ptr=(struct demo *)malloc(sizeof(struct demo));

obj.i=10;
obj.f=10.3;
ptr->i=10;
ptr->f=10.3;
printf("%d\n",obj.i);
printf("%d\n",ptr->i);

free(ptr);

    return 0;
}
