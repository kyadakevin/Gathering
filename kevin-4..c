#include<stdio.h>
sum(int a[])
{
	int i,sum=0,n;
    printf("enter alement= ");
    scanf("%d",&n);

	for(i=0;i<=n;i++)
	{
      printf("a[%d]=",i);
      scanf("%d",&a[i]);
      sum=sum+a[i];
      
	}
	printf("sum of all alement=%d",sum);
	
}
main()
{
	int a[100];
	sum(a);
}
