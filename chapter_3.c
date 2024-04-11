// write a program to print if an user is adult or not...

#include<stdio.h>
int main()
{
    int age;
    printf("enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("you are an adult\n");
        printf("you can vote");
    }
    else if (age >= 13 && age < 18)
    {
        printf("you are a teenager");
    }
    else{
        printf("not an adult");
    }

    return 0;
}


// write an program to print numbers of days in a week...

// #include<stdio.h>
// int main(){
//     int day;
//     printf("Enter day(1-7) : ");
//     scanf("%d", &day);

//     switch(day){
//         case 1: printf("monday\n");
//                 break;
//         case 2: printf("tuesday\n");
//                 break;
//         case 3: printf("wednesday\n");
//                 break;
//         case 4: printf("thursday\n");
//                 break;
//         case 5: printf("friday\n");
//                 break;
//         case 6: printf("saturday\n");
//                 break;
//         case 7: printf("sunday\n");
//                 break;
//         default: printf("not a valid day!\n");
//     }
//     return 0;
// }


// write a program to check if a student passed or failed...

// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("Enter number(0-100): ");
//     scanf("%d", &marks);

//     if(marks >=0 && marks <=30){
//         printf("FAIL...!\n");
//     }else if(marks >30 && marks <=100){
//         printf("PASS\n");
//     }else{
//         printf("wrong marks entered");
//     }

//     return 0;
// }


// write a program to find if a character entered by the user is upper case or not...

// #include<stdio.h>
// int main()
// {
//     char ch;
//     printf("enter character: ");
//     scanf("%c", &ch);

//     if(ch>= 'A' && ch<= 'Z') {
//         printf("upper case\n");
//     }
//     else if(ch>= 'a' && ch<= 'z') {
//         printf("lower case\n");
//     }
//     else{
//         printf("not english letter\n");
//     }

//     return 0;
// }


// write a program to check if a given number is armstrong number or not...
//A positive integer of n digits is called an Armstrong number of order n

// #include<stdio.h>
// int main()
// {
//     int num, originalNum, remainder, result = 0;
//     printf("Enter a three digit number: ");
//     scanf("%d", &num);
//     originalNum = num;

//     while(originalNum != 0){
//         remainder = originalNum % 10;

//         result += remainder * remainder * remainder;

//         originalNum /= 10;
//     }
//     if (result == num)
//         printf("%d is an Armstrong number.", num);
//     else
//         printf("%d is not an Armstrong number.", num);

//     return 0;
// }


//write a program to check if  the given number is natural number or not...
// #include <stdio.h>
// int main() {
//     int num;

//     // Input from the user
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     // Check if the number is positive
//     if (num > 0) {
//         printf("%d is a natural number.\n", num);
//     } else {
//         printf("%d is not a natural number.\n", num);
//     }

//     return 0;
// }
