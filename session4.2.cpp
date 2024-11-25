#include <stdio.h>

int main() {
    int so;

    printf("Nhap mot so nguyen: ");
    scanf("%d", &so);

    if (so % 2 == 0) {
        printf("So %d la so chan.\n", so);
    } else {
        printf("So %d la so le.\n", so);
    }

    return 0;
}

