#include <stdio.h>

int main() {
    int i;
	int size;
	int a[5];

   
    printf("Enter array size : ");
    scanf("%d", &size);

  
    printf("Enter array elements :\n");
    for (i = 0; i < size; i++) {
    }

   
    printf("Positive array elements are :\n");
    for (i = 0; i < size; i++) {  
        if (a[i] > 0) {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}

