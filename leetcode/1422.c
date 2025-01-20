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
    
    char s[] = "011101";
    int arr[50];
    int len = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        arr[i] = s[i];
        len++;
    }

    int max = 0;
    
    for(int i = 0; arr[i] != '\0';i++) {
        int nol = 0;
        int bir = 0;
        for(int j = 0;j < i;j++) {
            if(arr[j] == 48) {
                nol++;
            }
            printf("%d\n",nol);
        }
        for(int k = i + 1;k < len - 1;k++) {
            if(arr[k] == 49) {
                bir++;
            }
            // printf("%d\n",bir);
        }
        max = nol + bir;
    }
    // printf("%d",max);
}