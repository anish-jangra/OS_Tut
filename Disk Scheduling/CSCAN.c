#include<stdio.h>
int main()
{
 int i,j,sum=0,n;
 int d[20];
 int disk;   //loc of head
 int temp,max;
 int dloc;   //loc of disk in array
 printf("enter number of location\t");
 scanf("%d",&n);
 printf("enter position of head\t");
 scanf("%d",&disk);
 printf("enter elements of disk queue\n");
 for(i=0;i<n;i++)
 {
 scanf("%d",&d[i]);
 }
 d[n]=disk;
 n=n+1;
 for(i=0;i<n;i++)    // sorting disk locations
 {
  for(j=i;j<n;j++)
  {
    if(d[i]>d[j])
    {
    temp=d[i];
    d[i]=d[j];
    d[j]=temp;
    }
  }
 }
 max=d[n-1];
 for(i=0;i<n;i++)   // to find loc of disc in array
 {
 if(disk==d[i]) { dloc=i; break;  }
}
 for(i=dloc;;)
 {
 	printf("%d -->",d[i]);
	i--;i+=n;i%=n;if (i==dloc)break;
 }
 printf("0 -->");
 for(i=dloc+1;i<n;i++)
 {
 printf("%d",d[i]);
 if (i!=n-1)printf(" --> ");
 }
 sum=max;
       printf("\ntotal %d\n",sum);
 return 0;
}
