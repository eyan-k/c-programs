/*program to calculate fine for over due library  books 
Author : Ian Waiguru
Reg no. : CT101/G/24488/24
*/
#include<stdio.h>
int main()
{

    int BookID ,Due_Date ,Return_Date;
    printf("input BookID : ");
    scanf("%d" ,&BookID);
    printf("input the due date : ");
    scanf("%d" ,&Due_Date);
    printf("input return date : ");
    scanf("%d" ,&Return_Date);

    int Over_due = Return_Date - Due_Date;
    int rate = 0;

    if(Over_due <= 7){
     rate = 20;
    }
         else if(Over_due <=14) {
        rate = 50;
    }
         else{
       rate = 100;
    }
    
    int fine = rate * Over_due;
   printf("BookID : %d\n" ,BookID);
   printf("Due Date : %d\n" ,Due_Date);
   printf("Return Date : %d\n" ,Return_Date);
   printf("Over due : %d\n" ,Over_due);
   printf("Rate : %d\n" ,rate);
   printf("Total fine : %d\n" ,fine);
    return 0;
}