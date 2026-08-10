// Last updated: 10/08/2026, 10:52:10 pm
int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
    if (k <= numOnes) {
        return k;
    }
    if (k - numOnes <= numZeros) {
        return numOnes;
    }
    k = (k - numOnes - numZeros);
    return numOnes - k; 
}