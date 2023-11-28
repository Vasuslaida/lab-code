#include <stdio.h>

int main() {
    int m, n, p, q;
    printf("Enter the number of rows and columns for the first matrix:\n");
    scanf("%d %d", &m, &n);

    int mat1[m][n];
    printf("Enter the elements of the first matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    } 
    printf("Enter the number of rows and columns for the second matrix:\n");
    scanf("%d %d", &p, &q);
    if (n != p) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
        return 1;
    }

    int mat2[p][q];
    printf("Enter the elements of the second matrix:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int result[m][q];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
