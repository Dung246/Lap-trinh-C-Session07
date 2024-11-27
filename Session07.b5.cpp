#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4,5};
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];  
        }
        if (arr[i] < smallest) {
            smallest = arr[i];  
        }
    }
    printf("So nguyen to lon nhat la: %d\n", largest);
    printf("So nguyen to be nhat la : %d\n", smallest);

    return 0;
}
