#include<stdio.h>
#include<math.h> 
main()
{
	printf("��Ϊ����ԭ���ݲ�֧���󵼣�����Ҫ�����������п������뷽��ʽ\n");
	printf("�ڵ�13/14�зֱ����뵼�����Լ���ԭ������������������Ӵ�����Ϣ�����س����Լ���\n");
	getchar();
	printf("���������ĵ�����ʼֵ\n");
	 
	
	double  X;//��ʼֵ
	scanf("%lf",&X);
	printf("������������Ҫ�ĵ�������\n");
	int time;//��������
	scanf("%d",&time);
	int i;
	double x,y;//��Ҫ��� 
	for(i=0;i<time;i++)
	{
		x=1.0 /(3*X*X-3);//�󵼹�ʽ�ĵ��� 
		y=pow(X,3)-3*X-1;//ԭ��ʽ 
		X=X-x*y; 
		printf("X%d=%lf\n\n",i+1,X);
	} 
}
