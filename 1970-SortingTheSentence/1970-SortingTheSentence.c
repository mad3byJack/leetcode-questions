// Last updated: 10/08/2026, 10:52:13 pm

char * sortSentence(char * s){
    char *result = malloc(sizeof(char) * strlen(s));
    char count = '1';
    char *search;
    int result_index = 0;
    while ((search = strchr(s, count)) != NULL) {
        int ind = search - s - 1;
        bool found = false;
        while (!found) {
            if (ind == 0 || s[ind] == ' ') {
                found = true;
            } else {
                ind --;
            }
        }
        while (s[ind] != count) {
            if (s[ind] == ' ') {
                ind ++;
                continue;
            }
            result[result_index] = s[ind];
            result_index ++;
            ind ++;
        }
        result[result_index] = ' ';
        result_index ++;
        count ++;
    }
    result[result_index - 1] = '\0';
    printf("%s", result);
    return result;
}