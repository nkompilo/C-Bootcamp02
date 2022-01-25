#include <stdio.h>
#include <string.h>

int my_strcmp(char* ch1, char* ch2){

    for(int i = 0; i < strlen(ch1); i++){
        if(ch1[i] != ch2[i]){
            if(ch1[i] < ch2[i]){
                return -1;}
        if (ch1[i] > ch2[i]){
            return 1;}
        }
        return 0;
    }
    
}

// int main() {
//   char *s1 = "abc";
//   char *s2 = "abc";
  
//   printf("my_strcmp -> %d\n", my_strcmp(s1, s2));
//   return 0;
// }