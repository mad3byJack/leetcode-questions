// Last updated: 19/08/2026, 7:28:08 pm
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    *returnSize = digitsSize;
    for (int i = digitsSize - 1; i >= 0; i --) {
        digits[i] ++;
        if (i > 0 && digits[i] < 10) {
            return digits;
        }
        else if (i == 0 && digits[i] == 10) {
            printf("yes");
            digits[i] = 0;
            int *new = malloc(sizeof(int) * (digitsSize + 1));
            new[0] = 1;
            *returnSize = digitsSize + 1;
            for (int x = 0; x < digitsSize; x++) {
                new[x + 1] = digits[x];
            }
            return new;
        }
        else if (i > 0) {
            digits[i] = 0;
        }
        
    }
    return digits;
}