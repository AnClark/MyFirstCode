#include <stdio.h>

int main()
{
	int a;
	int *pnt;
	
	a=5641;				//给变量a赋值 
	
	printf("原变量的地址：				%d\n",&a); 
	printf("原变量的输出：			%d\n",a);
	printf("指针的输出：			%d\n",pnt);
	
	//*pnt=a;
	//printf("绑定后指针的输出：		%d\n",pnt);
	
	return 0;
} 
