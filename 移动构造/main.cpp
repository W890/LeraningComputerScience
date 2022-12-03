#include <iostream>
using namespace std;
class IntNum {
public:
	IntNum(int x = 0) :xptr(new int(x)) {
		cout << "Calling constructor..." << endl;
	}
	IntNum(const IntNum& n):xptr(new int(*n.xptr)) {
		cout << "Calling copy constructor..." << endl;
	}
	IntNum(IntNum&& n) :xptr(n.xptr) {
		n.xptr = nullptr;
		cout << "Calling move constructor..." << endl;
	}
	int getInt() {
		return *xptr;
	}
	~IntNum() {
		delete xptr;
		cout << "Destructing..." << endl;
	}
private:
	int* xptr;
};

IntNum getNum() {
	IntNum a;
	return a;
}

int main() {
	cout << getNum().getInt() << endl;
	return 0;
}