#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

	system(strcat(c_compile, path));
	// compiling it

	system("a");
	// running it

	system("del a.exe");
	// deleting the binary
}
