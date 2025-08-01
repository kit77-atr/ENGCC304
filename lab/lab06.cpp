#include <stdio.h>

int main() {
    int n;

     printf("กรุณากรอกตัวเลข : ");
    if (scanf("%d", &n) != 1) {
        printf("กรุณากรอกเป็นตัวเลข\n");
        return 1;  
       
    }

    if (n % 2 != 0) {
        printf("ลำดับตัวเลขคี่ : ", n);
        for (int i = 1; i <= n; i += 2) {
            printf("%d ", i);
        }
    } else {
        
        printf("ลำดับตัวเลขคู่ : ", n);
        for (int i = n; i >= 0; i -= 2) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
