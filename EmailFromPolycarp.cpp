#include<iostream>
#define SOA(A) sizeof(A)/sizeof(*A)

using namespace std;


int main()
{
	char a[] = {'h','e','l','l','o'};
	char b[] = {'h','e','l','l','l','o'};
	
	for(int i=0,j=0;i<SOA(a),j<SOA(b);)
	{
		if(a[i] == b[j])
		{
			i++;
			j++;
			cout << "i : " << i << " j : " << j << endl;
		}
		else if(a[i-1] = b[j])
		{
			j++;
			cout << "i : " << i << " j : " << j << endl;
		}
	}
	return 0;
}
