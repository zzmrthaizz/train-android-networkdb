#include "Folder.h"
#include "File.h"

Folder::Folder()
{
    this->soluong = 0;
}

//get,set
int Folder::getsoluong()
{
    return this->soluong;
}
void Folder::setsoluong(int n_soluong)
{
    this->soluong = n_soluong;
}

//add Unit
void Folder::creat()
{
 /*   DsUnit = new Unit*[soluong];
    for (int i = 0; i< soluong; i++)
    {
        DsUnit[i] =  new Unit
    }
    */
}
int Folder::tinhsize()
{
    cout << "Inside Folder::tinhsize();" << endl;
    int sum = 0;
    cout << "so luong: " << soluong;
    for (int i=0 ; i<soluong; i++)
    {

        cout << this->DsUnit[i]->getLoai() << endl;
        cout << this->DsUnit[i]->tinhsize() << endl;
        sum += this->DsUnit[i]->tinhsize();

    }
    return sum;
}

void Folder::Nhap()
{
    cout << "Folder name: ";
    string ten = "";
    cin >> ten;

    this->setTen(ten);
    this->setLoai("folder");

    int soluong = 0;
    cout << "So luong item con: ";
    cin >> soluong;
    this->soluong = soluong;

    this->DsUnit = new Unit * [soluong];
    for (int i = 0; i < soluong; i++)
    {
        string type = "";
        cout << "Nhap load unit: ";
        cin >> type;

        if (type == "file") {
            this->DsUnit[i] = new File();
            this->DsUnit[i]->Nhap();

        } else if (type == "folder") {
            this->DsUnit[i] = new Folder();
            this->DsUnit[i]->Nhap();

        } else {
            cout << "WTF";
            return;
        }
    }
}
