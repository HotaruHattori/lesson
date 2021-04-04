#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string capital;
		

	cin >>capital;
	if (capital == "London" )

	{
		cout << "Your country is British" << endl;
	}else if (capital == "Moscow")
	
	{
		cout << " Your country is Russia" << endl;
	}else if (capital == "NewYork")

	{
		cout << "Your country is America" << endl;
	}else if (capital == "Tokio")

	{
		cout << "Your country is Japan" << endl;
	}
	
	
	return 0;
}
