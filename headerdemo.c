#include"marvellous.h"

int main()

{
struct demo obj;
int no=10;
float radius =30.6F;
float area =pi*radius *radius;
IPTR ptr=&no;
printf("area is: %f\n",area);
printf("value of no is %d\n",*ptr);

     return 0;
}