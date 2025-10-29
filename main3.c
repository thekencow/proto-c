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


void print(const struct Person* p) // 2. Function that receives a *pointer*
{
	std::printf("Hi I am %s and I am %s! My favorite number is %i!\n", p->name, p->trait, p->favoriteNumber);
};



int main ()
{
	using std::printf;
//	using std::strcpy; // copy a string (need <cstring>)
	using std::fopen;
	using std::fclose;


	printf("Hello World!\n");

	Person alice = {0};	//create an intsance
	
	strcpy(alice.name, "Alice");
	strcpy(alice.trait, "fake");
	alice.favoriteNumber = 4;
	
	print(&alice); // pass its *address* (pointer) "send me the address"

	int w = 217;
	
	char gg = char(w);
	char loadName[50];
	
	
	printf("Also,\n%c\n",gg);
	
	gg++;
	
	printf("Derr %c\n", gg);

	for(int i = 176; i <= 195;i++)
	{
		printf("%c",i);
		
	};
	printf("!\n");


	Person bob = {0};	//create an intsance
	
	FILE* fp = fopen("namelist","r");
		if (fp == NULL)
	{
		printf("eff pee didn't open. bummer\n");
		return 1;
	}
	
	if(fgets(loadName, 75, fp) == NULL)
	{
		printf("error reading name\n");
		fclose(fp);
		return 1;
	}
	printf("Loaded %s into memory, processing...\n", loadName);
	//loadName[strcspn(loadName, "WARK")] = '\0'; //WARK was a problem for some raisin
	loadName[strcspn(loadName, "X")] = '\0';
	//explicitly, take the first instance of newline (or WARK, I guess) in the loadName array, and replace it with the null terminator character
	//use it to mark segments of a file i guess
	printf("Processed %s\n",loadName);
	fclose(fp);
	
	strcpy(bob.name, loadName);
	strcpy(bob.trait, "spiffy");
	bob.favoriteNumber = gg;
	
	bob.name[strcspn(bob.name,",")] = '\0';
	
	bob.name[2]+=10;
	
	print(&bob);
	
	
	FILE* rk = fopen("archive.txt", "w");
	if (rk == NULL)
	{
		printf("error opening archive.txt. sorry.\n");
		fclose(rk);
		return 1;
		};
		
		fprintf(rk,"Their names are: %s, %s\n", alice.name, bob.name);

		
	fclose(rk);
	
	return 0;
}

