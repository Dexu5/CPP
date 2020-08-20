#include<iostream>
#include<string>
#include<math.h>

using namespace std;

unsigned int num = 0;
long int value = 19;
int testcase;


unsigned int len(unsigned int n)
{
    return n ? len(n/10)+1 : 0;
}

int getSum(int n) 
{  
	int sum = 0; 
	while (n != 0) 
	{ 
		 sum = sum + n % 10; 
		 n = n/10; 
	}
	return sum;  
}
int main()
{
	cin >> testcase;
	while(testcase--)
	{
		cin >> num;
		//cout << "Length : " << len;
		int l = len(num);
		//cout << l << endl;
		int power = pow(10,l); //Calculate the power based on the length of the input provided.
		//cout << "Power : " << power << endl;
		for(int i=2;i<=num;i++)
		{
			if(i%10 == 0)
			{
				if((power % i) == 0)
				{
					value += (20-l);
					//cout << "i : " << i << " Special Value : " << value << endl;
					
				} 
			}
			else
			{
				value += 9;
				//cout << "i : " << i << " Value : " << value << endl;
			}
			cout << "Iteration : " << i << "  Value : " << value << " Sum of Value : " << getSum(value) << endl;;
		}
		//cout << value << endl;
		
		num = 0;
		value = 19; 
		power = 0;
	}
	
	return 0;
}


