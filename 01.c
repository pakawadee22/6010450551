#include <stdio.h>
int main()
{
   char input;
   scanf("%s", &input);
   if  (input >= 'A' && input <= 'Z'){
       printf("Output: upper case");
   }
   else if (input >= 'a' && input <= 'z'){
       printf("Output: lower case");
   }
   else if (input >= '0' && input <= '9'){
       printf("Output: digit");
   }
   else {
       printf("Output: others");
   }
}

