// Last updated: 10/08/2026, 10:52:15 pm
int canBeTypedWords(char* text, char* brokenLetters) {
    int result = 0;
    bool word_valid = true;
    for (int i = 0; i < strlen(text); i++) {
        if (text[i] == ' ') {
            if (word_valid) {
                result ++;
            }
            word_valid = true;
            continue;
        } else {
            if (strchr(brokenLetters, text[i]) != NULL) {
                word_valid = false;
            }
        }
    }
    if (word_valid) {
        result ++;
    }
    return result;
}