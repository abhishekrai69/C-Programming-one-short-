                                            // ARRAYS
// write a program to print mark of students
// #include <stdio.h>
// int main() {
//     int marks[3];
//     printf("enter phy: ");
//     scanf("%d", &marks[0]);

//     printf("enter chem: ");
//     scanf("%d", &marks[1]);

//     printf("enter math: ");
//     scanf("%d", &marks[2]);

//     printf("phy = %d, chem = %d, math = %d", marks[0], marks[1], marks[2]);
//     return 0;
// }

//write a program to enter price of 3 items and print there final cost with gst...

// #include <stdio.h>
// int main() {
//     float price[3];
//     printf("enter 3 prices: ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("total price 1 : %f\n", price[0]+(0.18*price[0]));
//     printf("total price 2 : %f\n", price[1]+(0.18*price[1]));
//     printf("total price 3 : %f\n", price[2]+(0.18*price[2]));
//     return 0;
// }


/* #include<stdio.h>
int main()
{                   //pointer arithematic
    int age = 22;
    int *ptr = &age;
    printf("ptr = %d", ptr);
    ptr --;
    printf("ptr = %d", ptr);

    return 0;
}*/

// #include <stdio.h>
// int main() {
//     int aadhar[5];
//     // input the value
//     int *ptr = &aadhar[0];
    
//     for(int i=0; i<5; i++) {
//         printf("%d index: ", i);
//         scanf("%d", (ptr+i));
//     }
//     // output
//     for(int i=0; i<5; i++) {
//         printf("%d index = %d\n", i, *(ptr+i));
//     }
//     return 0;
// }


// #include<stdio.h>

// void printNumbers(int *arr, int n);

// int main() {
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr, 6);
//     return 0;
// }

// void printNumbers(int *arr, int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

//write a proaram to print the marks of student
// #include<stdio.h>
// int main()
// {
//     int marks[2][3];
//     marks[0][0] = 90;
//     marks[0][1] = 89;
//     marks[0][2] = 60;

//     marks[1][0] = 70;
//      marks[1][1] = 90;
//       marks[1][2] = 90;
//       printf("%d", marks[0][2]);

// return 0;
// }

//write a function to count the number of odd terms in an array

// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//     int arr[] = {1,2,3,4,5,6,};
//     printf("%d", countOdd(arr, 6));
//     return 0;
// }
// int countOdd(int arr[], int n) {
//     int count = 0;
//     for(int i=0; i<n; i++) {
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count;
// }


// write a function to  reverse an array
// #include<stdio.h>

// int countodd(int arr[], int n);
// void reverse(int arr[], int n);
// void printarr(int arr[], int n);

// int main() {
//     int arr[] = {1,2,3,4,5};
//     reverse(arr, 5);
//     printarr(arr, 5);
//     return 0;
// }

// void printarr(int arr[], int n) {
//     for(int i=0; i<n; i++) {
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n) {
//     for(int i=0; i<n/2; i++) {
//         int firstval = arr[i];
//         int secondval = arr[n-i-1];
//         arr[i]  = secondval;
//         arr[n-i-1] = firstval;
//     }
// }


// write a program in c to print largest element in an array...

#include <stdio.h>
int main() {
  int n;
  double arr[100];
  printf("Enter the number of elements (1 to 100): ");
  scanf("%d", &n);

  for (int i = 0; i < n; ++i) {
    printf("Enter number%d: ", i + 1);
    scanf("%lf", &arr[i]);
  }

  // storing the largest number to arr[0]
  for (int i = 1; i < n; ++i) {
    if (arr[0] < arr[i]) {
      arr[0] = arr[i];
    }
  }

  printf("Largest element is = %.2lf", arr[0]);

  return 0;
}
