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

	printf("I updated this via my ubuntu desktop, %s\n", thisword);
	
	return 0;

}
