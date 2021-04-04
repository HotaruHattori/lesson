#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	string name;
	
	string Town;
	string yearsOld;
	
	
	
	cout << "What your name?" << endl;
	cin >> name;
	
	cout << "Your years old?" << endl;
	cin >> yearsOld;
	
	cout << "Where your lived?" << endl;
	cin >> Town;
	
	cout << "Hello " << name << ",your years old is " << yearsOld << ",you live in " << Town << endl;
	cout << "Bye!";

	
	
	return 0;
}
