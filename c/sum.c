#include<stdio.h>
#include<conio.h>
main()
	 {
  int x = 8 , y = x, z;
   
   z = x+y;
   
   printf( "%d   %d  %d",x,y,z);
  z = x++ + y++;
   
   printf( "%d   %d  %d",x,y,z);
   getch();
 
  
}
