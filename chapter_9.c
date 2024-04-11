                    // STRUCTURE //

//syntex

// struct student {
//     char name[100];
//     int roll;
//     float cgpa;
// };

// #include<stdio.h>
// #include <string.h>

// //user defined
// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main() {
//     struct student s1;
//     s1.roll = 1169;
//     s1.cgpa = 8.5;
//     strcpy(s1.name, "aakash");

//     printf("student name = %s\n", s1.name);
//     printf("student roll no = %d\n", s1.roll);
//     printf("student cgpa = %f", s1.cgpa);
//     return 0;
// }


// enter address(house no, block,city,state) of 5 people...

// #include <stdio.h>
// #include <string.h>

// typedef struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct computerengineearingstudent {

//     int roll;
//     float cgpa;
//     char name[50];
// }coe;

// struct address {
//     int houseno;
//     int block;
//     char city[55];
//     char state[25];
// };

// int main() {
//     struct address add[5];
//     printf("enter info for persion 1: ");
//     scanf("%d", &add[0].houseno);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("enter info for persion 2: ");
//     scanf("%d", &add[1].houseno);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("enter info for persion 3: ");
//     scanf("%d", &add[2].houseno);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("enter info for persion 4: ");
//     scanf("%d", &add[3].houseno);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("enter info for persion 5: ");
//     scanf("%d", &add[4].houseno);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     printadd(add[0]);
//     printadd(add[1]);
//     printadd(add[2]);
//     printadd(add[3]);
//     printadd(add[4]);

//     return 0;
//     // coe s1;
//     // s1.roll = 1168;
//     // s1.cgpa = 8.8;
//     // strcpy(s1.name, "chaurasiya");

//     // printf("student name is %s\n", s1.name);
//     // return 0;
// }

// void printadd(struct address add) {
//     printf("address is : %d, %d, %s, %s\n", add.houseno);
// }

// #include <stdio.h>
// #include <string.h>

// typedef struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct computerengineearingstudent {

//     int roll;
//     float cgpa;
//     char name[50];
// } coe;

// struct address {
//     int houseno;
//     int block;
//     char city[55];
//     char state[25];
// };

// int main() {
//     struct address add[5];
//     printf("enter info for persion 1: ");
//     scanf("%d", &add[0].houseno);
//     scanf("%d", &add[0].block);
//     scanf("%s", add[0].city);
//     scanf("%s", add[0].state);

//     printf("enter info for persion 2: ");
//     scanf("%d", &add[1].houseno);
//     scanf("%d", &add[1].block);
//     scanf("%s", add[1].city);
//     scanf("%s", add[1].state);

//     printf("enter info for persion 3: ");
//     scanf("%d", &add[2].houseno);
//     scanf("%d", &add[2].block);
//     scanf("%s", add[2].city);
//     scanf("%s", add[2].state);

//     printf("enter info for persion 4: ");
//     scanf("%d", &add[3].houseno);
//     scanf("%d", &add[3].block);
//     scanf("%s", add[3].city);
//     scanf("%s", add[3].state);

//     printf("enter info for persion 5: ");
//     scanf("%d", &add[4].houseno);
//     scanf("%d", &add[4].block);
//     scanf("%s", add[4].city);
//     scanf("%s", add[4].state);

//     printadd(add[0]);
//     printadd(add[1]);
//     printadd(add[2]);
//     printadd(add[3]);
//     printadd(add[4]);

//     return 0;
// }

// void printadd(struct address add) {
//     printf("address is : %d, %d, %s, %s\n", add.houseno, add.block, add.city, add.state);
// }


// make a structure to share bank account information of all customers of abc bank. also make an alias for it

# include <stdio.h>
# include <string.h>
//user defined
typedef struct student {
int roll;
float cgpa;
char name[100];
} stu ;
typedef struct computerengineeringstudent {
int roll;
float cgpa;
char name[100];
} coe;
struct address {
int houseNo;
int block;
char city[100];
char state[100];
};
struct vector {
int x;

int y;
};
void calcSum(struct vector v1, struct vector v2, struct vector sum);
struct complex {
int real;
int img;
};
typedef struct BankAccount {
int accountNo;
char name[100];
} acc ;
int main() {
acc acc1 = {123, "shradha my love"};
acc acc2 = {124, "rajat"};
acc acc3 = {125, "sudhir"};
printf("acc no = %d\n", acc1.accountNo);
printf("name = %s", acc1.name);
return 0;
}
void calcSum(struct vector v1, struct vector v2, struct vector sum) {
sum.x = v1.x + v2.x;
sum.y = v1.y + v2.y;
printf("sum of x is : %d\n", sum.x);
printf("sum of y is : %d\n", sum.y);
}
