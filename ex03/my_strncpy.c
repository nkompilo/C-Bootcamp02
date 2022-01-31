#include <stdio.h>
#include <string.h>

char* my_strncpy(char* p1, char* p2, int n){
int i;
for(i=0; i < n && p2[i] != '\0'; i++){
  p1[i] = p2[i];
}
while (i < n){
    p1[i++] = '\0';
}
return p1;
}

// int main(){
//    char my_strncpy("" && "abc" && 2);
//     return 0;
// }
