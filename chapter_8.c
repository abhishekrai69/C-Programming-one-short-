                    // STRINGS //

// create a string firstname & lastName to store details of user and print all the character using loops

// #include<stdio.h>

// void printstring(char arr[]);

// int main() {
//     char str[60];
//     fgets(str,60, stdin);
//     puts(str);
//     // char firstname[] = "abhishek";
//     // char lastname[] = "rai";

//     // printstring(firstname);
//     // printstring(lastname);
//     return 0;
// }

// void printstring(char arr[]) {
//     for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//     }
//     printf("\n");
// }


                    // make a program that inputs users name and prints its length

// #include <stdio.h>

// void printstring(char arr[]);
// int countlength(char arr[]);

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is: %d", countlength(name));
//     return 0;
// }

// int countlength(char arr[]) {
//     int count = 0;
//     for(int i= 0; arr[i]!='\0'; i++) {
//         count ++;
//     }
//     return count-1;
// }


// check if a given character is present in string or not...

// #include <stdio.h>
// void checkchar(char str[], char ch);

// int main() {
//     char str[] = "chitkara college";
//     char ch ='x';
//     checkchar(str, ch);
// }

// void checkchar(char str[], char ch) {
//     for(int i=0; str[i] !='\0'; i++){
//         if(str[i] == ch) {
//             printf("character is present!");
//             return 0;
//         }
//     }
//     printf("character is not present!");
// }


// Write a program to convert all lowercase vowels to uppercase in a string.


// #include <stdio.h>
// #define MAX_SIZE 100 // Maximum string size


// int main()
// {
//     char str[MAX_SIZE];
//     int i;

//     /* Input string from user */
//     printf("Enter your text : ");
//     gets(str);

//     for(i=0; str[i]!='\0'; i++)
//     {
//         /*
//          * If current character is lowercase alphabet then
//          * convert it to uppercase.
//          */
//         if(str[i]>='a' && str[i]<='z')
//         {
//             str[i] = str[i] - 32;
//         }
//     }

//     printf("Uppercase string : %s",str);
//     return 0;
// }
                    // another method//

// #include <stdio.h>

// int main() {
//     char str[100];
//     int i = 0;

//     //printf("C Program to Convert lowercase vowel to uppercase of String\n");
//     printf("Please enter a string: ");
//     fgets(str, 100, stdin);

//     while (str[i] != '\0') {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
//             str[i] = str[i] - 32; // Convert lowercase vowel to uppercase
//         }
//         i++;
//     }

//     printf("Vowel after converting into uppercase = %s", str);
//     return 0;
// }


// write a program to remove all blank spaces in a string in c language

#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    int i, k = 0;

    printf("Enter the string: ");
    gets(s);

    for (i = 0; s[i]; i++) {
        s[i] = s[i + k];
        if (s[i] == ' ' || s[i] == '\t') {
            k++;
            i--;
        }
    }

    printf("String after removing all blank spaces: %s", s);
    return 0;
}

