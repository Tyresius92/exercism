#include "binary_search.h"

int *binary_search(int num, int arr[], size_t length)
{
        if (length == 0 || arr == NULL) {
                return NULL; 
        }

        size_t ind = length / 2; 
        int mid_num = arr[ind]; 

        if (num == mid_num) {
                return &arr[ind]; 
        } else if (num < mid_num) {
                return binary_search(num, &arr[0], ind); 
        } else {
                if (length % 2 == 1)
                        ind++; 
                return binary_search(num, &arr[ind], ind); 
        }

        return arr; 
}