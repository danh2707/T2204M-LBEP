#include<stdio.h>

int tinhluythua(int a,int b){
	int s=1;
	for(int i=1;i<=b;i++)
	{
		s=s*a;
	}
	return s;
}

int main()
{
	printf("2^3 la: %d",tinhluythua(2,3));
}
