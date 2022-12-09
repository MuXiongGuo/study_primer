#include "cstdio"

// 顺时针n次 旋转矩阵
int main() {
    int row, col, n;
    scanf("%d %d %d", &row, &col, &n);
    int matrix[row][col];
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (n%4 == 0) {
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    if (n%4 == 1) {
        for (int i = 0; i < col; ++i) {
            for (int j = row-1; j >= 0; --j) {
                printf("%d ", matrix[j][i]);
            }
            printf("\n");
        }
    }

    if (n%4 == 2) {
        for (int i = row-1; i >= 0; --i) {
            for (int j = col-1; j >= 0; --j) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }
    }

    if (n%4 == 3) {
        for (int i = col-1; i >= 0; --i) {
            for (int j = 0; j < row; ++j) {
                printf("%d ", matrix[j][i]);
            }
            printf("\n");
        }
    }

    return 0;
}
