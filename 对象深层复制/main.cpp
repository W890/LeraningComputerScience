#include <iostream>
#include <cassert>
#include <vector>
using namespace std;
class Point {
public:
	Point() :x(0), y(0) {
		cout << "Default Constructor called." << endl;
	}
	Point(int x, int y) :x(x), y(y) {
		cout << "Constructor called." << endl;
	}
	~Point() { cout << "Destructor called." << endl; }
	int getX() const { return x; }
	int getY() const { return y; }
	void move(int newX, int newY) {
		x = newX;
		y = newY;
	}
private:
	int x, y;
};
class ArrayOfPoints { //动态数组类
public:
	ArrayOfPoints(const ArrayOfPoints& pointsArray);
	ArrayOfPoints(int size) :size(size) {
		points = new Point[size];
	}
	~ArrayOfPoints() {
		cout << "Deleting..." << endl;
		delete[] points;
	}
	Point& element(int index) {
		assert(index >= 0 && index < size);
		return points[size];
	}
private:
	Point* points; //指向动态数组首地址
	int size; //数组大小
};

ArrayOfPoints::ArrayOfPoints(const ArrayOfPoints& v) {
	size = v.size;
	points = new Point[size];
	for (int i = 0; i < size; i++)
		points[i] = v.points[i];
}

double average(const vector<double>& arr) {
	double sum = 0;
	for (unsigned i = 0; i < arr.size(); i++)
		sum += arr[i];
	return sum / arr.size();
}

int main() {
	unsigned n;
	cout << "n=";
	cin >> n;

	vector<double>arr(n);
	cout << "Please input" << n << "real numbers:" << endl;
	for (unsigned i = 0; i < n; i++)
		cin >> arr[i];

	cout << "Average = " << average(arr) << endl;
	return 0;
}