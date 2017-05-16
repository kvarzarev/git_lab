#include <iostream>
using namespace std;

class RationalFractions
{
	int numerator; //числитель
	int denominator; //знаменатель
	char *nameFraction; //имя дроби (как пример, исключительно для динамического выделения памяти)
	static int count;
	//static int NOD(int, int); // наибольший общий делитель
	//static int NOK(int, int); // наименьшее общее кратное
	//void reduction(); //сокращение дроби
public:
	RationalFractions(); //конструктор по умолчанию
	RationalFractions(char*, int, int); //конструктор с параметрами-1
	RationalFractions(int num, int den);//конструктор с параметрами-2
	RationalFractions(const RationalFractions& F);//конструктор копирования
	~RationalFractions(); //деструктор
};
