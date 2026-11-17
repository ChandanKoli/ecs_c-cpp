#include <stdio.h>
#include <string.h> // Required for all the str... functions[span_6](start_span)[span_6](end_span)

int main(void) {
    // 1. Declare all variables at the top
    char str1[100], str2[100], dest[200], rev[100];
    int len, n, i;

    // 2. Input the strings
    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // --- PART 1: BUILT-IN STRING FUNCTIONS ---

    // strlen: Finds the length of the string[span_7](start_span)[span_7](end_span)
    len = strlen(str1);
    printf("\nLength of '%s' is %d\n", str1, len);

    // strcpy: Copies str1 into the empty 'dest' array[span_8](start_span)[span_8](end_span)
    strcpy(dest, str1);
    printf("After strcpy, dest = %s\n", dest);

    // strcat: Appends (attaches) str2 onto the end of 'dest[span_9](start_span)'[span_9](end_span)
    strcat(dest, str2);
    printf("After strcat, dest = %s\n", dest);

    // strcmp: Compares two strings. It returns 0 if they are exactly identical[span_10](start_span)[span_10](end_span)
    if (strcmp(str1, str2) == 0) {
        printf("'%s' and '%s' are EQUAL\n", str1, str2);
    } else {
        printf("'%s' and '%s' are NOT EQUAL\n", str1, str2);
    }

    // --- PART 2: THE PALINDROME CHECKER ---

    // First, make a copy of str1 into 'rev' so we don't destroy the original word[span_11](start_span)[span_11](end_span)[span_12](start_span)[span_12](end_span)
    strcpy(rev, str1);
    n = strlen(rev);

    // The Reversal Engine: Swap the first and last letters, moving inwards to the middle (n/2)[span_13](start_span)[span_13](end_span)
    for (i = 0; i < n / 2; i++) {
        char temp = rev[i];
        rev[i] = rev[n - 1 - i];
        rev[n - 1 - i] = temp;
    }

    printf("\nReverse of '%s' is '%s'\n", str1, rev);

    // If the original word matches the reversed word, it is a Palindrome[span_14](start_span)[span_14](end_span)
    if (strcmp(str1, rev) == 0) {
        printf("'%s' is PALINDROME\n", str1);
    } else {
        printf("'%s' is NOT PALINDROME\n", str1);
    }

    return 0;
}
