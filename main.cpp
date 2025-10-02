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
	float tem;
	printf("Your name?\n");
	
	
	while(scanf("%49s", nombre) !=1) //LOOP UNTIL SUCCESSFUL READ	
		{
		printf("try again, chief: ");
		while (getchar() != '\n'); //clear buffer to discard invalid chars?
		}

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

	printf("Your lucky number is: %hd", num);

	printf(", its address is: %p\n", (void*)&num);
	
	printf("also it is %.3f degrees out\n", tem);
	
	printf("The temperature can be found at %p, ain't that nifty?\n", (void*)&tem);
	
	printf("Also, the lucky number is actually %x!\n", num); //display in hexadecimal


	return 0;


}
