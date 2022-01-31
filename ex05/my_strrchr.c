#include <stdio.h>
#include <string.h>

char* my_strrchr(char* ch1, char ch2){
 char *p = NULL;
 if ( ch1 != NULL){
     do {
         if (*ch1 == (char)ch2 ){
             p = ch1;}
     }
     while (*ch1++);
 }
 return p;
}

// int main (){
//     my_strrchr("abcabc", 'b');
//     return 0;
// }