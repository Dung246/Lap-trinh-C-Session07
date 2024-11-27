#include <stdio.h>

int main() {
    int a[5] = {1,2,3,4,5};  
    int exist = 0; 
    printf("Cac so chan trong mang : ");
    for (int i = 0; i < 5; i++) {
        if (a[i] % 2 == 0) {  
         printf(" %d ",a[i]);  
        }
    }   
	     if(!exist) {
        printf("\nPhan tu la so le : ");
        for (int i = 0; i < 5; i++) {
            if (a[i] % 2 != 0) {  
                printf("\n %d ", a[i]);
            }
        }
    }
}
