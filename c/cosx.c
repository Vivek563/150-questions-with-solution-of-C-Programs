
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
 
int factorial(int n)
{
        int i,fact=1;
        for(i=1;i<=n;i++)
                fact=fact*i;
        return fact;
        getch();
}
 
 
int main()
{
        double x, cosx=1, z, term;
   		int j, n, i,sign=1;
 
        printf("\nEnter the value for x : ") ;  
        scanf("%lf", &x) ;
        printf("\nEnter the value for n : ") ;   
        scanf("%d", &n) ;
 
        x = x * 3.14159 / 180 ;        //converting degree to radian
    i=0;
    z=cos(x);
 
        for(i=2;i<=n;i=i+2)
    {
        sign=-sign;
                term=sign*pow(x,i)/factorial(i);
        cosx=cosx+term;
    }
 
        printf("\ncos(x) is approx %.15lf\n", cosx);
 
    return 0;
}
