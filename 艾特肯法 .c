#include<stdio.h>
#include<math.h> 
main()
{
	printf("\n\n请在源代码第16行处输入您所需要迭代的公式，其中未知量用x表示\n");
	printf("If you did,continue  please\n");
	getchar();
	double   x;
	int n;
	printf("输入您所期望的迭代次数\n");
	scanf("%d",&n);
	double   resualt;
	printf("请输入初始值\n"); 
	scanf("%lf",&x);
	int i,j;
	double X, Y,Z;
	X=x;
	for(j=0;j<n;j++)///求五次迭代 
	{	
		for(i=0;i<2;i++) 
		{
			resualt=1+(1.0/(x*x));
				if(!i)
				{
				 printf("X=%lf ----->",X);
				 printf("Y==%lf    ",resualt);
				 Y=resualt;
				 x=Y;
				}
				 if(i)
				 {
				 	printf("Z==%lf\n\n",resualt);
				 	Z=resualt;
				 }
		}//小循环 
		
		 X=((X*Z-Y*Y)/(X-2*Y+Z));
		 x=X;
	}//for(j=0;j<5;j++)
}

