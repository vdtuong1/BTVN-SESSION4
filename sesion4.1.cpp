#include <stdio.h>

int main() {
    int so; 

    
    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    
    if (so > 0) {
        printf("So %d la so duong.\n", so);
    } else if (so < 0) {
        printf("So %d l� so am.\n", so);
    } else {
        printf("So %d l� so 0.\n", so);
    }

    return 0;
}

