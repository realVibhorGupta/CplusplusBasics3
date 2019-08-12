/*
 * Swapping.cpp
 *
 *  Created on: Jan 21, 2016
 *      Author: vibhor
 */

#include<iostream>

using namespace std;

int main()
{
	/**
	 * initialisation of variables
	 */
	int first_number ,second_number,temp;
	first_number = 5;
	second_number  =10;
	/**
	 * Swapping takes place here
	 */

	temp=first_number;//
	first_number=second_number;
	second_number = temp;

	/**
	 *  to display the values
	 */

	cout<<"first number is:";
	cout<<first_number<<endl;

	cout<<"second number is: " ;
	cout<<second_number;
}


