#include <stdio.h>

int main() {
    int thang; 
    int soNgay; 

    
    printf("Nhap so thang (1-12): ");
    scanf("%d", &thang);

  
    switch(thang) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            soNgay = 31; 
            break;
        case 4: 
        case 6: 
        case 9: 
        case 11: 
            soNgay = 30; 
            break;
        case 2: 
            soNgay = 28; 
            break;
        default:
            printf("So thang khong hop le.\n");
            return 0; 
    }

   
    printf("Thang %d co %d ngay.\n", thang, soNgay);
    
    return 0;
}

