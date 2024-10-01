//program to calculate simple interest
/*program to calculate simple interest
Athor:Ian Waiguru
Reg no CT101/G/24488/24
*/

#include <stdio.h>

int main()
{  
int principle;
float rate;
int time_in_years;

printf("input principle and press enter: ");
scanf("%d" ,&principle);
printf("Your principle is %d\n" ,principle);
printf("input rate and press enter: ");
scanf("%f" ,&rate);
printf("Your rate is %.2f\n" ,rate);
printf("input time in years and press enter: ");
scanf("%d" ,&time_in_years);
printf("Your time is %d\n" ,time_in_years);

int sum = principle*rate*time_in_years/100;

printf("Your simple interest is %d\n" ,sum);

    return 0;
}