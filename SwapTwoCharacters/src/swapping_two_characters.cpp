/*
 * swapping_two_characters.cpp
 *
 *  Created on: Jan 31, 2016
 *      Author: vibhor
 */


#include<iostream>
using namespace std;


int main()
{
	char a='A';
	char b='B';
	char temp;
	cout<<"Values before swapping are : "<<a<<b<<endl;
		/*using third
		 * temporary
		 * variable
		 *
		 */
	 temp=a;
	 a=b;
	 b=temp;



	 cout<<"Values after swapping : "<<a<<b<<endl;

	 /*without
	  * using
	  * third
	  * variable
	  */

	 a=a+b;
	 b=a-b;
	 a=a-b;
	 cout<<"Values after second swapping : "<<a<<b;
}

