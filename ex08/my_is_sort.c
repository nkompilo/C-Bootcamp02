// #include <string.h>
// #include <stdbool.h>
// #ifndef STRUCT_INTEGER_ARRAY
// #define STRUCT_INTEGER_ARRAY
// typedef struct s_integer_array
// {
//     int size; 
//     int* array;
// } integer_array;
// #endif

// bool my_is_sort(integer_array* arr){
//     integer_array temp = *arr;
//   int i = 0;
//   int *p = 0;
//   if ((temp.array[i] > temp.array[i+1]) || (temp.array[i] < temp.array[i-1])){
//       while (i <= temp.size ){
//               return false;}  
//       i++;}
//     else {
//       return true;
//   }
// return 0;
// }
//  int main(){
//      int arr [] = {1,2,3,4,5};
//      return 0;
//   }

#include <string.h>
#include <stdbool.h>
#ifndef STRUCT_INTEGER_ARRAY
#define STRUCT_INTEGER_ARRAY
typedef struct s_integer_array
{
    int size; 
    int* array;
} integer_array;
#endif

bool my_is_asc_sort(integer_array* arr){
  int index = 0;

  while( index + 1 < arr->size){
      if (arr->array[index] > arr->array[index+1]){
          return false;
      }
      index += 1;
  }
  return true;
}

bool my_is_dec_sort(integer_array* arr){
    int index =0;

    while(index + 1 < arr->size){
        if (arr->array[index] < arr->array[index+1]){
            return false;
        }
        index += 1;
    }
    return true;
}

bool my_is_sort(integer_array* arr){
    return (my_is_asc_sort(arr) || my_is_dec_sort(arr));
}

// int main(){
// //      int arr [] = {1,2,3,4,5};
// //      return 0;
// //   }


