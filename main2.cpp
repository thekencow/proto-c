//g++ -o output.exe main.cpp -O2 -Wall
#include <cstdio>
#define oot printf

int main ()
{
	using std::printf;
	using std::scanf;
	
	char thisword[50];
	int x = 10;
	int* q = &x;
	oot("Hello, World!\n");

	scanf("%s", thisword);

	thisword[2]++;
	oot("The infallible number is %d, %s\n", x, thisword);

	*q = 15;
	thisword[3]--;
	oot("That's right, %s, the infallible number is %d!\n",thisword,x);
	thisword[0]++;
	printf("I updated this via my work laptop, %s\n", thisword);
	oot("Address of x:%p\n",(void*)&x);
	oot("Whatever q is, as a p: %p\n",q);
	
	return 0;

}
