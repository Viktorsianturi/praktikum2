#include<iostream>

using namespace std;

int main() {

            int A , B ,C ,D;

            cout << "Masukkan bilangan 1: ";
            cin >> A;

            cout << "Masukkan bilangan 2: ";
            cin >> B;

            cout << " Masukkan bilangan 3: ";
            cin >> C;

            cout << "Msukan bilangan  4: ";
            cin >> D ;

            if (A > B) {
                    if (A > C)
                    cout << "Bilangan tebesar adalah: " << A << endl;
                    else
                        cout << "Bilangan terbesar adalah: " << C << endl;
                        } else {

            if (B > C)
                cout << "Bilangan terbesar adalah: " << B << endl;
                else
                    cout << "bilangan terbesar adalah : " << B << endl;
                        }
            if (D > B)
                if (D > C)
                cout << "Bilangan terbesar adalah: " << D << endl;
            else
                cout << "Bilangan terbesar adalah: " << C << endl;







