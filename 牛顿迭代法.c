#include<stdio.h>
#include<math.h> 
main()
{
	printf("因为技术原因，暂不支持求导，所以要求您按照下列口令输入方程式\n");
	printf("在第13/14行分别输入导函数以及其原函数，若已做，请忽视此条信息并按回车键以继续\n");
	getchar();
	printf("请输入您的迭代初始值\n");
	 
	
	double  X;//初始值
	scanf("%lf",&X);
	printf("请输入您所需要的迭代次数\n");
	int time;//迭代次数
	scanf("%d",&time);
	int i;
	double x,y;//必要替代 
	for(i=0;i<time;i++)
	{
		x=1.0 /(3*X*X-3);//求导公式的倒数 
		y=pow(X,3)-3*X-1;//原公式 
		X=X-x*y; 
		printf("X%d=%lf\n\n",i+1,X);
	} 
}
