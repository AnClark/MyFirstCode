#include <stdio.h>
#include <math.h>
#define N 1000			//������������Ŀ 

int main()
{	int i,j,k;				//ѭ������
	int a[N],b[N],c[N];		//���������Ĺ����ɡ��� 
	int count=0;			//���������Ŀ��ָ�루��������������ܱ���ȫ���ã� 
	int bound=100;			//�󵽶������ڵĹ����� 
	
	//�����ʼ��
	for(i=N;i<N;i++){
		a[i]=0; b[i]=0; c[i]=0; 
	}

	//��ʼ���
	for(i=1;i<=bound;i++)
	{	
		for(j=1;j<=bound;j++)
		{
			for(k=1;k<=bound;k++)
			{
				if(pow(i,2)+pow(j,2)==pow(k,2))				//������Ϲ��ɶ���ʽ 
				{
					a[count]=i; b[count]=j; c[count]=k;		//����Ľ������˳����������� 
					count++;								//ָ��λ�ü�һ 
				}
			}
		}
		
	} 
	
	//������
	
	for(i=0;i<count;i++){
		printf("%d %d %d \n",a[i],b[i],c[i]);
	}
	
	return 0;
} 
