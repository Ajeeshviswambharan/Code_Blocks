#include <stdio.h>
#include <stdlib.h>
int a;
void basic();
int main()
{
    while(1)
    {


    printf("Start..............!\n");
    basic();


    }
    return 0;
}
void basic()
{
    printf("Enter the number!\n");
    scanf("%d",&a);
     printf("Entered number:%d\n",a);
}
