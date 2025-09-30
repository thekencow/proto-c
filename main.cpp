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
	int num = 180;
	char nombre[50];
	printf("Your name?\n");
	scanf("%49s", nombre);
	
	//printf("Hello MINIGW!\n");
	printf("Hello %s\n", nombre);
	
	printf("Your lucky number is: %i", num);

	printf(", its address is: %p\n", (void*)&num);

	printf("Aint that nifty!\n");
	return 0;

}