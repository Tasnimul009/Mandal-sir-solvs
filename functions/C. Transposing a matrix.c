#include <stdio.h>

void transpose(int rows, int columns, int mat[rows][columns], int transpose[columns][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
}

void print_trans(int rows, int columns, int transpose[columns][rows]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3, columns = 3;
    int mat[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            scanf("%d", &mat[i][j]);
        }
    }

    int trans[columns][rows];
    transpose(rows, columns, mat, trans); 
    printf("Transposed Matrix:\n");
    print_trans(columns, rows, trans); 
    return 0;
}
