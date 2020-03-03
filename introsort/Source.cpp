#include<iostream>
#include<time.h>
#include <ctime>
#include<conio.h>
#include"Intro_sort.h"


int main()
{

	int a[10] = { 2147483647 , 1 , 31 , 32 , 43 , 54 , 0 , 0 , 95 , 2147483647 };
	Introsort(&a[0], 0, 9);
	
	return 0;
}