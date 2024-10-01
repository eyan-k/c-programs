/*program to verify if one is eligible for a loan
Author : Ian Waiguru
Reg no. : CT101/G/24488/24
*/
#include <stdio.h>

int main(){

    int age;
    int income;

    printf("input your age :");
    scanf("%d" ,&age);
    printf("input your annual income :");
    scanf("%d" ,&income);

    if(age<21 + income<21000)
    {
        printf("Unfortunately we are unable to offer you a loan at the moment");
    }
    else{
        printf("Congratulation you qualify for the loan");
    }
    return 0;
}