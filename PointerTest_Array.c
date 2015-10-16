#include<stdio.h>
#define N 1000			

//情形一：不通过指针，直接以数组为参数，检验数组是否会因函数内部对其进行修改而发生变化
int test_without_pointer(int array[N]) {
	int i;
	//对数组进行赋值
	for(i=0; i<10; i++){
		array[i] = 99;
	}
	
}


//情形二：通过指针及指针专用写法，对数组进行修改 
int test_with_pointer(int *(array)){
	int i;	
	for(i=0; i<10; i++){
		*(array+i) = 88;
	}
}

//情形三：通过指针，且在程序内部沿用标准写法，对数组进行修改 
int test_with_pointer_2(int *(array)){
	int i;
	for(i=0; i<10; i++){
		//*array[i] = 99;			//编译器报错。说明这种写法是错的！ 
	}
} 

//情形四：通过指针，且完全沿用标准写法，对数组进行修改 
int test_with_pointer_3(int *array[N]){
	int i;
	for(i=0; i<10; i++){
		*array[i] = 77;
	}
} 

int main()
{	int a[10]={11,22,33,44,55,66,77,88,99,100};
	int i;

	//先输出初始值
	printf("初始值：\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}
	
	//测试情形一
	test_without_pointer(a);
	//输出修改后的值
	printf("情形一测试：\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}	 
	 
	//测试情形二 
	test_with_pointer(a);
	//输出修改后的值
	printf("情形二测试：\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}
	
	//情形三已确认为写法错误！ 
	
	//测试情形四 
	test_with_pointer_3(a);
	//输出修改后的值
	printf("情形四测试：\n");
	for(i=0; i<10; i++){
		printf("%d	",a[i]);
	}	
	
	return 0;
} 
