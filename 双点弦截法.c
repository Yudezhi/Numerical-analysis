#include<stdio.h>
#include<math.h>
double calculate(double x)
{
	double fx;
	fx=pow(x,3)-3*x-1;
	return fx;
}
main()
{
	double X0,X1;//双点弦截的初始值、
	double  X;//存储下一个答案
	printf("请在第**行的原程序中输入原函数,未知量用x表示\n若已做，请按回车以继续\n");
	getchar(); 
	printf("请分别输入两个初始值\n");
	scanf("%lf%lf",&X0,&X1);
	printf("请输入您需要迭代的次数\n");
	int time ;
	scanf("%d",&time) ;
	double fX0,fX1;
	
	int i;
	for(i=0;i<time;i++)
	{
	fX0=calculate(X0);
	fX1=calculate(X1);
	X=(X0*fX1-X1*fX0)/(fX1-fX0);
	printf("X%d=%lf\n",i+2,X);
	X0=X1;
	X1=X;	
	}
} 
