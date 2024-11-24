#include <stdio.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int i = m - 1;  
    int j = n - 1;  
    int k = m + n - 1;  

    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    int nums1[6] = {1, 2, 3, 0, 0, 0}; 
    int nums2[3] = {2, 5, 6};          
    int nums1Size = 6, nums2Size = 3;
    int m = 3, n = 3;

    merge(nums1, nums1Size, m, nums2, nums2Size, n);

    for (int i = 0; i < nums1Size; i++) {
        printf("%d ", nums1[i]);
    }
    return 0;
}
