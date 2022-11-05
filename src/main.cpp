#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include <cstring>

using namespace std;

int main()
{
	int year, month, day, mm, dd, yy;
	string msg = "You were born on ";
	re_type:

	cout<<"Find the day of brith date.......\n\n";
	cout<<"Birthday (dd/mm/yy) : ";
	cin>>dd>>mm>>yy;
	
	system("cls");
	if(dd > 31 || mm > 12 || yy > 2022)
	{
		cout<<"Invalid Input; Please Re-type again\n\n";
		goto re_type;
	}

	// month codes
	switch(mm)
	{
		case 1: 
		case 10: month = 0; break;
		case 2: 
		case 3: 
		case 11: month = 3; break;
		case 4: 
		case 7: month = 6; break;
		case 5: month = 1; break;
		case 9: 
		case 12: month = 5; break;
		case 6: month = 4; break;
		case 8: month = 2; break;
	}

	// year codes
	if(yy>1600 || yy<1699){
		year = 6;
	} else if (yy>1700 || yy<1799){
		year = 4;
	} else if (yy>1800 || yy<1899){
		year = 2;
	} else if (yy>1900 || yy<1999){
		year = 0;
	} else if (yy>2000 || yy<2999){
		year = 6;
	}

	int l_digit = yy % 100 ; // get last two digits	
	cout<<"Last two digit is : "<<l_digit<<endl;
	day = dd + month + l_digit + (l_digit/4) + year ;
	cout<<"total day : "<<day<<endl;
	day = day % 7;

	// day codes
	switch(day)
	{
		case 0: cout<<msg<<"Sunday!\n";break;
		case 1: cout<<msg<<"Monday!\n";break;
		case 2: cout<<msg<<"Tuesday!\n";break;
		case 3: cout<<msg<<"Wednesday!\n";break;
		case 4: cout<<msg<<"Thursday!\n";break;
		case 5: cout<<msg<<"Friday!\n";break;
		case 6: cout<<msg<<"Saturaday!\n";break;
	}

	return 0;
}