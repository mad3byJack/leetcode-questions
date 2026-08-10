// Last updated: 10/08/2026, 10:52:07 pm
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numberOfPairs(int* nums, int numsSize, int* returnSize) {
    int *result = malloc(sizeof(int) * 2);
    *returnSize = 2;
    result[0] = 0;
    result[1] = numsSize;
    for (int x = 0; x < numsSize; x++) {
        for (int y = 0; y < numsSize; y++) {
            if (x == y) {
                continue;
            }
            if (nums[x] == nums[y]) {
                result[0] ++;
                result[1] -= 2;
                nums[x] = result[0] + 100;
                nums[y] = result[0] + 200;
                break;
            }
        }
        printf("%d", nums[x]);
    }
    return result;
}