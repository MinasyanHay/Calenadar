#include "calendar.hpp"

void calendar(int day, int month, int year)
{
	int days = 0;

	for(int i=1900; i<year; i++)
	{
		if(i % 4 == 0 || (i % 100 == 0 && i % 400 == 0)) // < if > for February
			{
				days += 366;
			}		
				else
					{
						days += 365;
					}
		
	}

	for(int i=1; i<month; i++)
	{
		switch( i )
			{
				case 1:
					days += 31;
					break;
				case 2:
					if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
						{
							days += 29;
						}		
						else
							{
								days += 28;
							}
					break;
				case 3:
					days += 31;
					break;
				case 4:
					days += 30;
					break;
				case 5:
					days += 31;
					break;
				case 6: 
					days += 30;
					break;
				case 7:
					days += 31;
					break;
				case 8:
					days += 31;
					break;
				case 9 :
					days += 30;
					break;
				case 10: 
					days += 31;
					break;
				case 11:
					days += 30;
					break;
				case 12:
					days += 31;
					break;

			}
	}	

	for(int i=1; i<day; i++)
	{
		days++;
	}

	int n = days % 7;

	switch( n ) 
	{		
		case 1 : 
			cout<<"Monday"<<endl;
			break;
		case 2 :

			cout<<"Tuesday"<<endl;
			break;
		case 3 :
			cout<<"Wednesday"<<endl;
			break;
		case 4 : 
			cout<<"Thursday"<<endl;
			break;
		case 5 :
			cout<<"Friday"<<endl;
			break;
		case 6 : 
			cout<<"Saturday"<<endl;
			break;
		case 0 :
			cout<<"Sunday"<<endl;
			break;

	}
}
