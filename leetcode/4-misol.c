#include <stdio.h>

int main(){
    int* nums1[] = {1,3};
    int* nums2[] = {2};

    int nums1Size = sizeof(nums1)/sizeof(nums1[0]);
    int nums2Size = sizeof(nums2)/sizeof(nums2[0]);

    findMedianSortedArrays(nums1,nums1Size,nums2,nums2Size);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    
    int len3 = nums1Size + nums2Size;
    int arr3[len3];

    for (int i = 0; i < len3; i++)
    {
        if (i < nums1Size)
        {
            arr3[i] = nums1[i];
        }else{
            arr3[i] = nums2[i];
        }
        
    }
    
    for (int i = 0; i < len3; i++)
    {
        if (ar)
        {
            /* code */
        }
        
    }
    
    if (len3 / 2 != 0)
    {
        int a = nums1Size / nums2Size;
        printf(arr3[a]);
    }else{
        int 
    }
    
}
