                // declaration prototype
// #include<stdio.h>
// void printHello();

// int main(){
//     printHello();   //function call
//     printHello();
//     printHello();   
//     return 0;
// }

// void printHello(){
//     printf("Hello!\n");   //function defination
//     printf("my name is lakhan\n");
// }


//write a function that prints namaste if user is indian and bonjour if the user is french...

// #include<stdio.h>
// void namaste();
// void bonjour();

// int main() {
//     printf("enter f for french & i for indian: ");
//     char ch;
//     scanf("%c",&ch);

//     if(ch == 'i'){
//         namaste();
//     } else{
//         bonjour();
//     }
//     return 0;
// }
// void namaste(){
//     printf("Namaste\n");
// }
// void bonjour(){
//     printf("bonjour");
// }

// write a program to calculate the value of two numbers...

// #include<stdio.h>
// int sum(int a, int b);

// int main() {
//     int a, b;
//     printf("enter first number: ");
//     scanf("%d", &a);
//     printf("enter second number: ");
//     scanf("%d", &b);

//     int s = sum(a,b);
//     printf("sum is :%d",s);
//     return 0;
// }
// int sum(int x, int y){
//     return x + y;
// }

// use library function to calculate of the given number given by the user...

// #include<stdio.h>
// #include<math.h>

// void calculatePrice(float value);

// int main() {
//     int n = 4;
//     printf("%f", pow(n,2));
//     return 0;
// }


// calculate the area of square,rectangle and circle for the given value entered by the user...

// #include<stdio.h>

// float squarearea(float side);
// float circlearea(float rad);
// float rectanglearea(float a, float b);

// int main() {
//     float a = 5.0;
//     float b = 10.0;
 
//     printf("area is: %f", rectanglearea(a,b));
//     //scanf("%d", &a,b);

//     return 0;
// }

// float squarearea(float side) {
//     return side * side;
// }

// float circlearea(float rad) {
//     return 3.14 * rad * rad;
// }

// float rectanglearea(float a, float b) {
//     return a * b;
// }


                    // RECURSION FUNCTION //

// #include<stdio.h>

// void printHW(int count);

// int main() {
//     printHW(5);
//     return 0;
// }
// //recursive function
// void printHW(int count) {
//     if(count == 0) {
//         return;
//     }
//     printf("Hello mother fucker...\n");
//     printHW(count-1);
// }

 // find sum of first n natural numbers.

//  #include<stdio.h>
//  int sum(int n);

//  int main(){
//     printf("sum is : %d", sum(5));
//     return 0;
//  }

//  int sum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int sumnm1 = sum(n - 1);
//     int sumn = sumnm1 + n;
//     return sumn;
//  }


// find factorial of n

//  #include<stdio.h>

//  int fact(int n);
 
//  int main() {
//     printf("factorial is: %d", fact(5));
//     return 0;
//  }

//  int fact(int n){
//     if(n == 0){
//         return 1;
//     }
//     int factNm1 = fact(n-1);
//     int factNm = factNm1 * n;
//     return factNm;
//  }


// write a function to convert celsius to faranaite...

//  #include<stdio.h>
//  float convertTemp(float celsius);

//  int main() {
//     float far = convertTemp(37);
//     printf("far: %f", far);
//     return 0;
//  }

//  float convertTemp(float celsius) {
//     float far = celsius * (9.0/5.0) + 32;
//     return far;
//  }

 // write a function to calculate percentage of student marks in science, math & hindi

//  #include<stdio.h>
//  int calcPercentage(int science, int math, int hindi);

//  int main() {
//     int sc = 92;
//     int math = 62;
//     int hindi =86;

//     printf("percentage is: %d", calcPercentage(sc, math, hindi));
//     return 0;
//  }

//  int calcPercentage(int science, int math, int hindi) {
//     return((science + math + hindi)/3);
//  }


 // write a function to print n terms of fibonacci sequence.

// #include<stdio.h>

// int fib(int n);

// int main() {
//     printf("%d", fib(6));
//     return 0;
// }

// int fib(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     if(n == 1) {
//         return 1;
//     }
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     //printf("fib of %d is: %d \n", n, fibN);
//     return fibN;
// }


//C Program to Count Number of Digits in an Integer

// #include <stdio.h>
// int main() {
//     long long n;
//     int count = 0;
//     printf("enter the  number: ");
//     scanf("%d", &n);

//     do{
//         n/= 10;
//         ++count;
//     } while (n!=0);

//     printf("number of digits: %d", count);
// }


// C program to find sum of its digits of a number

// #include <stdio.h>
// int main()
// {
//     int num, sum=0;

//     /* Input a number from user */
//     printf("Enter a number to find sum of its digit: ");
//     scanf("%d", &num);

//     while(num!=0)
//     {
//         /* Find last digit of num and add to sum */
//         sum += num % 10;

//         /* Remove last digit from num */
//         num = num / 10;
//     }

//     printf("Sum of digits = %d", sum);

//     return 0;
// }


//write a C program to find square root of a number

// #include<stdio.h>
// #include<math.h>

// int main() {
//     double number, squareroot;

//     printf("enter a number: ");
//     scanf("%lf", &number);

//     squareroot = sqrt(number);

//     printf("square root of %lf= %lf", number,squareroot);
//     return 0;
// }


//Write a function to print "Hot" or "Cold" depending on the temperature user enters.

// #include<stdio.h>
// float temp(float t);

// int main() {
//     float temperature;
//     printf("Enter the temperature in celcius: ");
//     scanf("%f", &temperature);
//     temp(temperature);
//     return 0;
// }

// float temp(float t) {
//     if(t > 30){
//         printf("%.2f is Hot", t);
//     }
//     else if(t < 20){
//         printf("%.2f is Cold", t);
//     }
//     else{
//         printf("%.2f is normal", t);
//     }
// }


// Write program to calculate pow function

#include <stdio.h>
#include <math.h>

int main()
{
    double base, power, result;

    printf("Enter the base number: ");
    scanf("%lf", &base);

    printf("Enter the power raised: ");
    scanf("%lf",&power);

    result = pow(base,power);

    printf("%.1lf^%.1lf = %.2lf", base, power, result);

    return 0;
}