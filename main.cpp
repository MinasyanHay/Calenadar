#include "calendar.hpp"

int main()
{
	string answer="";

	do
	{
		int day = 0, month = 0, year = 0;

		cout<<"############################## Input Date ##############################"<<endl;
		cin>>day>>month>>year; //Input date

		assert(day >= 1 && day <= 31 && month >= 1 && month <= 12 && year >= 1900); //assertion for date
		if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) // assertion for February
			{
				if(month==2)
					{
						assert(day>=1 && day<=29);        
					}
			}
				else
					{
						if(month==2)
							{
								assert(day>=1 && day<=28);
							}
					}	

		calendar(day,month,year); // function calendar() in calendar.cpp

		cout<<"################### Are you going to input new date? < yes > / < no > #############"<<endl; // asking for  using again
		cin>>answer; // input answer

		if(answer == "no")
			{
				cout<<"################# Finish ################"<<endl;
				cout<<" Thank you for using this program !!! "<< endl;
			}
				else if(answer == "Yes" || answer == "YES")
					{		
						cout<<"Please input yes"<<endl;
					}
	}	
	while(answer == "yes");

	return 0;
	system("pouse");
}
