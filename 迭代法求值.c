#include<stdio.h>
#include<math.h>
main()
{
	printf("请先在原程序中第15行输入您的迭代公式，未知量用X 表示\n再次进行计算，若已做，请忽视此条信息\n");
	printf("请输入您的迭代初始值\n");
	double X;//初始值
	scanf("%lf",&X);
	printf("请输入您所期望的迭代次数\n");
	int time ;
	scanf("%d",&time);
	int i,j;
	for (i=0;i<time;i++)
	 {
	 	X=pow(1+3*X,1.0/3);
	 	printf("X%d=%lf\n",i+1,X);
	 }
	 
} 
