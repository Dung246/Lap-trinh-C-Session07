#include <stdio.h>

int main() {
    int n;  
    printf("Moi ban nhap so phan tu o trong mang : ");
    scanf("%d", &n);
    int arr[n];
    printf("Moi nhap  %d phan tu cho mang :\n", n);
    for (int i = 0; i < n; i++) {
        printf("So phan tu %d: ", i + 1);
        scanf("%d", &arr[i]);  
    }
    printf("cac so phan tu co trong mang la : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}
