#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int value;
	int i;
	
	//标准方式访问
	printf("标准方式访问数组\n");
	for(i=0;i<10;i++){
		printf("%d	",a[i]);
	}
	
	//指针方式访问
	printf("指针方式访问数组\n");
	for(i=0;i<10;i++){
		value=*(a+i);
		printf("%d	",value);
	} 
	
	//指针访问头一项与另一个指定项，顺便测试printf命令是否兼容指针访问 
	printf("数组第一项：%d	%d	\n", *(a), *a);
	printf("数组第六项：%d		\n", *(a+5));
	
	return 0;
}
