//g++ -o output.exe main.cpp -O2 -Wall
#include <cstdio>

int main ()
{
	using std::printf;
	using std::scanf;
	
	char thisword[50];
	
	printf("Hello, World!\n");

	scanf("%s", thisword);

	thisword[2]++;

	printf("I coded this in a browser, %s\n", thisword);
	
	return 0;

}
