#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,r1,r2;

    printf("Enter the value of A:");
    scanf("%f",&a);

    printf("Enter the value of B:");
    scanf("%f",&b);

    printf("Enter the value of C:");
    scanf("%f",&c);

    d = b*b-4*a*c; 

    if (d>0)
    {
        r1 = -b+sqrt (d)/(2*a);
        r2 = -b-sqrt (d)/(2*a);

        printf("The Real Root R1 = %.2f",r1);
        printf("The Real Root R2 = %.2f",r2);
    }
    else if (d==0)
    {
        r1 = -b/(2*a);
        r2 = -b/(2*a);

        printf("The Root are Equal R1 = %.2fR2 = %.2f",r1,r2);
    }
   else
    {
        printf("Root are imaginary");
        return 0;    
    } 
}