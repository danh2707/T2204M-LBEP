#include<stdio.h>
int main(){
	
	int i,n;
	float s;
	printf("nhap n=");
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n){
		
		s=s+ 1/(float)i;
		i++;
		
	}printf("tong s=%f",s);
}
