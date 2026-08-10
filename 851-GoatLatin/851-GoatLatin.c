// Last updated: 10/08/2026, 10:52:17 pm
char* toGoatLatin(char* sentence) {
    const char *vowels = "aeiouAEIOU";
    char *string = malloc(1400);
    bool new_word = true;
    bool carry_letter = true;
    char carried;
    int string_count = 0;
    int word_index = 1;
    for (int x = 0; x < strlen(sentence); x++) {
        if (new_word && x == strlen(sentence) - 1) {
            string[string_count] = sentence[x];
            string_count ++;
            string[string_count] = 'm';
            string_count ++;
            for (int y = 0; y < word_index + 1; y++) {
                string[string_count] = 'a';
                string_count ++;
            }
            string_count ++;
            string[string_count - 1] = '\0';
        }
        if (new_word) {
            for (int i = 0; i < 10; i++) {
                if (sentence[x] == vowels[i]) {
                    carry_letter = false;
                }
            }
            if (carry_letter) {
                carried = sentence[x];
            } else {
                string[string_count] = sentence[x];
                string_count ++;
            }
            new_word = false;
        } else if (sentence[x] == ' ' || x == strlen(sentence) - 1) {
            if (x == strlen(sentence) - 1) {
                string[string_count] = sentence[x];
                string_count ++;
            }
            if (carry_letter) {
                string[string_count] = carried;
                string_count ++;
            }
            string[string_count] = 'm';
            string_count ++;
            for (int y = 0; y < word_index + 1; y++) {
                string[string_count] = 'a';
                string_count ++;
            }
            string[string_count] = ' ';
            string_count ++;
            new_word = true;
            word_index ++;
            carry_letter = true;
        } else {
            string[string_count] = sentence[x];
            string_count ++;
        }
    }
    string[string_count - 1] = '\0';
    return string;
}