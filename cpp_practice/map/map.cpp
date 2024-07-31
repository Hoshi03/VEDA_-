#include <iostream>
#include <fstream>
#include <random>
using namespace std;


int main() {
	const char* srcFile = "cap.jpg";
	const char* destFile = "capcopy.jpg";

	ifstream fsrc(srcFile, ios::in | ios::binary);

	ofstream fdest(srcFile, ios::out | ios::binary);
		
	char buf[1024];
	while (!fsrc.eof())
	{
		fsrc.read(buf, 1024); 
		int n = fsrc.gcount();
		fdest.write(buf, n);
	}

	fsrc.close();
	fdest.close();
}