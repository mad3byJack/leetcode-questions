// Last updated: 10/08/2026, 10:52:21 pm
int lengthOfLastWord(char* s) {
    int result = 0;
    int counter = 0;
    char last_char = '0';
    for (int x = 0; x < strlen(s); x++) {
        if (s[x] == ' ') {
            if (last_char != ' ') {
                result = counter;
            }
            counter = 0;
        } else {
            counter ++;
        }
        last_char = s[x];
    }
    if (last_char != ' ') {
        result = counter;
    }
    return result;
}