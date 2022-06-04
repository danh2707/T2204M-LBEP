#include<stdio.h>
#include<string.h>
 void softString(char s[]){
 	char s[]="thithuchanh";
 	char temp;
 	int i,j;
 	int size=strlen(s);
 	printf("chuoi truc khi sap xep la:%s\n",s);
 	for(i=0;i<size-1;i++){
 		for(j=i+1;j<size;j++){
 			if(s[i] > s[j]){
 				temp=s[i];
 				s[i]=s[j];
 				s[j]=temp;
			 }
		 }
	 }
	 returns("chuoi sau khi sap xep la:%s \n",s);
	 
 }
