#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c, delta, x1, x2, x;
	printf("nhap a=");
	scanf("%f",&a);
	printf("nhap b=");
	scanf("%f",&b);
	printf("nhap c=");
	scanf("%f",&c);
	if(a==0){
		if(b==0){
			printf("pt vo nghiem");
		}else{
			x=-c/b;
			printf("pt co 1 nghiem", x);
		}
	}else{
		delta=b*b-4*a*c;
		if(delta>=0){
				x1=(-b + sqrt(delta)/2*a);
			x2=(-b - sqrt(delta)/2*a);
			printf("pt co 2 nghiem phan biet",x1,x2);
			printf("%f\n",x1);
			printf("%f",x2);
		
		}else{
				printf("pt vo nghiem");
			
		}
	}
}

