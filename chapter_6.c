// #include <stdio.h>
                      //pointers
// int main() {
//     int age = 22;
//     int *ptr = &age;
//     int _age = *ptr;

//     printf("%d", _age);
//     return 0;
// }


// #include <stdio.h>

// void printAddress(int n);

// int main() {
//     int n = 4;
//     printAddress(n);
//     printf("address of n is : %u\n", &n);
//     return 0;
// }

// void printAddress(int n) {
//     printf("address of n is : %u\n", &n);
// }


// write a function to calculate the sum,product and average of 2 numbers.print that average in the main function...

// #include<stdio.h>

// void doWork(int a, int b, int *sum, int *prod, int *avg);

// int main() {
//     int a = 3, b = 5;
//     int sum, prod, avg;
//     doWork(a,b, &sum, &prod, &avg);

//     printf("sum = %d, prod = %d, avg = %d\n", sum, prod, avg);
//     return 0;
// }
// void doWork(int a, int b, int *sum, int *prod, int *avg) {
//     * sum = a+b;
//     * prod = a*b;
//     * avg = (a+b)/2;
// }


// write a program in c to find the maximum number between two numbers using a pointer..

// #include <stdio.h>

// // Function to find the maximum number using pointers
// int find_max(int *a, int *b) {
//     if (*a > *b) {
//         return *a;
//     } else {
//         return *b;
//     }
// }

// int main() {
//     int num1, num2;
//     // Input two numbers
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);
    
//     // Find the maximum number using pointers
//     int max = find_max(&num1, &num2);
    
//     // Print the result
//     printf("The maximum number between %d and %d is %d\n", num1, num2, max);
    
//     return 0;
// }

                    //another method
// #include <stdio.h>

// int main() {
//     int a, b;
//     int *ptr_a, *ptr_b;
//     int max;

//     // Read input values
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     // Assign addresses to pointers
//     ptr_a = &a;
//     ptr_b = &b;

//     // Compare values and find the maximum
//     if (*ptr_a > *ptr_b) {
//         max = *ptr_a;
//     } else {
//         max = *ptr_b;
//     }

//     // Print the the result
//     printf("The maximum number between %d and %d is %d\n", a, b, max);
//     return 0;
// }


//write a program in c to print the elements of an array in reverse order.

// #include <stdio.h>

// int main() {
//     // Assuming you have an array called "arr" with elements
//     int arr[] = {1, 2, 3, 4, 5,6};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     // Print the elements of the array in reverse order
//     for (int i = n - 1; i >= 0; i--) {
//         printf("%d\n", arr[i]);
//     }

//     return 0;
// }

                    // another method to reverse arry
// #include <stdio.h>    
// int main()    
// {    
//     //Initialize array     
//     int arr[] = {1, 2, 3, 4, 5, 6};     
        
//     //Calculate length of array arr    
//     int length = sizeof(arr)/sizeof(arr[0]);    
        
//     printf("Original array: \n");    
//     for (int i = 0; i < length; i++) {     
//         printf("%d ", arr[i]);     
//     }      
        
//     printf("\n");    
        
//     printf("Array in reverse order: \n");  

//     //Loop through the array in reverse order    
//     for (int i = length-1; i >= 0; i--) {     
//         printf("%d ", arr[i]);     
//     }     
//     return 0;    
// }    


// Write a program in C to print all the letters in english alphabet using a pointer.
#include <stdio.h>

int main() {
    char c;
    printf("Alphabets from A to Z are:\n");
    for (c = 'A'; c <= 'Z'; ++c) {
        printf("%c ", c);
    }
    printf("\n");
    return 0;
}
