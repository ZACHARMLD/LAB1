#include <iostream>
#include <cmath>

using namespace std; //��������� ����������� ����

int main()
{
	double x;
	double y;		//����������

	while (1)
	{
		cout << "In number" << endl;	//������� �����
		cin >> x ;		//������ � ����������
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
			if (x>=3 && x<=9)	//����������� ���������
			{
				y =0.5*(x-3);
			}					//	���������� �������� �
		if (x>9 || x<-9)		// �������� � ��������������?
		{
			cout << " ERROR, not included in the function " << endl;	// �� ������
		}
	/*	if (x!=double)		//����� ����� �����?
		{
			cout << " ERROR, not number " << endl;
		}*/
			cout << " y = " << y << endl;	//����� ��������
	}
	return 0;	//�����
}
