#include <iostream>
#include <cmath>

using namespace std; //включение простанства имен

int main()
{
	double x;
	double y;		//переменные

	while (1)
	{
		cout << "In number" << endl;	//введите число
		cin >> x ;		//запись в переменную
			if (x>=-9 && x<-6)
			{
				y = -sqrt(9-pow((x+6),2));
			}
		if (x>=-6 && x<-3)
		{
			y = x+3;
		}
			if (x>=-3 && x<0)
			{
				y = sqrt(9-pow((x),2));
			}
		if (x>=0 && x<3)
		{
			y=3-x;
		}
			if (x>=3 && x<=9)	//определение диапазона
			{
				y =0.5*(x-3);
			}					//	вычисление значения У
		if (x>9 || x<-9)		// попадаем в определенность?
		{
			cout << " ERROR, not included in the function " << endl;	// не попали
		}
	/*	if (x!=double)		//точно число ввели?
		{
			cout << " ERROR, not number " << endl;
		}*/
			cout << " y = " << y << endl;	//вывод значения
	}
	return 0;	//конец
}
