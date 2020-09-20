#include<stdio.h>
main()
{
    int i,j,n;
    printf("enter the no of rowns");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d",j%2);
        }
    printf("\n");
    }
}
