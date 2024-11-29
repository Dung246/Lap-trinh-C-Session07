#include<stdio.h>
 
  int main() {
    int m,n;
     printf("Moi nhap so hang va so cot : ");
     scanf("%d %d",&m,&n);
    int arr[m][n];
	  for(int i=0;i<m;i++) {
	  	 for(int j=0;j<n;j++) {
	  	 	printf("Phan tu hang thu %d va cot thu %d = %d ",i=1,j=1,arr[i][j]);
		   }
	  }   
    
    return 0;
  }
