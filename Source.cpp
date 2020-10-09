#include <iostream>

using namespace std;


long double Calculate(int Type, float R) {
	if (Type == 1){
		long double Ans = 3.14159 * R * R;
		return Ans;
	}
	if (Type == 2){
		long double Ans = 6.28318 * R;
		return Ans;
	}
}

void main(){
	while (true){
		long double Radius;
		int CalculateType;
		cout << "Please enter the radiant:";
		cin >> Radius;
		cout << "1 for area, 2 for circumference:";
		cin >> CalculateType;
		if (CalculateType == 1||2){
			cout << Calculate(CalculateType, Radius) << endl;
		}
	}
}