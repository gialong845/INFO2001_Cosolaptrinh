//BTTH 05 Array Bai 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int *arr, int n){
  for(int i=0; i<n-1; i++){
    for(int j=0; j<n-i-1; j++){
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
  }
}

void selection_sort(int *arr, int n){
  for(int i=0; i<n-1; i++){
    int min_index=i;
    for(int j=i+1; j<n; j++){
      if(arr[min_index]>arr[j]){
        min_index = j;
      }
    }
    int temp = arr[i];
    arr[i] = arr[min_index];
    arr[min_index] = temp;
  }
}

int main(){
  int n=10000;
  int *arr = (int *)malloc(n * sizeof(int));
  for(int i=0; i<n; i++){
    arr[i] = rand()%10000;
  }

  clock_t start, end;

  start = clock();
  bubble_sort(arr, n);
  end = clock();
  double bubble_time = (double)(end - start) / CLOCKS_PER_SEC;

  start = clock();
  selection_sort(arr, n);
  end = clock();
  double selection_time = (double)(end - start) / CLOCKS_PER_SEC;

  printf("Bubble sort time: %.6f seconds\n", bubble_time);
  printf("Selection sort time: %.6f seconds\n", selection_time);

  free(arr);

  return 0;
}
