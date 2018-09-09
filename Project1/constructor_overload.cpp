//#include<iostream>
//
//using namespace std;
//
//class Point
//{
//public:
//	Point();
//	Point(int x, int y);
//	void GetXY();
//	~Point();
//
//private:
//	int x, y;
//};
//
//Point::Point()
//{
//	cout << "Запущен конструктор по умолчанию" << endl;
//}
//
//Point::Point(int x, int y)
//{
//	this->x = x;
//	this->y = y;
//}
//
//void Point::GetXY()
//{
//	 cout << "X = " << this->x << "\tY = " << this->y << endl;
//}
//
//
//
//Point::~Point()
//{
//}
//
//int main()
//{
//	setlocale(LC_ALL, "ru");
//	Point a(5,6);
//	a.GetXY();
//	
//	
//	system("pause");
//
//	return 0;
//}