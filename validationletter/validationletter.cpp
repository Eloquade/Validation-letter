// validationletter.cpp : main project file.

#include "stdafx.h"
#include <iostream>
    using namespace std;
    int main()
	{

   char a;
cout<<"Enter a Alphabet: ";
cin >>a;
if(isalpha(a))
{
cout << "Good entered a alphabet\n";
}
else
{
cout << "Not an alphabet\n";
}
	system("pause");
}



