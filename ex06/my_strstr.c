#include <stdio.h>
#include <string.h>

char* my_strstr(char* str1, char* str2){
char *p;
for(p = str1; *p != '\0'; p++ ){
  char *a = str2;
  char *b = p;
  while (*a != '\0' && *b != '\0' && *a == *b){
      a++;
      b++;
  }
  if (*a == '\0')
  return p;
}
return 0;
}

// int main (){
// my_strstr("Hello" , "llo");
//     return 0;
// }