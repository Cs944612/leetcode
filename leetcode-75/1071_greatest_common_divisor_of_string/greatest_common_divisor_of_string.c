#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to compute the GCD of two numbers using the Euclidean algorithm
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // Create temporary strings for concatenation check
    char* temp1 = (char*)malloc(len1 + len2 + 1);
    char* temp2 = (char*)malloc(len1 + len2 + 1);

    // Concatenate str1 and str2
    strcpy(temp1, str1);
    strcat(temp1, str2);

    // Concatenate str2 and str1
    strcpy(temp2, str2);
    strcat(temp2, str1);

    // Check if the concatenated strings are equal
    if (strcmp(temp1, temp2) != 0) {
        free(temp1);
        free(temp2);
        return ""; // No common divisor exists
    }

    // Free the temporary strings
    free(temp1);
    free(temp2);

    // Compute the GCD of the lengths of the two strings
    int gcd_len = gcd(len1, len2);

    // Allocate memory for the result and copy the substring
    char* result = (char*)malloc(gcd_len + 1);
    strncpy(result, str1, gcd_len);
    result[gcd_len] = '\0'; // Null-terminate the string

    return result;
}

int main() {
    char* result1 = gcdOfStrings("ABCABC", "ABC");
    printf("%s\n", result1); // Output: "ABC"
    free(result1);

    char* result2 = gcdOfStrings("ABABAB", "ABAB");
    printf("%s\n", result2); // Output: "AB"
    free(result2);

    char* result3 = gcdOfStrings("LEET", "CODE");
    printf("%s\n", result3); // Output: ""
    free(result3);

    return 0;
}
