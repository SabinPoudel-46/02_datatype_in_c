#include<stdio.h>
int main () 
{
	//data types in c
	/*
	There are two types of data 
	1.fundamental data type
	2.derived data type
	
	1.
	int to store integer value 0,1,-1 etc
	float to store floating values like 2.3 
	char to store a single character like 'A','a'
	double to store long floating values
	*/
	//variable is the name of memory location to store data of specific data types
	//variables are like our containers
	
	int a; //here int is a data type and a is a variable
	a=10; //assigning 10 to a
	
	float b=9.9;
	char c='B'; //use '' for char and "" for string 
	
	//%d is the format specifier for integer
	//%f is the format specifier for float 
	//%c is the format specifier for character
	//%lf is for double
	//%s for string 
	//string is the collection of multiple character
	
	printf("%d\n%.2f\n%c\n",a,b,c);
	
	
	
	return 0;
}
