# include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int arr[] = {99,88,77,66,55,44,33,22,11,1};

    int n = 10 ; 
    int min ; 

    for(int i = 0 ; i < n  ; i ++ ){
        min = i ;

        for(int j = i + 1 ; j < n ; j++  ){
            if(arr[min] > arr[j] ){
                min = j ;
            }
        }
        if(min != i ){
            swap(&arr[min] , &arr[i]);
        }
    }
    printf("final array \n ");
    for(int i = 0 ; i < n ; i ++ ){
        printf("%d \n" ,arr[i]);
    }

    return 0 ; 

    
}