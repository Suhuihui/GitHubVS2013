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
	cout << "���Ĭ��԰�����Ϊ: " << mycircle.GetArea() << endl;

	cout << "�������һ��԰�İ뾶 r = ";
	cin >> r;
	Circle youcircle(r);
	cout << "��ð뾶Ϊ" << r << "��԰�����Ϊ��" << youcircle.GetArea() << endl;

	_getch();
	return OK;
}