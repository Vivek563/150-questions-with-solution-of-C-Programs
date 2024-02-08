#include <stdio.h>

int main()
{
   int i;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);

   
      for(i = 0; (i < 100 && str[i] != '\0'); i++)
        str[i] = str[i] + 3; //the key for encryption is 3 that is added to ASCII value

      printf("\nEncrypted string: %s\n", str);
      

   
   return 0;
}
