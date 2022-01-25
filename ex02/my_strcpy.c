#include <stdio.h>
#include <string.h>

char* my_strcpy(char* p1, char* p2){
int i = 0;
while (p2[i] != '\0'){
    p1[i] = p2[i];
    i++;
 }
return p1;
}

// int main() {
//   char dst[100] = {0};
//   char *src     = "Hello";
  
//   printf("my_strcpy -> %s\n", my_strcpy(dst, src));
//   return 0;
// }
