

#include <iostream>
using namespace std;

int main(void) {
   char str[] = "A string.";
   char *pc = str;

   // Printing the letter on the index 0, the pointer position and the letter t
   cout << str[0] <<' '<< *pc <<' '<<pc[3]<<"\n";
   // Updating the pointer position to pointer+2.
   pc += 2;
   //printing the pointer position and the letters r and g of the string
   cout <<*pc<<' '<< pc[2] <<' '<< pc[5];

   return 0;
}