#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
float m,p,c,s,avg;
printf("enter the marks of maths, physics and chem ");
scanf("%f%f%f",&m,&p,&c);
s=m+p+c;
avg=s/3;
printf("\n the average is %d",avg);
	return 0;
}
