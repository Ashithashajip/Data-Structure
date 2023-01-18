#include<stdio.h>
void main()
{
int a[20],b[20],c[20],i,j,k,n,m,l,p;
printf("enter the size of the first array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf(" enter the size of the second array ");
scanf("%d",&m);
printf("enter the elements");
for(j=0;j<m;j++)
scanf("%d",&b[j]);
printf("the resultant array\n ");
i=0;
j=0;
k=0;
while(i<n && j<m)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(a[i]>b[j])
{
c[k]=b[j];
j++;
k++;
}
}
if(i<n)
{
while(i<n)
{
c[k]=a[i];
i++;
k++;
}
}
else if(j<m)
{
while(j<m)
{
c[k]=b[j];
j++;
k++;
}
}
 p=m+n;
for(k=0;k<p;k++)
{
printf("%d\t",c[k]);
}
}
