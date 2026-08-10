// Last updated: 10/08/2026, 10:52:11 pm
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize * 2;
    int *result = malloc((*returnSize) * sizeof(int));
    for (int x = 0; x < numsSize; x++) {
        result[x] = nums[x];
        result[x + numsSize] = nums[x];
    }
    return result;
}