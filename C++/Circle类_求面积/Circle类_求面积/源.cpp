#include <iostream>
#include <conio.h>

#define OK 1
#define pi 3.14
using namespace std;

class Circle
{
public:
	Circle(int radius) { Radius = radius; }
	Circle(Circle &C);
	~Circle() {}
	int GetR(){ return Radius; }
	int GetArea() const;

private:
	int Radius;
};

Circle::Circle(Circle &C)
{
	C.Radius = Radius;
}

int Circle::GetArea() const
{
	return pi*Radius*Radius;
}

int main()
{
	int r;
	Circle mycircle(2);
	cout << "求得默认园的面积为: " << mycircle.GetArea() << endl;

	cout << "请输出另一个园的半径 r = ";
	cin >> r;
	Circle youcircle(r);
	cout << "求得半径为" << r << "的园的面积为：" << youcircle.GetArea() << endl;

	_getch();
	return OK;
}