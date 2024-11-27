#include <stdio.h>

int main() {
    int n;
    printf("Moi ban nhap  so nguyen vao mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        int element;
        do {
            printf("Moi nhap so nguyen  %d : ", i + 1);
            scanf("%d", &element);
            if (element % 2 == 0) {
                printf("Day khong phai so le \n");
        }
        } while (element % 2 == 0);  
        arr[i] = element;
    }
    printf("Mang voi so le la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
