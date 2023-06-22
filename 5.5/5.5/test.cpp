#include  <iostream>
using namespace std;
class Data
{
public:
	Data(int year = 1, int month = 2, int day = 3)//��������
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Data(const Data& d)//�������캯��
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Data& operator++()//ǰ��++ �������÷���
 	{
		_day += 1;
		return *this;
	}
	Data operator++(int)
	{
		Data tmp(*this);
		_day += 1;
		return tmp;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{
	Data d;
	Data d1(2023,5,5);
	d=++d1;
	d.Print();
	d=d1++;
	d.Print();

}