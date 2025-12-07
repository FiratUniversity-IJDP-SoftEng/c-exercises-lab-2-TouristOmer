#include <stdio.h>

int main() {
    int numbers[17]; 
    int index = 0;

    for (int i = 99; i >= 50; i -= 3) {
        numbers[index] = i;
        index++;
    }

    printf("Output: ");
    for (int j = 0; j < index; j++) {
        printf("%d", numbers[j]);
        
        if (j < index - 1) {
            printf(", ");
        }
    }
    
    return 0;
}
