#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int value;
	int i;
	
	//��׼��ʽ����
	printf("��׼��ʽ��������\n");
	for(i=0;i<10;i++){
		printf("%d	",a[i]);
	}
	
	//ָ�뷽ʽ����
	printf("ָ�뷽ʽ��������\n");
	for(i=0;i<10;i++){
		value=*(a+i);
		printf("%d	",value);
	} 
	
	//ָ�����ͷһ������һ��ָ���˳�����printf�����Ƿ����ָ����� 
	printf("�����һ�%d	%d	\n", *(a), *a);
	printf("��������%d		\n", *(a+5));
	
	return 0;
}
