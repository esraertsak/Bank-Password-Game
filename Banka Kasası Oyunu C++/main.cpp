#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

int main()
{
	int accuracy_counter = 0;
	
	srand(time(NULL));
	
	int First, Second, Third, Fourth, Fifth, EnterFirst, EnterSecond , EnterThird, EnterFourth ,EnterFifth;
	
	First = rand()  % 3 + 1 ;
	Second = rand() % 3 + 1 ;
	Third = rand()  % 3 + 1 ;
	Fourth = rand() % 3 + 1 ;
	Fifth = rand()  % 3 + 1 ;
	
	
    cout<<"The password required to open the bank vault = ***** \n\n ATTENTION!~Password contains numbers between 1-3(1 and 3 included)~\n\n";
    
    do
	{
	
		cout<<" | | | | | |  <-------- Enter First Password : \n ";
		cin>>EnterFirst;
		while(EnterFirst < 1 || EnterFirst > 3)
		{
		    cout << ("Invalid Value! Try Again.");
		    cin >> EnterFirst;
		}
		
    	cout<<" |"<<EnterFirst<<" | | | | |  <-------- Enter Second Password : \n ";
		cin>>EnterSecond;
		while(EnterSecond < 1 || EnterSecond > 3)
		{
		    cout << ("Invalid Value! Try Again.");
		    cin >> EnterSecond;
		}
		
		cout<<" |"<<EnterFirst<<" |"<<EnterSecond<<" | | | |  <-------- Enter Third Password : \n ";
		cin>>EnterThird;
		while(EnterThird < 1 || EnterThird > 3)
		{
		    cout << ("Invalid Value! Try Again.");
		    cin >> EnterThird;
		}
		
		cout<<" | "<<EnterFirst<<"|"<<EnterSecond<<" |"<<EnterThird<<" | | |  <-------- Enter Fourth Password : \n ";
		cin>>EnterFourth;
		
		while(EnterFourth < 1 || EnterFourth > 3)
		{
		    cout << ("Invalid Value! Try Again.");
		    cin >> EnterFourth;
		}
		
		cout<<" |"<<EnterFirst<<" |"<<EnterSecond<<" |"<<EnterThird<<" |"<<EnterFourth<<" | |  <-------- Enter Fifth Password : \n ";
		cin>>EnterFifth;
	
		while(EnterFifth < 1 || EnterFifth > 3)
		{
		    cout << ("Invalid Value! Try Again.");
		    cin >> EnterFifth;
		}
		

	    cout<<"|"<<EnterFirst<<" |"<<EnterSecond<<" |"<<EnterThird<<" |"<<EnterFourth<<" |"<<EnterFifth<<" |\n"; 
    	
    	if (First== EnterFirst)
    	accuracy_counter++;
    	if (Second== EnterSecond)
    	accuracy_counter++;
    	if (Third== EnterThird)
    	accuracy_counter++;
    	if (Fourth== EnterFourth)
    	accuracy_counter++;
    	if (Fifth== EnterFifth)
    	accuracy_counter++;
    	
    	
    	cout<<"total correct character=" << accuracy_counter <<endl;
    	
    }	while( accuracy_counter != 5 );
		{
		    cout << "\nCONGRATULATIONS! True Password:"  <<"|"<<EnterFirst<<" |"<<EnterSecond<<" |"<<EnterThird<<" |"<<EnterFourth<<" |"<<EnterFifth<<" | \n";
		}
    	    	
	
    
	return 0;
}
