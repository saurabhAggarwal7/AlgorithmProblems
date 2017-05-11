#include <iostream>
#include <string>
#include <map>
#include "list" 
#include "sstream" 
#include "iterator" 
using namespace std;

int* create_denseArray(string start) {
	int benchmark_ascii = int('a');
	int dense_array[30];
	for (int i = 0; i < start.size(); i++){
		int index = int(start[i]) - benchmark_ascii;
		if(dense_array[index] > 0)
		{
			dense_array[index] += 1;
		}
		else
		dense_array[index] = 1;
	}
	return dense_array;
}

string group_anagrams(list<string> inputLst) {

	  //create dense arrays from each index of this list
	  list<string>::iterator i = inputLst.begin();
      int* dense_array1 = create_denseArray(*i);
	
	return "";
}



int main() {

	//InputList
	list<string> inputLst;
	inputLst.push_back ("cat");
	inputLst.push_back ("pin");
	inputLst.push_back ("act");
	inputLst.push_back ("nip");
	inputLst.push_back ("tca");

	string result = group_anagrams(inputLst);
	cout<<"Result"<<result;
	return 0;
}