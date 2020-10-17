#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// you must rename the executable of this program so it will work properly

int main()
{
	char c_compile[] = "c++ ";

	char path[50];
	printf("Welcome to C runner\n");
	// welcoming you to the program

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
