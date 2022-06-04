#include<stdio.h>
#include<string.h>
 int main(){
 	char string[]="thithuchanh";
 	char temp;
 	int i,j;
 	int size=strlen(string);
 	printf("chuoi truc khi sap xep la:%s\n",string);
 	for(i=0;i<size-1;i++){
 		for(j=i+1;j<size;j++){
 			if(string[i] > string[j]){
 				temp=string[i];
 				string[i]=string[j];
 				string[j]=temp;
			 }
		 }
	 }
	 printf("chuoi sau khi sap xep la:%s \n",string);
	 
 }
