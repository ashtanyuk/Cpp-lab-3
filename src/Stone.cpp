#include "Stone.h"
#include <iostream>
//#include <qDebug>
//#include <Qdebug>
using namespace std;

size_t Stone::Stonecount = 0;
//char Stone::count2 = 'j';
//char         Stone::name  = STONE_N;
//char    Stone::name = '1';
//char         Stone::name322 = '1';

size_t Stone::getCount()
{
    //return Stonecount2();
    return Stonecount;

}

char Stone::getName()
{
	return STONE_N;
}

//http://faqs.org.ru/progr/c_cpp/cpp_lite3.htm


size_t &Stone::Stonecount2()
{
    size_t num =0;
    static size_t* Stonecount2 = new size_t;
    return *Stonecount2;
}

Stone::Stone(Cell * c) :Object(c)
{	
    Stonecount2()++;
}
Stone::~Stone()
{
    this->Stonecount2()--;
    //Stonecount--;
}
void Stone::live()
{
}
