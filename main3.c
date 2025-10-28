//g++ -o output.exe main3.c -O2 -Wall
//#include <iostream>
//#include <stdio.h>
#include <cstdio>
#include <string.h>


struct Person	{
		char name[50];
		char trait[15];
		short lucky;
		float temp;
	
};

void fancyPrint(const Person* p)	{
		printf("Hello %s, lucky %hd @ %p, %1f\236F\n",
		p->name,
		p->lucky,
		(void*)&p->lucky,
		p->temp
		);
		
}

void print(const Person* p)
{
	printf("Hi I am %s and I am %s!\n", p->name, p->trait);
};



int main ()
{
	using std::printf;
	
	printf("Hello World!\n");



	
	return 0;
}

