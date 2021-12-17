#include <stdio.h>
 
int main() {
   char s1[20] = "chuoi thu nhat";
   char s2[] = "xin chao";
     
   int i, j, n1, n2;
     
   n1 = strlen(s1);
   n2 = strlen(s2);
     
   j=0;
   for(i = n1; i<n1+n2; i++ ) {
      s1[i] = s2[j];
      j++;
   }
     
   s1[i] = '\0';
    
   printf("\nKet qua sau khi noi chuoi la:\n");
   printf("%s", s1);
 //g
   return 0;
}