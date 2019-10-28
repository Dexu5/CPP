#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main()
{
	
	int testcase;
	cin >> testcase;
	string S[testcase];
	
	for(int i=0;i<testcase;i++)
	{
		cin >> S[i]; 
	}
	
	for(int i=0;i<testcase;i++)
	{
		int CA = 0;
		int CB = 0;
		int CD = 0;	
		int len = S[i].length();
		char A[len+1];
		
		strcpy(A, S[i].c_str());
		
		for(int i=0;i<(sizeof(A)/sizeof(*A));i++)
		{
			if(A[i] == 'A')
			{
				CA++;
			}
			else if(A[i] == 'B')
			{
				CB++;
			}
			else if(A[i] == '.')
			{
				CD++;
			}
			else
			{ //Do Nothing Bitch
			}
		}
		
		ofstream myFile ("output.txt", ios_base::app);
		if(myFile.is_open())
		{
			if(CD == 0)
			{
				myFile << "Case #" << i+1 << ": N \n";
			}
			else if(CB >= CD)
			{
				myFile << "Case #" << i+1 << ": Y \n";
			}
			else
			{
				myFile << "Case #" << i+1 << ": N \n";
			}
		}
		myFile.close();
	}
}
