// Last updated: 11/08/2026, 1:08:39 pm
void reverseString(char* s, int sSize) {
    int left = 0;
    int right = sSize - 1;
    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left ++;
        right --;
    }
}