#include <iostream>

using namespace std;

// Declare struct for person.
// Struct can only hold data members
// We cannot instantiate a `struct`
// `struct` cannot hold member functons.
// `struct` cannot hold constructors and 
// destructors.

struct Person{
	char name[50];
	int age;
};

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif

	Person p1;

	std::cin.get(p1.name, 50);
	std::cin >> p1.age;

	std::cout << p1.name << endl;
	std::cout << p1.age;
}