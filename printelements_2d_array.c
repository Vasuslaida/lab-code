#include <stdio.h>

int main() {
    int r, c;
    int a[100][100];

    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);

    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("Enter the elements of the %dx%d matrix.\n", r, c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("The %dx%d matrix is:\n", r, c);

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
