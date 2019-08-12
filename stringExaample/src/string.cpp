/*
 * string.cpp
 *
 *  Created on: Feb 1, 2016
 *      Author: vibhor
 */
#include<string>

#include<iostream>
using namespace std;

int main(){

	string a="vibhor  ";
	string b="gupta   ";
	char myname[]={'v','i','b','h','o','r'};
	char myname1[]={'v','i','b','h','o','r','\0'};
	char c[]="bond";
	char myname2[10]={'v','i','b','h','o','r'};
	char myname3[10]={'v','i','b','h','o','r','\0'};
	cout<<"MY name is :"<<b  <<  a+b<<c<<endl;
	cout<<"myname is:"<<myname<<endl<<"myname1:"<<myname1<<endl;
	//cout<<"myname2 is:"<<myname2<<endl<<"myname3:"<<myname3<<endl;
}

