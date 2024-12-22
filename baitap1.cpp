#include <stdio.h>  

#define MAX_SIZE 100  

int main() {  
    int arr[MAX_SIZE];  
    int n, value, position;  

    printf("Nhap so phan tu: ", MAX_SIZE);  
    scanf("%d", &n);  

    if (n > MAX_SIZE || n < 1) {  
        printf("khong hop le");  
        return 1;  
    }  
 
    printf("Nhap cac phan tu cho mang:\n");  
    for (int i = 0; i < n; i++) {  
        printf("Phan tu %d: ", i + 1);  
        scanf("%d", &arr[i]);  
    }  

    printf("Nhap gia tri muon chen: ");  
    scanf("%d", &value);  
    printf("Nhap vi tri muon chen (0 den %d): ", n);  
    scanf("%d", &position);  

    if (position < 0 || position > n) {  
        printf("Vi tri chen khong hop le. Vui long nhap lai.\n");  
        return 1; 
    }  
	  
    for (int i = n; i > position; i--) {  
        arr[i] = arr[i - 1]; 
    }  
    arr[position] = value; 

    n++;  

    printf("Mang sau khi chen: ");  
    for (int i = 0; i < n; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}