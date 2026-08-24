// Last updated: 24/08/2026, 10:16:10 am
int numOfUnplacedFruits(int* fruits, int fruitsSize, int* baskets, int basketsSize) {
    int unplaced = 0;
    for (int i = 0; i < fruitsSize; i++) {
        bool found = false;
        int x = 0;
        while (!found && x < basketsSize) {
            if (baskets[x] >= fruits[i]) {
                found = true;
                baskets[x] = 0;
            }
            x ++;
        }
        if (!found) {
            unplaced ++;
        }
    }
    return unplaced;
}