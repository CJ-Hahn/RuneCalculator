#include <iostream>
#include <math.h>
using namespace std;

/* Calculates number of runes to get from the input 
level to (level + 1) */
int calculateRunes(int level){
	int runes;
	double r;
	r = (.02*pow(level, 3)) + (3.06*pow(level,2)) + (105.6*level)- 895;
	runes = int(r);
	return runes;
}

/* Adds up runes needed to get from current to desired   */
int calculateTotalRunes(int current, int desired){
	int total_runes = 0;
	
	for(int i = current+1; i <= desired; i++){
		total_runes += calculateRunes(i);
	}
	
	return total_runes;
} 

int main(){
	
	int current_level, desired_level;
	
	cout << "RUNE CALCULATOR: Calculate how many runes you need to level up" << endl;
	cout << "Note: is only accurate for levels starting at 12 or higher." << endl;
	
	while(true){
	
		cout << "\nEnter current level: ";
		cin >> current_level;
		cout << "Enter desired level: ";
		cin >> desired_level;
	
		cout << "You need " << calculateTotalRunes(current_level, desired_level) << " runes to get from level "; 
		cout << current_level << " to " << desired_level << "." << endl;	
	}

	return 0;
}
