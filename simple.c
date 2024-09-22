//program to calculate simple interest
/*program to calculate simple interest
Athor:Ian waiguru
Reg no ct101/g/24488/24
*/
#include <stdio.h>
int main(){
int principle;
float rate;
int time_in_years;
printf("input principle and press enter: ");
scanf("%d" ,&principle);
printf("input rate and press enter: ");
scanf("%f" ,&rate);
printf("input time in years and press enter: ");
scanf("%d" ,&time_in_years);
int sum = principle*rate*time_in_years/100;
printf("The simple interest is %d" ,sum);
    return 0;
}