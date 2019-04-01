#include<stdio.h>

int main() {
   int m,b[100],c,j,t,i=0,k=0,a[100],f=1;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }
    for(j=0;j<m;j++)
    {
        if(b[j]==j)
        {
            a[i]=b[j];
            i++;
            k++;
            f=1;
        }
    }
    if(f==1)
    {
    for(i=0;i<k;i++)
{
for(c=i+1;c<k;c++)
{
if(a[i]>a[c])
{
t=a[i];
a[i]=a[c];
a[c]=t;
}
}
printf("%d ",a[i]);
}
}
else
printf("-1");
}
