#include<stdio.h>
int main(){
	int n;
	int S =0;
	
	printf("nhap n=");
	scanf("%d",&n);
	int i=0;
	while(i<=n){
		S=S+i;
		i++;
	}printf("S=%d",S);
	
	
}
