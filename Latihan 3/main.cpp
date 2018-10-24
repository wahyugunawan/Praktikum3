#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cout << "masukan sisi pertama : ";
    cin >> a;

    cout << "masukan sisi kedua : ";
    cin >> b;

    cout << "masukan sisi ketiga : ";
    cin >> c;

    if(a==b && a==c)
    {
        cout <<"segitiga sama sisi"<<endl;
    }
    else if (a==b || a==c)
    {
        if(a!=b || a!=c)
    {cout <<"Segitiga sama kaki"<<endl;
    }
    }
    else
        cout <<"Segitiga Sembarang"<<endl;
}
