#include <stdio.h>
#include <string.h>

// Macro to find maximum of two numbers
#define max(x,y) ((x) > (y) ? (x) : (y))

int result[200][200]; // 2D array to store the length of the longest common subsequence

char str1[200], str2[200]; // Strings to hold user input

int main() {
    printf("Input the first string: ");
    scanf("%s", str1);

    printf("\nInput the second string: ");
    scanf("%s", str2);

    int n = strlen(str1); // Length of the first string
    int m = strlen(str2); // Length of the second string

    // Loop to find the length of the longest common subsequence of the given strings
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (str1[i - 1] == str2[j - 1]) {
                // If characters at current positions are the same, increment the count
                result[i][j] = result[i - 1][j - 1] + 1;
            } else {
                // If characters are different, choose the maximum length subsequence from previous results
                result[i][j] = max(result[i - 1][j], result[i][j - 1]);
            }
        }
    }

    // Display the length of the longest common subsequence of the given strings
    printf("\nLength of longest common subsequence of said strings: %d\n", result[n][m]);

    return 0;
}

