#include <stdio.h>
#include "array/Swap.h"
#include "BubbleSort.h"

void BubbleSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){ // Number of iterations
        for (int j = 0; j < n - 1 - i; j ++){ // Compare 2 adjacent elements in each turn
            if (arr[j] > arr[j+1]){
                Swap (&arr[j], arr[j+1]);
            }
        }
    }
}
