#include "Unit.h"

Unit::Unit()
{
    this->Ten = "";
    this->Loai = "";
}


//get,set
string Unit::getTen()
{
    return this->Ten;
}
void Unit::setTen(string n_Ten)
{
    this->Ten = n_Ten;
}
string Unit::getLoai()
{
    return this->Loai;
}
void Unit::setLoai(string n_Loai)
{
    this->Loai = n_Loai;
}


//ham ao
int Unit::tinhsize()
{
}
void Unit::Nhap()
{

}

