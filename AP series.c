#include<stdio.h>
int main()
{
    int first,diff,terms,value,sum=0,i;
    printf("enter the number of terms in AP series\n");
    scanf("%d",&terms);
    printf("enter first term and common difference of AP series\n");
    scanf("%d%d",&first,&diff);
    value=first;
    printf("AP SERIES\n");
    for(i=0;i<terms;i++)
    {
        printf("%d",value);
        sum+=value;
        value=value+diff;
    }
    printf("sum of the AP series till %d terms is %d\n",terms,sum);
    return 0;
}