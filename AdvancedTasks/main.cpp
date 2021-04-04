#include <iostream>
#include "AdvancedTasks1.h"



using namespace std;
using namespace Tasks;




int main(int argc, char** argv) {
	
	
	
	
	int userName[5] = {1, 3, 4, 5,2};
	
	int d = 0;
	
	
	for(int u = 0; u < 5;u++){
		
		d = d+userName[u];
		
	}
	int jj = d / 5;
	cout << jj;
	
	
	

	
	return 0;
}
