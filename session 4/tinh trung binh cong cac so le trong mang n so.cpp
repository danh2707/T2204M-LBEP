#include<stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int ary[n];//nhap gia cho mang
	printf("nhap mang\n");
for(int i=0;i<n;i++){

	scanf("%d",&ary[i]);
  }
  //tinh tong cac so le váo luong so le
  int sum=0,dem=0;
  for(int i=0;i<n;i++){
  
  //xet ary[i] co phai so le hay khong
   if(ary[i]%2!=0){
   	sum+=ary[i];
   	dem++;
   }
 } printf("tbc so le la: %f",(float)sum/dem);
  
}
