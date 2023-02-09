#include <stdio.h>

int main ()
{

    //declaring variables
    int startsize;
    int endsize;

    //promtpting user's input

    do
    {
        printf("Enter llamus population start size: \n");
        scanf("%d",&startsize);
    } 
    while (startsize < 9);

   

    do
    {
        printf("Enter llamus population endsize: \n");
        scanf("%d",&endsize);
    } 
    while (startsize>endsize);

    //initializing years
    int years=0;

    while (startsize<endsize)
    {
        startsize = (startsize + (startsize/3) - (startsize/4));
        years++;
    }
    //print number of years
    printf("Years:%d \n",years);
}



