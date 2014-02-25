#include <iostream>
#include "Folder.h"
#include "File.h"

using namespace std;

/* Folder addDsUnit()
{
    Folder b;
    cout << "Nhap so luong unit: ";
    int n_soluong;
    cin >> n_soluong;
    b.setsoluong(n_soluong);
    b.creat();
    for (int i = 0; i <b.getsoluong(); i++)
    {
        cout <<"Nhap loai unit thu "<<i+1<<": ";
        string n_Loai;
        cin >> n_Loai;
        b.DsUnit[i].setLoai(n_Loai);
        if (b.DsUnit[i].getLoai() == "file")
        {
            File c;
            string n_Ten;
            int n_size;
            cout << "Nhap ten file: ";
            cin >> n_Ten;
            cout << "Nhap size file: ";
            cin >> n_size;
            c.setTen(n_Ten);
            c.setsize(n_size);
            c.setLoai(n_Loai);

            b.DsUnit[i] = c;
            cout << "Ten: " << b.DsUnit[i].getTen() <<endl;
            cout << "File size: " << c.tinhsize() <<endl;
            cout << "DS[i] size: " << b.DsUnit[i].tinhsize()<<endl;
        }
        else
        {
            b.DsUnit[i] = addDsUnit();
        }
    }
    return b;
}*/
int main()
{
    // Folder a;
    // a = addDsUnit();
    // cout << a.getsoluong()<<endl;
    // cout << a.DsUnit[0].getLoai()<<endl;
    // cout << a.DsUnit[0].tinhsize()<<endl;
    // cout << a.tinhsize();

    /*
    File * a = new File();
    cin >> a;
    cout << "File size: " << a->tinhsize();
    */

    Folder * a = new Folder();
    a->Nhap();
    int size = a->tinhsize();
    cout << "Total size: " << size;


    return 0;
}
