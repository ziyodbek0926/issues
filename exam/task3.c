// #include <stdio.h>

// void sort_descending(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int numbers[100], positive[100], n, pos_count = 0;

//     printf("Nechta son kiritmoqchisiz? ");
//     scanf("%d", &n);

//     printf("Sonlarni kiriting:\n");
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &numbers[i]);
//         if (numbers[i] > 0) {
//             positive[pos_count++] = numbers[i];
//         }
//     }

//     sort_descending(positive, pos_count);

//     for (int i = 0; i < pos_count; i++) {
//         printf("%d ", positive[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// int main(){
//    int arr[50];
//     int  num;
//     int z = 0;

//     for(int i = 0; i < 50; i++){
//         scanf("%d", &num);
//         if(num == -1){
//             break;
//         } else if (num > 0){
//             arr[z++] = num;
            
//         }
//         else{
//             printf("n/a");
//             break;
//         }

//     }
//     for(int i = z-1; i >= 0; i--){
//         if(arr[i] > 0){
//             printf("%d ", arr[i]);
//         }

//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int arr[50]; // Musbat sonlarni saqlash uchun massiv
    int num;     // Foydalanuvchi kiritgan son
    int z = 0;   // Massivga saqlangan sonlar soni

    for (int i = 0; i < 50; i++) {
        if (scanf("%d", &num) != 1) { // Agar noto‘g‘ri kiritilgan qiymat bo‘lsa
            printf("n/a\n");
            return 0; // Dastur tugaydi
        }
        if (num == -1) {  // Agar -1 bo‘lsa, kiritishni to‘xtatish
            break;
        } else if (num > 0) {  // Faqat musbat sonlarni saqlash
            arr[z++] = num;  // `z` yordamida massivga yoziladi
        } else {  // Noto‘g‘ri kiritilgan sonlar uchun
            printf("n/a\n");
            return 0; // Dastur tugaydi
        }
    }
    for (int i = z - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}
