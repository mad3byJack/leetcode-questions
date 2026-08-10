// Last updated: 10/08/2026, 10:52:22 pm
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* answer = malloc(sizeof(int) * (*returnSize));
    for (int x = 0; x < numsSize; x++) {
        for (int y = 0; y < numsSize; y++) {
            if (y == x) {
                continue;
            }
            if (nums[x] + nums[y] == target) {
                answer[0] = x;
                answer[1] = y;
                return answer;
            }
        }
    }
    return answer;
}