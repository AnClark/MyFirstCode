#include <stdio.h>
#include <math.h>
#define N 1000			//求解结果的最大数目 

int main()
{	int i,j,k;				//循环变量
	int a[N],b[N],c[N];		//存放求出来的勾、股、弦 
	int count=0;			//求解结果的数目与指针（由于数组所有项不能被完全利用） 
	int bound=100;			//求到多少以内的勾股数 
	
	//数组初始化
	for(i=N;i<N;i++){
		a[i]=0; b[i]=0; c[i]=0; 
	}

	//开始求解
	for(i=1;i<=bound;i++)
	{	
		for(j=1;j<=bound;j++)
		{
			for(k=1;k<=bound;k++)
			{
				if(pow(i,2)+pow(j,2)==pow(k,2))				//如果符合勾股定理公式 
				{
					a[count]=i; b[count]=j; c[count]=k;		//求出的结果■按顺序■计入数组 
					count++;								//指针位置加一 
				}
			}
		}
		
	} 
	
	//输出结果
	
	for(i=0;i<count;i++){
		printf("%d %d %d \n",a[i],b[i],c[i]);
	}
	
	return 0;
} 
