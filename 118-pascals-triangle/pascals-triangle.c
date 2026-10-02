int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    int **result = malloc(numRows * sizeof(int *));
    *returnSize = numRows;

    *returnColumnSizes = malloc(numRows * sizeof(int));

    for (int i = 0; i < numRows; i++) {

        result[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        result[i][0] = 1;
        result[i][i] = 1;

        for (int j = 1; j < i; j++) {
            result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
        }
    }

    return result;
}