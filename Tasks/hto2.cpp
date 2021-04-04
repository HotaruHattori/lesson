#include <iostream>
using namespace std;

bool palendrom(string phrase) {
	string noSpace = "";
	for (int i = 0; i < phrase.length(); i++){
		if (phrase[i] != 32){
			noSpace = noSpace + phrase[i];
		}
			
	}	
	
	string reversed ="";
	
	for (int i = noSpace.length()- 1; i >= 0;i--){
		reversed = reversed + noSpace[i];
	} 
	if (noSpace == reversed){
		
		cout << "polendrom";
		return true;
		
	} else {
		
		cout << "no polendrom";
		return false;
		
	}
	
	
	
	cout << reversed;
	return false;
}



int findMax(int source[]){
	
	int max = -1000000;
	
	for (int i = 0; i < 5 ;i++){
		if (max < source[i])
		{
			max = source[i];
		}
	}

	
	return max;
	
}
