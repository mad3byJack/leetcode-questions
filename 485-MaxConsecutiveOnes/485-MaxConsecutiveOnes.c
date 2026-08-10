// Last updated: 10/08/2026, 10:52:19 pm
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int total = 0;
    int temp  = 0;
    for (int x = 0; x < numsSize; x++) {
        if (nums[x] == 1) {
            temp ++;
        }
        if (nums[x] == 0 && temp > total) {
            total = temp;
            temp = 0;
        }
        if (nums[x] == 0) {
            temp = 0;
        }
    }
    if (temp > total) {
        total = temp;
    }
    return total;
}