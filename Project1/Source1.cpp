//#include<iostream>
//#include<string>
//
//using namespace std;
//
//void main()
//{
//	int rows,cols;
//	cout << "Input number of rows" << endl;
//	cin >> rows;
//	cout << "Input number of cols" << endl;
//	cin >> cols;
//	int **arr = new int *[rows];
//
//	//������������� �������
//	for (int i = 0; i < rows; i++)
//	{
//		arr[i] = new int[cols];
//	}
//
//	//���������� ������� ���������� ����������
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			arr[i][j] = rand() % 20;
//		}
//	}
//
//	//����� �������
//
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			cout << arr[i][j] << "\t";
//		}
//		cout << endl;
//	}
//	system("pause");
//
//
//	for (int i = 0; i < rows; i++)
//	{
//		delete[] arr[i];
//	}
//
//	delete[] arr;
//}