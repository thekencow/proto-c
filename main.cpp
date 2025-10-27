//g++ -o output.exe main.cpp -O2 -Wall
//#include <iostream>
//#include <stdio.h>
#include <cstdio>

int main ()
{
//          using std::cout;
//          using std::endl;
//          cout << "hello world" << endl;

	using std::printf;
	using std::scanf;
	using std::getchar;
	
	short num;
	char nombre[50];
	char* namePtr = nombre; // Pointer to the start of nombre
	float tem;
	printf("Your name?\n");
	
/*	while(scanf("%49s", nombre) !=1) //LOOP UNTIL SUCCESSFUL READ	
		{
		printf("try again, chief: ");
		while (getchar() != '\n'); //clear buffer to discard invalid chars?
		}
*/
// Read the name (up to 49 characters, including spaces)
	if(fgets(nombre, 50, stdin) == NULL)
	{
		printf("Error reading name, chief!\n");
		return 1;
	}

// Remove the trailing newline from fgets
	for(int i = 0; nombre[i] != '\0'; i++)
	{
		
		if(nombre[i] == '\n')
		{
			nombre[i] = '\0';// Replace newline with null terminator
			break;
		}
		
	}

	//using a pointer to count characters for some raisin
	int count =0;
	while(*namePtr != '\0')
	{
		count++;
		namePtr++;
	}

	printf("That name has too many letters. Please reomve at least %i\n", count);

	printf("Gimme a number!\n");
	while(scanf("%hd", &num)!=1)
	{
		printf("try again, chief: ");
		while (getchar() != '\n'); //clear buffer to discard invalid chars?
	}
	
	printf("What is the temperature?\n");
	
	while (scanf("%f", &tem) !=1)
	{
		printf("try again, chief: ");
		while (getchar() != '\n'); //clear buffer to discard invalid chars?
	}

	printf("Hello %s, what a BEAUTIFUL name!\n", nombre);

	int lucky = (count * num);
	
	printf("Your lucky number is: %hd", lucky);

	printf(", its address is: %p\n", (void*)&lucky);
	
	printf("also it is %.3f degrees out\n", tem);
	
	printf("The temperature can be found at %p, ain't that nifty?\n", (void*)&tem);
	
	printf("Also, the lucky number is actually %x!\n", lucky); //display in hexadecimal

	return 0;
}

