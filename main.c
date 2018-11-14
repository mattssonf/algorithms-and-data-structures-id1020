/*README: the following code implements two versions of a program
  that reverses a line text from stdin. The iterative function is
  implemented with a fixed size array and the second one is a
  recursive function (stack)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    recursiveReverse();
}
void iterativeReverse(){

    char c[30];
    int i = 0;
    while (c[i-1] != '\n'){
        c[i] = getchar();
        i++;
    }
    printf("These are your charachters: ");
    for(i = i-2;i >= 0; i--)
    putchar(c[i]);
    return;
}
void recursiveReverse(){
    char c = getchar();
    if(c != '\n'){
        recursiveReverse();
    putchar(c);
    }

}


