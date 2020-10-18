#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// you must rename the executable of this program so it will work properly

int main(int argc,char* argv[])
{
	char c_compile[] = "c++ ";

    if(argc==1)
    {
        char path[50];

        printf("Enter the filename: ");
        gets(path);
        // getting the file to run

        printf("\n\n\n");

        system(strcat(c_compile, strcat(path, " -o a")));
        // compiling it

        printf("\\Start\n");

        system(".\\a");
        // running it

        printf("\n\\End");

        system("del a.exe");
        // deleting the binary
    }
    if(argc>=2)
    {
        system(strcat(c_compile, strcat(argv[1], " -o a")));
        // compiling it

        printf("\\Start\n");

        system(".\\a");
        // running it

        printf("\n\\End");

        system("del a.exe");
        // deleting the binary
    }
}
