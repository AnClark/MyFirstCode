#include<stdio.h>
#define N 1000			

//����һ����ͨ��ָ�룬ֱ��������Ϊ���������������Ƿ�������ڲ���������޸Ķ������仯
int test_without_pointer(int array[N]) {
	int i;
	//��������и�ֵ
	for(i=0; i<10; i++){
		array[i] = 99;
	}
	
}


//���ζ���ͨ��ָ�뼰ָ��ר��д��������������޸� 
int test_with_pointer(int *(array)){
	int i;	
	for(i=0; i<10; i++){
		*(array+i) = 88;
	}
}

//��������ͨ��ָ�룬���ڳ����ڲ����ñ�׼д��������������޸� 
int test_with_pointer_2(int *(array)){
	int i;
	for(i=0; i<10; i++){
		//*array[i] = 99;			//����������˵������д���Ǵ�ģ� 
	}
} 

//�����ģ�ͨ��ָ�룬����ȫ���ñ�׼д��������������޸� 
int test_with_pointer_3(int *array[N]){
	int i;
	for(i=0; i<10; i++){
		*array[i] = 77;
	}
} 

int main()
{	int a[10]={11,22,33,44,55,66,77,88,99,100};
	int i;

	//�������ʼֵ
	printf("��ʼֵ��\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}
	
	//��������һ
	test_without_pointer(a);
	//����޸ĺ��ֵ
	printf("����һ���ԣ�\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}	 
	 
	//�������ζ� 
	test_with_pointer(a);
	//����޸ĺ��ֵ
	printf("���ζ����ԣ�\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}
	
	//��������ȷ��Ϊд������ 
	
	//���������� 
	test_with_pointer_3(a);
	//����޸ĺ��ֵ
	printf("�����Ĳ��ԣ�\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}	
	
	return 0;
} 
