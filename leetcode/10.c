// 10. Regular Expression Matching
// Solved
// Hard
// Topics
// Companies
// Given an input string s and a pattern p, implement regular expression matching with support for '.' and '*' where:

// '.' Matches any single character.​​​​
// '*' Matches zero or more of the preceding element.
// The matching should cover the entire input string (not partial).

 

// Example 1:

// Input: s = "aa", p = "a"
// Output: false
// Explanation: "a" does not match the entire string "aa".
// Example 2:

// Input: s = "aa", p = "a*"
// Output: true
// Explanation: '*' means zero or more of the preceding element, 'a'. Therefore, by repeating 'a' once, it becomes "aa".
// Example 3:

// Input: s = "ab", p = ".*"
// Output: true
// Explanation: ".*" means "zero or more (*) of any character (.)".

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isMatch(const char *s, const char *p) {
    int m = strlen(s), n = strlen(p);
    
    bool dp[m + 1][n + 1];
    memset(dp, 0, sizeof(dp)); 
    
    dp[0][0] = true; 

    for (int j = 2; j <= n; j++) {
        if (p[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (p[j - 1] == s[i - 1] || p[j - 1] == '.') {
                dp[i][j] = dp[i - 1][j - 1]; 
            } else if (p[j - 1] == '*') {
                dp[i][j] = dp[i][j - 2]; 
                if (p[j - 2] == s[i - 1] || p[j - 2] == '.') {
                    dp[i][j] |= dp[i - 1][j]; 
                }
            }
        }
    }

    return dp[m][n];
}

int main() {

    const char *s2 = "aa";
    const char *p2 = "a*";
    printf("isMatch(\"%s\", \"%s\") = %s\n", s2, p2, isMatch(s2, p2) ? "true" : "false");


    return 0;
}
