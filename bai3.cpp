#include <stdio.h>  

#define MAX_SIZE 100  

int main() {  
    int arr[MAX_SIZE];  
    int currentLength, position;  
 
    printf("Nhap vao so phan tu (toi da %d): ", MAX_SIZE);  
    scanf("%d", &currentLength);  
 
    if (currentLength > MAX_SIZE || currentLength < 1) {  
        printf("So phan tu khong hop le. Vui long nhap lai.\n");  
        return 1;
    }  

    printf("Nhap cac phan tu cho mang:\n");  
    for (int i = 0; i < currentLength; i++) {  
        printf("Phan tu %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  

    printf("Nhap vi tri muon xoa (0 den %d): ", currentLength - 1);  
    scanf("%d", &position);  
 
    if (position < 0 || position >= currentLength) {  
        printf("Vi tri xoa khong hop le. Vui long nhap lai.\n");  
        return 1;
    }  
 
    for (int i = position; i < currentLength - 1; i++) {  
        arr[i] = arr[i + 1];
    }  
    currentLength--;  

    printf("Mang sau khi xoa: ");  
    for (int i = 0; i < currentLength; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}