#include <stdio.h>  

#define SIZE 10 

int main() {  
    int arr[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int position, newValue;  

    printf("Mang hien tai: ");  
    for (int i = 0; i < SIZE; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    printf("Nhap vi tri muon sua (0 den %d): ", SIZE - 1);  
    scanf("%d", &position);  

    if (position < 0 || position >= SIZE) {  
        printf("Vi tri khong hop le. Vui long nhap lai.\n");  
        return 1; 
    }  

    printf("Nhap gia tri muon thay the cho vi tri %d: ", position);  
    scanf("%d", &newValue);  
 
    arr[position] = newValue;  

    printf("Mang sau khi sua: ");  
    for (int i = 0; i < SIZE; i++) {  
        printf("%d ", arr[i]);  
    }  
    printf("\n");  

    return 0;  
}