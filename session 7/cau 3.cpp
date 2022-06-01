#include<stdio.h>
int timmin(int n, int ary[]){
	int min=ary[0];
	for(int i=0;i<n;i++){
		if(ary[i]<min)
		min=ary[i];
	}
	return min;
}

bool KTUOC(int n, int ary[], int m){
	int dem=0;
	for(int i=0;i<n;i++){
		if(ary[i]%m==0){
			dem++;
		}
	}
	if(dem==n){
		return true;
	}
	else{
		return false;
	}
}

int UCLN(int n,int ary[]){
	int max = timmin(n,ary);
	for(int i=max;i>=1;i--){
		if(KTUOC(n,ary,i)){
				max=i;
				break;
		}
	}
	return max;		
}

int main(){
	int ary[7]={3,9,7,4,16,12,11};
	printf("Uoc chung lon nhat cua cac phan tu co trong mang la :  %d",UCLN(5,ary));
}
