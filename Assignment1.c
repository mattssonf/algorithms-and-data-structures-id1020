#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    //create two file pointers to keep track of where we are in the file
    FILE *fPointer, *fCopyPointer;
    //reading from one file and writing to a modified copy file
    fPointer = fopen("LabThreeText.txt", "r");
    fCopyPointer = fopen("Copy.txt", "w");
    //char pointer to read the file line by line
    char singleLine[200];
    char* psingleLine;

    while(!feof(fPointer)){
        //fetch the next line each iteration of the loop and point at the beginning of it
        fgets(singleLine, 200, fPointer);
        psingleLine = singleLine;

        //iterate char by char and check for non alphabetic/non whitespace chars to replace with space
        while(*psingleLine != '\0'){
        if(!isalpha(*psingleLine) && !isspace(*psingleLine) && *psingleLine != '\n'){
            *psingleLine = ' ';
        }
        psingleLine++;
        }
        //write the modified line to the new copy file
        fprintf(fCopyPointer, singleLine);
    }
    //close files
    fclose(fPointer);
    fclose(fCopyPointer);
}
