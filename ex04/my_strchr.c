#include <stdio.h>
#include <string.h>

char* my_strchr(char* str, char ch){
    char *p = NULL;
    if( str != NULL){
        do{
          if (*str == (char)ch ){
              p = str;
              break;
          }    
        }
        while(*str++);
    }
    return p;
}

// int main (){
//     my_strchr("abcabc", 'b');
//     return 0;
// }