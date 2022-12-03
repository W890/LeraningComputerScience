#include <iostream>
#include <cassert>
using namespace std;
class Point {
public:
	Point() :x(0), y(0) {
		cout << "Default Constructor called." <<endl;
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

//动态分配与释放内存
//int main() {
//	cout << "Step one:" << endl;
//	Point* ptr1 = new Point; //调用默认构造函数
//	delete ptr1; //删除对象，自动调用析构函数
//
//	cout << "Step two:" << endl;
//	ptr1 = new Point(1, 2);
//	delete ptr1;
//
//	return 0;
//}

//申请和释放动态数组
//int main()
//{
//	Point* ptr = new Point[2]; //创建对象数组
//	ptr[0].move(5, 10); //通过指针访问数组元素的成员
//	ptr[1].move(15, 20); //通过指针访问数组元素的成员
//	cout << "Deleting..." << endl;
//	delete[]ptr; //删除整个对象数组
//	return 0;
//}

//class Point { //类的声明同上。。。};
class ArrayOfPoints { //动态数组类
public:
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

int main() {
	int count;
	cout << "Please enter the count of points:";
	cin >> count;
	ArrayOfPoints Points(count); //创建数组对象
	Points.element(0).move(5, 0); //访问数组元素的成员
	Points.element(1).move(15, 20); //访问数组元素的成员
	return 0;
}