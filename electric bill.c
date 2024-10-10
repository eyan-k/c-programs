#include <stdio.h>

int main(){
    int id, unit;
    float bill , total ,sum;
    char name[30];
    printf("input customer id : ");
    scanf("%d",&id);
    printf("\ninput the unit consumed : ");
    scanf("%d",&unit);
    printf("\ninput your name : ");
    scanf("%s" ,&name);
    if(unit<=199){
    sum = unit*1.20;}
    else if (unit>=200 && unit<400){
    sum = unit*1.50;}
    else if (unit>=400 && unit<600){
    sum  = unit*1.80;}
    else{
    sum  = unit*2.00;
    }
    printf("customer id : %d\n" ,id);
    printf("customer name : %s\n" ,name);
    printf("unit consumed : %d\n" ,unit);
    printf("charge per unit : %.2f\n" ,sum);
    if (sum>400){
    bill = sum * 0.15;
    total = sum + bill;
    printf("amount to pay : %.2f\n" ,total);
    }
    else{
    printf("amount to pay : %.2f\n" ,sum);
    }
    if(sum<100){
    printf("Minimum amount is 100");
    }
    return 0;
}