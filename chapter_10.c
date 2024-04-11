                    // FILE INPUT OUTPUT //
// #include <stdio.h>
// int main() {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     fclose(fptr);
//     return 0;
// }


// make a program to read 6 integers froma file

// #include<stdio.h>
// int main()
// {
//     FILE *fptr;
//     fptr = fopen("test.txt", "r");
//     int n;
//     fscanf(fptr, "%d", &n);
//     printf("number = %d\n",n);
//     fscanf(fptr, "%d", &n);
//     printf("number = %d\n",n);
//     fscanf(fptr, "%d", &n);
//     printf("number = %d\n",n);
//     fscanf(fptr, "%d", &n);
//     printf("number = %d\n",n);
//     fscanf(fptr, "%d", &n);
//     printf("number = %d\n",n);

//     fclose(fptr);
//     return 0;
// }


// write a program to write all the odd numbers from 1 to n in a file.

// #include <stdio.h>

// int main() {
//     FILE *fptr;
//     fptr = fopen("odd.txt", "w");

//     int n;
//     printf("enter n: ");
//     scanf("%d", &n);

//     for(int i=1; i<=n; i++) {
//         if(i%2 !=0){
//             fprintf(fptr, "%d\n", i);
//         }
//     }
//     fclose(fptr);
//     return 0;
// }

//Allocate memory to store first 5 odd numbers, then reallocate it to store first 6 even number.
// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *ptr;
//     ptr = (int *) calloc(5, sizeof(int));
//     ptr[0] =1;
//     ptr[1] =3;
//     ptr[2] =5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for( int i=0; i<5; i++) {
//         printf("%d\n", ptr[i]);
//     }

//     ptr = realloc(ptr, 6);
//     ptr[0] = 2;
//     ptr[l] = 4;
//     ptr[2] = 6;
//     ptr[3] = 8;
//     ptr[4] = 10;
//     ptr[5] = 12;

//     for( int i=0; i<6; i++) {
//         printf("%d\n", ptr[i]);
//     }

//     return 0;

// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));
    ptr[0] =1;
    ptr[1] =3;
    ptr[2] =5;
    ptr[3] = 7;
    ptr[4] = 9;

    for( int i=0; i<5; i++) {
        printf("%d\n", ptr[i]);
    }

    ptr = realloc(ptr, 6);
    ptr[0] = 2;
    ptr[1] = 4; // corrected l to 1
    ptr[2] = 6;
    ptr[3] = 8;
    ptr[4] = 10;
    ptr[5] = 12;

    for( int i=0; i<6; i++) {
        printf("%d\n", ptr[i]);
    }
    free(ptr);

    return 0;

}