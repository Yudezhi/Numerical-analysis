#include<stdio.h>
#include<math.h> 
main()
{
	printf("\n\n����Դ�����16�д�����������Ҫ�����Ĺ�ʽ������δ֪����x��ʾ\n");
	printf("If you did,continue  please\n");
	getchar();
	double   x;
	int n;
	printf("�������������ĵ�������\n");
	scanf("%d",&n);
	double   resualt;
	printf("�������ʼֵ\n"); 
	scanf("%lf",&x);
	int i,j;
	double X, Y,Z;
	X=x;
	for(j=0;j<n;j++)///����ε��� 
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
		}//Сѭ�� 
		
		 X=((X*Z-Y*Y)/(X-2*Y+Z));
		 x=X;
	}//for(j=0;j<5;j++)
}

