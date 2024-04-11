// print the number from 0 to 10 
//for loop
// #include<stdio.h>
// int main(){
//     for (int i=0; i<=10; i=i+1)
//     {
//         printf("%d ", i);
//     }
//     return 0;
// }

// print the alphabets from a to z in for loops
// #include<stdio.h>
// int main()
// {
//     for(char ch='a'; ch<='z'; ch++){
//         printf("%c ", ch);
//     }
//     return 0;
// }

// print the numbers from 0 to n ,if n is given by the user
// while loop
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int i=0;
//     while(i<=n){
//         printf("%d ", i);
//         i++;
//     }
//     return 0;
// }


// do while loop

// #include<stdio.h>
// int main(){
//     int i = 1;
//     do{
//         printf("%d ", i);
//         i++;
//     } while(i<=5);

//     return 0;
// }


// print the sum of first n natural number given by the user also, print them in reverse...
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     printf("sum is %d \n", sum);

//     for(int i=n; i>=1; i--){
//         printf("%d\n", i);
//     }

//     return 0;
// }


// print the table of a number input by the user...

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);

//     for (int i=1; i<=10; i++){
//         printf("%d\n", n*i);
//     }

//     return 0;
// }


// keep taking numbers as input from user until user enter a number which is multiple of 7...

// #include<stdio.h>
// int main()
// {                               //use of break statment
//     int n;
//     do{
//         printf("enter number: ");
//         scanf("%d", &n);

//         printf("%d\n", n);

//         if(n % 7 == 0){
//             break;
//         }
//     } while(1);
//     printf("thank you");

//     return 0;
// }


// print all numbers from 1 to 100 except 6...

// #include<stdio.h>
// int main(){
//     for (int i=1; i<=10; i++){
//         if (i == 8){
//             continue;
//         }
//         printf("%d \n", i);
//     }
//     return 0;
// }

// print all the odd numbers from 5 to 50...

// #include<stdio.h>
// int main(){

//     for(int i=5; i<=50; i++){
//         if(i%2 !=0)
//         printf("%d ", i);
//     }

//     return 0;
// }

// print the factorial of a number...

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);

//     int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     printf("final factorial is %d", fact);

//     return 0;
// }


// print reverse of the table for a number entered by the user...

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter number: ");
//     scanf("%d", &n);

//     for (int i=10; i>=1; i--){
//         printf("%d\n", n*i);
//     }

//     return 0;
// }


//calculate the sum of all the numbers betwwen 1 to 50...

// #include<stdio.h>
// int main(){
//     int sum = 0;

//     for (int i = 8; i<=50; i++){
//         sum =sum + i;
//     }
//     printf("sum is %d", sum);
//     return 0;
// }


                            // homework questions

// write a program to check if the given number is prime or not...

// #include <stdio.h>
// int main() {

//   int n, i, flag = 0;
//   printf("Enter a positive integer: ");
//   scanf("%d", &n);

//   // 0 and 1 are not prime numbers
//   // change flag to 1 for non-prime number
//   if (n == 0 || n == 1)
//     flag = 1;

//   for (i = 2; i <= n / 2; ++i) {

//     // if n is divisible by i, then n is not prime
//     // change flag to 1 for non-prime number
//     if (n % i == 0) {
//       flag = 1;
//       break;
//     }
//   }
//   // flag is 0 for prime numbers
//   if (flag == 0)
//     printf("%d is a prime number.", n);
//   else
//     printf("%d is not a prime number.", n);

//   return 0;
// }


// another method for prime number
// #include <stdio.h> 

// // Function to check prime number 
// void checkPrime(int N) 
// { 
// 	// initially, flag is set to true or 1 
// 	int flag = 1; 

// 	// loop to iterate through 2 to N/2 
// 	for (int i = 2; i <= N / 2; i++) { 

// 		// if N is perfectly divisible by i 
// 		// flag is set to 0 i.e false 
// 		if (N % i == 0) { 
// 			flag = 0; 
// 			break; 
// 		} 
// 	} 

// 	if (flag) { 
// 		printf("The number %d is a Prime Number\n", N); 
// 	} 
// 	else { 
// 		printf("The number %d is not a Prime Number\n", N); 
// 	} 

// 	return; 
// } 

// // driver code 
// int main() 
// { 
// 	int N = 7; 

// 	checkPrime(N); 

// 	return 0;
// }

//C Program to Print PRIME Numbers in a Given Range

#include<stdio.h>
int main ()
{
    int i, prime, up, low, n;
    printf ("ENTER THE LOWER LIMIT : ");
    scanf ("%d", &low);
    printf ("ENTER THE UPPER LIMIT : ");
    scanf ("%d", &up);
    if(low>=2)
    {
        printf ("PRIME NUMBERS ARE : ");
        for (n = low + 1; n < up; n++)
        {
            prime = 1;
            for (i = 2; i < n/2; i++)
                if (n % i == 0)
                {
                    prime = 0;
                    break;
                }
            if (prime)
                printf ("\t %d", n);
        }
    }
    else
    {
        printf("Enter lower number must be greater than 1");
    }
}

