#include "File.h"

File::File()
{

}
int File::tinhsize()
{
    cout << "Inside File::tinhSize();";
    return this->size;
}
int File::getsize()
{
    return this->size;
}
void File::setsize(int n_size)
{
    this->size = n_size;
}

/*istream & operator >> (istream & input, File * unit) {
    int size = 0;
    cout << "File size: ";
    input >> size;

    cout << "File name: ";
    string ten = "";
    input >> ten;

    unit->setTen(ten);
    unit->setsize(size);
    unit->setLoai("file");
}*/
void File::Nhap()
{
    int size = 0;
    cout << "File size: ";
    cin >> size;

    cout << "File name: ";
    string ten = "";
    cin >> ten;

    this->setTen(ten);
    this->setsize(size);
    this->setLoai("file");
}
