#include <stdlib.h>
#include <string.h>

char *rot13(char *str) {
    int len = strlen(str);
    char *result = (char *) malloc(sizeof(char) * (len + 1)); // allocate memory for result string
    int i, j;
    for (i = 0; i < len; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = ((str[i] - 'A' + 13) % 26) + 'A'; // apply ROT13 to uppercase letters
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            result[i] = ((str[i] - 'a' + 13) % 26) + 'a'; // apply ROT13 to lowercase letters
        } else {
            result[i] = str[i]; // leave non-alphabetic characters unchanged
        }
    }
    result[len] = '\0'; // add null terminator to result string
    return result;
}
