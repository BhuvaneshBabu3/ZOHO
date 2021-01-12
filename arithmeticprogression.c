#include<stdio.h>
void main()
{
    int start,i,diff,length,arr[20];
    printf("\n Enter start value : ");
    scanf("%d",&start);
    printf("\n Enter the difference between adjacent elements: ");
    scanf("%d",&diff);
    printf("\n Enter length value : ");
    scanf("%d",&length);
    
    for (i=0;i<length;i++) {
        arr[i]=start;
        start=start+diff;
    }
    printf("\n");
    for(i=0;i<length;i++)
    {
        printf("%d ",arr[i]);
    }
}
