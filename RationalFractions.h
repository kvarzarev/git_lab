#include <iostream>
using namespace std;

class RationalFractions
{
	int numerator; //���������
	int denominator; //�����������
	char *nameFraction; //��� ����� (��� ������, ������������� ��� ������������� ��������� ������)
	static int count;
	//static int NOD(int, int); // ���������� ����� ��������
	//static int NOK(int, int); // ���������� ����� �������
	//void reduction(); //���������� �����
public:
	RationalFractions(); //����������� �� ���������
	RationalFractions(char*, int, int); //����������� � �����������-1
	RationalFractions(int num, int den);//����������� � �����������-2
	RationalFractions(const RationalFractions& F);//����������� �����������
	~RationalFractions(); //����������
};
