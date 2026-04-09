#include <stdio.h>

void double_elements(int *arr, int size) {
    for(int i = 0; i < size; i++) {
        *(arr + i) *= 2; // 배열의 기준 주소에서 i만큼 오프셋을 더한 후 역참조하여 값 변경
    }
}

int main() {
    int arr[5];
    
    // 사용자로부터 5개의 정수 입력받기
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    
    double_elements(arr, 5);
    
    for(int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}
