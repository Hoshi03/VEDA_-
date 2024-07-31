#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#include <typeinfo>

using namespace std;

class P {
public:
	P() {}
	virtual ~P(){}
	virtual void show() { cout << "parent\n"; }
};

class C : public P {
public:
	C(){}
	~C(){}
	void show() { cout << "child\n"; }
};

int main() {


	P* ptr = new C();
	C* cptr = dynamic_cast<C*>(ptr);

	if (cptr == nullptr)
	{
		cout << "cast fail";
	}
	else cout << "cast success";

	cptr->show();
}