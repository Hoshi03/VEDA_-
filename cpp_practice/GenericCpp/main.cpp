#include <iostream>
#include <bits/stdc++.h>
#include <random>
#include <string>
#include "MyStack.h"
using namespace std;


int main() {
	vector<string> arr(3,"");
	for (int i = 0; i < arr.size(); i++)
	{
		string tmp = "";
		getline(cin, tmp);
		arr[i] = tmp;
	}

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr.at(i) << " ";
	}

	return 0;
}