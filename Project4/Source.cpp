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
//	Point(int xx = 0, int yy = 0) { x = xx; y = yy; } //���캯��������
//	Point(const Point& p); 
//	int getX()
//	{ return x; }
//private:
//	int x, y;
//};
//
//
////��Ա������ʵ��
//Point::Point(const Point& p) {
//	x = p.x;
//	y = p.y;
//	cout << "Calling the copy constructor" << endl;
//}
//
////�β�ΪPoint�����ĺ���
//void fun1(Point p) {
//	cout << p.getX() << endl;
//}
//
////����ֵΪPoint�����ĺ���
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
//public: //�ⲿ�ӿ�
//	Point(int x = 0, int y = 0):x(x), y(y) { //���캯��
//		count++; //�ڹ��캯���ж�count�ۼӣ����ж���ͬά��ͬһ��count
//	}
//	Point(Point& p) { //���ƹ��캯��
//		x = p.x; y = p.y; count++;
//	}
//	~Point() { count--; }
//	int getX() { return x;}
//	int getY() {return y;}
//	static void showCount() { //�����̬���ݳ�Ա
//		cout << " Object count = " << count << endl;
//	}
//private: //˽�����ݳ�Ա
//	int x, y;
//	static int count; //��̬���ݳ�Ա���������ڼ�¼��ĸ���
//};
//int Point::count = 0; //��̬���ݳ�Ա����ͳ�ʼ����ʹ�������޶�
//int main() {
//	Point::showCount();
//	Point a(4, 5); //�������a���乹�캯����ʹcount��1
//	cout << "Point A:" << a.getX() << "," << a.getY();
//	Point::showCount(); //����������������ʹ�ö��������� a.showCount��
//
//	Point b(a); //�������b���乹�캯����ʹcount��1
//	cout << "Point B:" << b.getX() << "," << b.getY();
//	Point::showCount(); //���������� ������ʹ�ö��������� a.showCount��
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