#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// you must rename the executable of this program so it will work properly

int main(int argc,char* argv[])
{
	char c_compile[] = "c++ ";

    if(argc==1)
    {
        printf("please enter the file name as a command line argument\n");
    }
    if(argc>=2)
    {
        system(strcat(c_compile, argv[1]));
        printf("\\start\n");
        system(".\\a");
        printf("\n\\end");
        system("del a.exe");
    }
}
