#include<iostream>
using namespace std;

class Clock {
public:
	Clock(int newH, int newM, int newS);
	void setTime(int newH, int newW, int newS);
	void showTime();
private:
	int hour, minute, second;
};

Clock::Clock(int newH, int newM, int newS) :
	hour(newH), minute(newM), second(newS) {
}

void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}

inline void Clock::showTime() {
	cout << hour << ":" << minute << ":" << second << endl;
}

int main () {
	Clock c(17, 30, 06);
	c.showTime();
	return 0;
}

//class Point {
//public:
//	Point(int xx = 0, int yy = 0) { x = xx; y = yy; } //构造函数，内连
//	Point(const Point& p); 
//	int getX()
//	{ return x; }
//private:
//	int x, y;
//};
//
//
////成员函数的实现
//Point::Point(const Point& p) {
//	x = p.x;
//	y = p.y;
//	cout << "Calling the copy constructor" << endl;
//}
//
////形参为Point类对象的函数
//void fun1(Point p) {
//	cout << p.getX() << endl;
//}
//
////返回值为Point类对象的函数
//Point fun2() {
//	Point a;
//	return a;
//}
//
//int main () {
//	Point a;
//	Point b(a);
//	cout << b.getX() << endl;
//	fun1(b);
//	b = fun2();
//	cout << b.getX() << endl;
//	return 0;
//}

//class Point {
//public: //外部接口
//	Point(int x = 0, int y = 0):x(x), y(y) { //构造函数
//		count++; //在构造函数中对count累加，所有对象共同维护同一个count
//	}
//	Point(Point& p) { //复制构造函数
//		x = p.x; y = p.y; count++;
//	}
//	~Point() { count--; }
//	int getX() { return x;}
//	int getY() {return y;}
//	static void showCount() { //输出静态数据成员
//		cout << " Object count = " << count << endl;
//	}
//private: //私有数据成员
//	int x, y;
//	static int count; //静态数据成员声明，用于记录点的个数
//};
//int Point::count = 0; //静态数据成员定义和初始化，使用类名限定
//int main() {
//	Point::showCount();
//	Point a(4, 5); //定义对象a，其构造函数回使count增1
//	cout << "Point A:" << a.getX() << "," << a.getY();
//	Point::showCount(); //输出对象个数（可以使用对象名调用 a.showCount）
//
//	Point b(a); //定义对象b，其构造函数回使count增1
//	cout << "Point B:" << b.getX() << "," << b.getY();
//	Point::showCount(); //输出对象个数 （可以使用对象名调用 a.showCount）
//	return 0;
//}

//#include <cmath>
//class Point {
//public:
//	Point(int x = 0, int = 0) :x(x), y(y) {}
//	int getX() { return x; }
//	int getY() { return y; }
//	friend float dist(Point& a, Point& b);
//private:
//	int x, y;
//};
//
//float dist(Point& a, Point& b) {
//	double x = a.x - b.x;
//	double y = a.y - b.y;
//	return static_cast<float>(sqrt(x * x + y * y));
//}
//
//int main() {
//	Point p1(1, 1), p2(4, 5);
//	cout << "The distance is:";
//	cout << dist(p1, p2) << endl;
//	return 0;
//}