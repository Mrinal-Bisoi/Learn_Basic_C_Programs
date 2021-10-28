// Q) Write a C program to open a text file(sample.txt) for writing and atlast close that file. 

#include<stdio.h>

int main(){
    FILE *ptr;
    
    //*******general format*******
    //pointer = fopen("file_name", "mode");
    // some basic modes are :-
    //   1) r ----> for read the text file present in the same directory. If the file is not presemt fopen return null.
    //   2) rb ----> for read the binary file present in the same directory. If the file is not presemt fopen return null.
    //   3) w ---->for over-write on the text file present in the same directory. If the file is not presemt fopen creates a text file on the same name.
    //   4) wb ---->for over-write on the binary file present in the same directory. If the file is not present fopen creates a file on the same name.
    //   5) a ---->for append in the last of the file present in the same directory. If the file is not present fopen creates a file on the same name.

    //ptr = fopen("sample.txt", "r");     //--> for reading the file.
    ptr = fopen("sample.txt", "w");     //--> for writing to the file.
    fclose(ptr);        //--> This command is used to close the sample.txt file which is opened using fopen().
    return 0;
}