#include <stdio.h>

int main(){
    int arr[] = {1 ,2 , 3, 4};
    int* ptr = arr;

    printf("first element: %d\n", *ptr);
    ptr++;
    printf("secend element: %d\n", *ptr);
    ptr += 2;
    printf("fourth element: %d\n", *ptr);

    return 0;
}