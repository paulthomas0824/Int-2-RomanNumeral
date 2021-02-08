#include <iostream>
#include <string>
#include <array>
#include<vector>

using namespace std;

vector<string> IntoRoman(int num) {
	int number[] = { 1000,900,500,400,100,90,50,40,10,10,9,5,4,1 };
	string roman[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	vector<string>sb;
	int size = sizeof(number) / sizeof(number[0]);
	for (int i = 0; i < size; i++)
	{
		while (num - number[i] >= 0) {
			sb.push_back(roman[i]);
			num -= number[i];
		}
	}
	return sb;
}


int main() {

	vector<string>result;
	result = IntoRoman(50);
	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i];
	}

	return(0);
}
