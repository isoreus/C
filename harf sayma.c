#include <stdio.h>


int main()
{
   char string[100];
   int c = 0, count[26] = {0},countx[26] = {0};
   printf("Enter a string\n");
   gets(string);
   while (string[c] != '\0')
   {
      
      if (string[c] >= 'a' && string[c] <= 'z')
         count[string[c]-'a']++;
         
      else if (string[c] >= 'A' && string[c] <= 'Z')
      countx[string[c]-'A']++;
      
      c++;
   }
   for (c = 0; c < 26; c++)
   {
     
      if (count[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
     else if (countx[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'A',countx[c]);
   }
   
   return 0;
}