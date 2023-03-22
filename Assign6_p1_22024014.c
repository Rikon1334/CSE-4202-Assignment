#include <stdio.h>

#include <string.h>

// mystrcat2() function to concatenate two strings
char *mystrcat2(const char *string1, const char *string2) {
    // Calculate length of strings
    size_t len1 = strlen(string1);
    size_t len2 = strlen(string2);

    // This is for allocating memory for concatenated string
    char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (result == NULL) {
        printf(stderr, "Memory allocation failed.\n");
        exit(0);
    }

    //This is for Copying the strings into the new memory location
    strcat(result, string1);
    strcat(result, string2);

    // This is for returnning a pointer to the concatenated string
    return result;
}

int main() {
    char str1[] = "This is ", str2[] = "CSE4202 class";
    char *result;

    // Print the original strings
    puts(str1);
    puts(str2);

    // Concatenate the strings and print the result
    result = mystrcat2(str1, str2);
    puts(result);

    // print the original strings a second time to ensure they were not altered.
    puts(str1);
    puts(str2);


    free(result);

    return 0;
}
