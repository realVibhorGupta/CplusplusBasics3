/*
 * string_functions.cpp
 *
 *  Created on: Jan 30, 2016
 *      Author: vibhor
 */

#include<iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main()
{
	 char   name[10]="vibhor";
	 	 int control=12;
	 char name1[10]="gupta";


	 char name3[10];
	 // function to copy the string
	cout<<strcpy(name3,name1);

	cout<<name<<endl<<name3<<endl;
	//returns the  length of the string
	cout<<strlen(name3)<<endl;
	//concatenate the string
	cout<<strcat(name,name3)<<endl;
	//Checks if the given argument is alphanumeric
	int e=(int)name;
	cout<<isalnum(e)<<endl;
		//Checks if the given argument is an alphabet.

	cout<<isalpha(e)<<endl;
	//Check the avalability of the digits

	cout<<isdigit(e)<<endl;

//	Checks if the given argument is a punctuation
	int d=(int)name;
	cout<<ispunct(d)<<endl;
//checks if there is any control character
	cout<<iscntrl(control)<<endl;


	//Checks if the given argument is a space character
	cout<<isspace(d)<<endl;
	//checks if the given argument is having uppercase
	int b=(int)name;
	cout<<isupper(b)<<endl;
	//Checks if the given argument is a graphical
	int c=(int)name;
	cout<<isgraph(c)<<endl;
	//Checks if the given argument is a lowercase alphabets

	int ab=(int)name;
	cout<<islower(ab)<<endl;

	//Checks if the given argument is a printable character
	cout<<isprint(ab)<<endl;
	//Checks if the given argument is a hexadecimal digit
	cout<<isxdigit(control);

	int i=0;
	  char str[]="Test String.\n";
	  char k;
	  while (str[i])
	  {
	    k=str[i];
	    putchar (toupper(k));
	    i++;
}
}




