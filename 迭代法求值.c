#include<stdio.h>
#include<math.h>
main()
{
	printf("������ԭ�����е�15���������ĵ�����ʽ��δ֪����X ��ʾ\n�ٴν��м��㣬������������Ӵ�����Ϣ\n");
	printf("���������ĵ�����ʼֵ\n");
	double X;//��ʼֵ
	scanf("%lf",&X);
	printf("���������������ĵ�������\n");
	int time ;
	scanf("%d",&time);
	int i,j;
	for (i=0;i<time;i++)
	 {
	 	X=pow(1+3*X,1.0/3);
	 	printf("X%d=%lf\n",i+1,X);
	 }
	 
} 
