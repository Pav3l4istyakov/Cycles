#include<iostream>
int main()
{
	//������ 1
	setlocale(LC_ALL, "RU");
	int b, a, sum = 0;
	std::cout << "������� a �� 500: ";
	std::cin >> a;
	b = a;
	for (; b <= 500; b++, a++)
	{
		sum = sum + a;
		std::cout << sum << "\n";
	}
	//������ 2



	double x, y = 0;
	std::cout << "������� x";
	std::cin >> x;
	std::cout << "������� y";
	std::cin >> y;
	std::cout << pow(x, y);

	//������ 3
	std::cout << "������� ����� �� 1 �� 1000";
	float w, z = 0;
	std::cin >> w;
	for (int i = 1; i <= 1000; i++) {
		z = (z + i);

	}


	z = z / 1000;
	std::cout << "\n ������� ��������������  �����  " << z;


	//������ 4
	int h, v, i, n;
	std::cout << "������� a �� 20";
	std::cin >> n;
	std::cout << "������� ������ �����";


	v = 1;

	std::cin >> h;




	for (i = h; i <= 20; i++)

	{



		v = v * i;

	}



	std::cout << " ������������ ����� = " << v;
	//������ 5
	std::cout << "������� ����� ��������: ";
	int tablumn;
	std::cin >> tablumn;
	for (int i = 1; i != 10; ++i)
	{
		std::cout << tablumn << " x " << i << " = " << tablumn * i << '\n';
	}
	return 0;
}