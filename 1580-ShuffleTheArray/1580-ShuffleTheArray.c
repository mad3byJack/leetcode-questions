// Last updated: 10/08/2026, 10:52:14 pm


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    *returnSize = numsSize;
    int *result = malloc(sizeof(int) * (*returnSize));
    for (int x = 0; x < n; x ++) {
        result[x * 2] = nums[x];
        result[x * 2 + 1] = nums[x + n];
    }
    return result;
}