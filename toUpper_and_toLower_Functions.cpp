#include <string>
#include <cstring>

using namespace std;

string toUpper(string);
string toLower(string);

string toUpper(string stringToUpper) {

	string tempString;
	for (int i{}; i < stringToUpper.length(); i++){
		tempString += toupper(stringToUpper[i]);
	}
	return tempString;
}
string toLower(string stringToLower) {

	string tempString;
	for (int i{}; i < stringToLower.length(); i++){
		tempString += tolower(stringToLower[i]);
	}
	return tempString;
}