#include <stdio.h>
#include <string.h>

char* reverse_string(char* ch){
 int len, rev ;
 len = strlen(ch)-1 ;

  for(int i = 0; i<len; i++, len--){ 
     rev = ch[i]; 
     ch[i]= ch[len]; 
     ch[len] = rev; 
     }
 return ch;
}

// int main() {
//   char my_str[] = "Hello ";
  
//   printf("Before reverse -> %s\n", my_str);
//   printf("Reverse -> %s ", reverse_string(my_str));
//   return 0;
// }