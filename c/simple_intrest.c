//Question - Write a program, which enter principal amount, rate of interest and time. then calculate and print,
//	simple Interest. (take value step by step)
         #include<stdio.h>
		 #include<conio.h>
		int main()
{
    float principal, period, rate;
    float si;
    printf("\nEnter Prinicpal Amount:\t");
    scanf("%f", &principal);
    printf("\nEnter Period of Years:\t");
    scanf("%f", &period);
    printf("\nEnter Rate of Interest:\t");
    scanf("%f", &rate);
    si = (principal * period * rate)/100;
    printf("\nSimple Interest = %f\n", si);
    printf("\n");
    getch();
}
