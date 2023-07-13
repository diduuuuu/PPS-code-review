/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume
 * caller calls free().
 */
int **generate(int numRows, int *returnSize, int **returnColumnSizes) {
  *returnSize = numRows;
  *returnColumnSizes = (int *)malloc(numRows * sizeof(int));
  int **pascal = (int **)malloc(numRows * sizeof(int *));

  for (int i = 0; i < numRows; i++) {
    (*returnColumnSizes)[i] = i + 1;
    pascal[i] = (int *)malloc((i + 1) * sizeof(int));
    pascal[i][0] = 1;

    for (int j = 1; j < i; j++) {
      pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
    }

    pascal[i][i] = 1;
  }

  return pascal;
}