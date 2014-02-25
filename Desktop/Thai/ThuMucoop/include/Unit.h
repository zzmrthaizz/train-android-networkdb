#ifndef UNIT_H
#define UNIT_H
#include <iostream>

using namespace std;

class Unit
{
    protected:
        string Ten;
        string Loai;

    public:
        Unit();
        string getTen();
        void setTen(string n_Ten);
        string getLoai();
        void setLoai(string n_Loai);

        virtual int tinhsize();
        virtual void Nhap();
 //       friend istream & operator >> (istream & input, Unit * unit);
};

#endif // UNIT_H
