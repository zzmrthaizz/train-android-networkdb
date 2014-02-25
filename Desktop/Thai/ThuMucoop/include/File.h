#ifndef FILE_H
#define FILE_H
#include "Unit.h"

class File: public Unit
{
    private:
        int size;
    public:
        File();
        int getsize();
        void setsize(int n_size);
        int tinhsize ();
        void Nhap();
 //       friend istream & operator >> (istream & input, File * unit);
};

#endif // FILE_H
