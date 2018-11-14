#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int length = 10;
    int test[10] = {5, -1, 9, 8, -3, -4, -1, -3, -3, -3};

    for(i = 0; i < length; i++)
      printf("%d ", test[i]);
    printf("\n");

    groupNumbers(test, length);

    for(i = 0; i < length; i++)
      printf("%d ", test[i]);

    return 0;
}
//the function checks the elements from the right
//until it finds a negative number, then starts
//searching from the left for a positive number
//to change it with, result: negative numbers left and positive right
//Best case(no neg numbers): O(N)
//Worst case: Omega(N)
void groupNumbers(int *array, int lenght){

    int i, tmp;
    int j = 0;

    for(i = lenght-1; i > j; i--){
        if(array[i] < 0){
            for(; j < i; j++){
                if(array[j] > 0){
                    tmp = array[i];
                    array[i] = array[j];
                    array[j] = tmp;
                    break;
                }
            }
        }
    }
}
