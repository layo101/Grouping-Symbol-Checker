#include <iostream>
#include "char_stack.h"
#include <string>
using namespace std;



int main()
{	
	char_stack S1;
       	char ch;
        char topValue;
	char opened;
	char closed;
        char popped;
        char line[250];
	int index = 0;
	int linenum = 0	;

	while(cin.getline(line, 250))
	{	
		linenum++;	
		
		for(int i = 0; i < cin.gcount(); i++)
		{
			ch = line[i];
			if(ch == '(' || ch == '[' || ch == '{')
			{
				opened = ch;
				S1.push(ch);
			}
			else if(ch == ')' || ch == ']' || ch == '}')
			{	
				topValue = S1.top();
				closed = ch;	

				if(S1.empty())
				{
					cout << "Error on line: " << "Too many " << closed << endl;
					cout << line;
					return 1;
					
				}		
				if(topValue == '(' && closed != ')')
				{
					cout << "Error on line: " << linenum << " read " << closed << " expected ) "<< endl;
					cout << line; 
					return 2;
				}
				else if(topValue == '[' && closed != ']')
				{
					cout << "Error on line: " << linenum << " read " << closed << " expected ] " << endl;
					cout << line;
					return 3;
				}	
				else if(topValue == '{' && closed != '}')
				{
					cout << "Error on line: " << linenum << " read " << closed << " expected } " << endl;
					cout << line;
					return 4;
				}
				else{
				
					popped = S1.pop();
				}
			}	
		}	
		
		
	}
	if(!S1.empty())
	{
		topValue = S1.pop();
		cout << "Error on line: " << linenum << " Too many " << topValue; 
	
	}
	else
	{
		cout << "No errors found";
	}

	return 0;
} 
