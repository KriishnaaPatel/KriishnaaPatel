#include <stdio.h>

int main() {
    int i;
	int j;
	int value;

    for (i = 5; i >= 1; i--) {
        value = 5;  

        for (j = 1; j <= i; j++) {
            printf("%d ", value);
            value += 5;
        }
        printf("\n");
    }

    return 0;
}

