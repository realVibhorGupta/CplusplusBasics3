/*
 * swapping_two_integers.cpp
 *
 *  Created on: Jan 22, 2016
 *      Author: vibhor
 */


#include<iostream>

using namespace std;

int main()
{

	int first_number , second_number;

	cout<<"Enter first number";
	cin>>first_number;
	cout<<"Enter second number";
	cin>>second_number;



	cout<<"before swapping first number is : "<<first_number<<" and second number is : " << second_number<<endl;
	/**swapping is done here
	 *
	 */
	first_number = first_number + second_number;
	second_number = first_number - second_number;
	first_number = first_number - second_number;



	/**first_number = first_number * second_number;
	second_number = first_number / second_number;
	first_number = first_number / second_number;
	 *
	 *
	 */

	cout<<"first number is :  "<<first_number << "second number is : " << second_number;


}

