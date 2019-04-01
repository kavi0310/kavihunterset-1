#include<stdio.h>
int main()
{
    int n,a[100],i,k,m,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
    for(j=i+1;j<n;j++)
    {
        k=a[i]+a[j];
        if(k<=n)
        {
        printf("%d %d %d ",a[i],a[j],k);
        printf("\n");
        }
    }
    }
}
