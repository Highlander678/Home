#include<iostream>

using namespace std;

class Point
{
public:
	int *arr_data;
	int Size;
	Point();
	Point(int Size);
	void Getarrdata();
	void operator = (Point *other);
	

	~Point();

private:

};

Point::Point()
{
}

Point::Point(int Size)
{
	this->Size = Size;
	this->arr_data = new int[Size];
	
	for (int i = 0; i < Size; i++)
	{
		this->arr_data[i] = rand() % 30;
		
	}
}

void Point::Getarrdata()
{
	for (int i = 0; i < this->Size; i++)
	{
		cout<< "arr_data["<<i<<"] = " << this->arr_data[i] << endl;
	}
}

void Point::operator=(Point *other)
{
	/*delete[] this->arr_data;
	this->Size = other.Size;
	this->arr_data = new int[other.Size];*/
	for (int i = 0; i < this->Size; i++)
	{
		this->arr_data[i] = other->arr_data[i];
	}
	
}

Point::~Point()
{
	delete[] this->arr_data;
}

int main()
{
	int Size;
	cin >> Size;
	setlocale(LC_ALL, "ru");
	Point a(Size);
	Point b(Size);
	cout << "Объект А" << endl;
	cout << "============================================" << endl;
	a.Getarrdata();
	cout << "Объект Б" << endl;
	cout << "============================================" << endl;
	b.Getarrdata();
	cout << "Результат после копирования Б -> А Выводим А" << endl;
	cout << "============================================" << endl;
	a.operator=(&b);
	a.Getarrdata();  
	system("pause");
	return 0;
}


