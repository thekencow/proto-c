//$g++ -o output.exe main3.c -O2 -Wall

/*
$gcc -o demo main3.c
results in this error:
main3.c:5:10: fatal error: cstdio: No such file or directory
*/

//#include <iostream>
//#include <stdio.h>
#include <cstdio> // C++ only? gcc doesn't like it 

#include <string.h> // C (works in C++), global namespace
//#include <cstring> // C++, std namespace


// 1. A *structure* – groups related data
struct Person	{
		char name[50]; //   string (C-style, fixed size)
		char trait[15];
		int	favoriteNumber;
};


void print(const Person* p) // 2. Function that receives a *pointer*
{
	/*std::*/printf("Hi I am %s and I am %s! My favorite number is %i!\n", p->name, p->trait, p->favoriteNumber);
};



int main ()
{
	using std::printf;
//	using std::strcpy; // copy a string (need <cstring>)
	
	printf("Hello World!\n");

	Person alice;	//create an intsance
	
	strcpy(alice.name, "Alice");
	strcpy(alice.trait, "fake");
	alice.favoriteNumber = 4;
	
	print(&alice); // pass its *address* (pointer) "send me the address"


	
	return 0;
}

