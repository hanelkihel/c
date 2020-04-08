/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>


int main()
{ float a,b,c,delta,X,X1,X2;
printf("donner la valeur de a=");
scanf("%f",&a);
printf("donner la valeur de b=");
scanf("%f",&b);
printf("donner la valeur de c=");
scanf("%f",&c);

if (a==0,b==0){
    printf("l'inconnue n'existe pas dans l'equation");
    return 0;
}
if (a==0){
    printf ("l'equation admet unique solution:%f",c/b);
    return 0;
}
delta=b*b-4*a*c ;
 
 if (delta==0.0){
     X=-b/(2*a) ;
     printf ("l'equation admet unique solution:%f",X);
 }
 else if (delta<0){
     printf("l'equation n'admet pas de solution");
 }
 else if (delta>0){
     X1=(-b+sqrt(delta))/(2*a);
     X2=(-b-sqrt(delta))/(2*a);
     printf("l'equation admet deux solutions:X1=\n\tX2= %f,%f",X1,X2);
 }

    return 0;
}
