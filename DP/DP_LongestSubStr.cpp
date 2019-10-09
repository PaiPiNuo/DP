#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
//#include <math>
#include "DP_LongestSubStr.h"

using namespace std;
void LongestIncreasingStr() {
	istream_iterator<int> input(cin),EndInput;
	vector<int> vect(input, EndInput);
	int* record = new int[vect.size()];
	int i = 0;
	record[i] = 1;
	for (;i< vect.size();i++) {
	
		record[i] = 1;
		for (int j = 0; j < i;j++) {
			if (vect[i]>vect[j]) {
				record[i] = max(record[i], record[j]+1);
			}
		}
	}
	int maxValue = 1;
	for (int k = 0; k < vect.size();k++) {
		maxValue = max(maxValue, record[k]);
	}
	cout << "maxValue: "<<maxValue << endl;

	//copy(vect.begin(),vect.end(),ostream_iterator<int>(cout," "));
}

void LongestCommonStr() {
	istream_iterator<char> input(cin), EndInput;
	vector<char> vect1(input, EndInput);
	vector<char> vect2(input, EndInput);

}