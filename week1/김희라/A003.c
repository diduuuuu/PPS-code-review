/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize) {
  int carry = 1;
  for (int i = digitsSize - 1; i >= 0; i--) {
    if (digits[i] != 9) {
      digits[i]++;
      carry = 0;
      break;
    } else {
      digits[i] = 0;
    }
  }

  // If there is a carry, create a new array with an additional digit
  if (carry) {
    *returnSize = digitsSize + 1;
    int *result = (int *)malloc((*returnSize) * sizeof(int));
    result[0] = 1;
    for (int i = 1; i < (*returnSize); i++) {
      result[i] = 0;
    }
    return result;
  } else {
    *returnSize = digitsSize;
    return digits;
  }
}