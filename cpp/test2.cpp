#include <iostream>
using namespace std;

class B{
public:
	virtual void f(){
		cout << "Class B" << endl;
	}
};

class D : public B{
public:
	void f(){
		cout << "Class A" << endl;
	}
};


int main(){
	B* bPrt = new D;
	bPrt->f();
}
