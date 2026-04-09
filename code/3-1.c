#include <stdio.h>

void rear_only(const int* arr, int size) {
    // arr[0] = 999;

    for(int i = 0; i < size; i++) {
        printf("%d", *(arr+i));
    }
    printf("\n");
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    rear_only(nums, 5);
    return 0;
}
