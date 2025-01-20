// int maxScore(char* s) {

//     int len = sizeof(s)/sizeof(s[0]);
//     int max = 0;
    
//     for(int i = 0;i < len;i++) {
//         int nol = 0;
//         int bir = 0;
//         for(int j = 0; j < i;j++) {
//             if(s[j] == 0) {
//                 nol++;
//             }
//         }
//         for(int k = i;k < len;k++) {
//             if(s[k] == 1) {
//                 bir++;
//             }
//         }
//         max = nol + bir;
//     }
//     return max;
// }

#include <stdio.h>

int main() {
    char s[] = "00111";
    int arr[50];
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        arr[i] = s[i] - '0'; 
        len++;
    }

    int max = 0;

    for (int i = 0; i < len - 1; i++) {
        int nol = 0;
        int bir = 0;

        for (int j = 0; j <= i; j++) {
            if (arr[j] == 0) {
                nol++;
            }
        }

        for (int k = i + 1; k < len; k++) {
            if (arr[k] == 1) {
                bir++;
            }
        }

        if (nol + bir > max) {
            max = nol + bir;
        }
    }

    printf("%d\n", max); 
    return 0;
}


// #include <stdio.h>
// #include <string.h>

// int MaxScore(const char *s) {
//     int n = strlen(s);
//     int pre[n];

//     pre[n - 1] = s[n - 1] - '0';
//     for (int i = n - 2; i >= 0; i--) {
//         pre[i] = pre[i + 1] + (s[i] - '0');
//     }

//     int count0 = (s[0] == '0') ? 1 : 0, res = 0;
//     for (int i = 1; i < n; i++) {
//         if (count0 + pre[i] > res) {
//             res = count0 + pre[i];
//         }
//         count0 += (s[i] == '0') ? 1 : 0;
//     }

//     return res;
// }

// int main() {
//     const char *s = "011101"; 
//     int result = MaxScore(s);
//     printf("Max score: %d\n", result);
//     return 0;
// }
