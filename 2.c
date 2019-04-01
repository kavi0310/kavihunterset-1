#include<stdio.h>
int main()
{
    int m,b[100],c,j,t;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[j]);
    }

for(j=0;j<m;j++)
{
for(c=j+1;c<m;c++)
{
if(b[j]<b[c])
{
t=b[j];
b[j]=b[c];
b[c]=t;
}
}
printf("%d",b[j]);
}
}
