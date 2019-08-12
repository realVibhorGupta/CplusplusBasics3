/*
 * program.cpp
 *
 *  Created on: Jan 28, 2016
 *      Author: vibhor
 */

#include <iostream>

using namespace std;

int main()
{
	int number,count;
	int sum=0;

	cout<<"positive integer is:";
	cin>>number;

	for(count=1;count<=number;++count)  /* for loop terminates if count>n */
	    {
	        sum=sum+count;                /* sum=sum+count */
	    }
	cout<<sum;
	return 0;
}



