#include<stdio.h>
 int main() {
 	int a[5]={1,2,3,4,5};
 	printf("Moi ban nhap vao 5 phan tu : \n");
 	 for(int i=0;i <5;i ++) {
 	 	printf("Phan tu thu %d :",i+1);
 	 	scanf("%d",&a[i]);
	  }
	  printf("Mang da duoc nhap la : \n");
	   for(int i=0;i<5;i++) {
	   	printf("a[%d] = %d \n",i,a[i]);
	   }
 }
