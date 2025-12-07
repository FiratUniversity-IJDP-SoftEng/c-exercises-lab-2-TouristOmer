#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;

    printf("Please enter 10 integer numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        sum += numbers[i];
    }

    printf("\nEntered values: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    float average = (float)sum / 10;

    printf("\n\nSum: %d\n", sum);
    printf("Averge: %.2f\n", average);

    return 0;
}
