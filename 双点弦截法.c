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
	double X0,X1;//˫���ҽصĳ�ʼֵ��
	double  X;//�洢��һ����
	printf("���ڵ�**�е�ԭ����������ԭ����,δ֪����x��ʾ\n���������밴�س��Լ���\n");
	getchar(); 
	printf("��ֱ�����������ʼֵ\n");
	scanf("%lf%lf",&X0,&X1);
	printf("����������Ҫ�����Ĵ���\n");
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
