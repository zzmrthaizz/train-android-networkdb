#ifndef FOLDER_H
#define FOLDER_H
#include "Unit.h"

class Folder:public Unit
{
    private:
        int soluong;

    public:
        Folder();
        Unit** DsUnit;
        int getsoluong();
        void setsoluong(int n_soluong);
        void creat();
        int tinhsize();
        void Nhap();
//        friend istream & operator >> (istream & input, Folder * unit);
};

#endif // FOLDER_H
