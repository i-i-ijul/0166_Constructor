#include <iostream>
using namespace std;

class mahasiswa{
    private:
        static int jumlahMhs;
    public:
        string status;
        string nama;
        int nim;
        mahasiswa(string pNama, int pNim){
            status = "mahasiswa baru";
            nama = pNama;
            nim = pNim;
            cout << "mahasiswa dibuat " << nama << endl;
            cout << "status = " << status << endl;
            ++jumlahMhs;
        };//konstruktor
        ~mahasiswa(){
            cout << "mahasiswa dengan nama " << nama << " dihancurkan" << endl;
            -- jumlahMhs;
        };//destructor
        static int gettotalmhs(){
            return jumlahMhs;
        };
};   

int mahasiswa::jumlahMhs = 0;

int main(){
    cout << "jumlah mahasiswa = " << mahasiswa::gettotalmhs() << endl;
    mahasiswa mhs1("rudi", 28);
    mahasiswa mhs2("jokowi", 23);
    mhs2.status = "mahasiswa uzur";
    cout << mhs2.status << endl;
    mahasiswa mhs3("gibran", 89);

    {
        mahasiswa mhs4("pra", 30);
        cout << "jumlah mahasiswa dalam bracket = " << mahasiswa::gettotalmhs() << endl;
    }
    cout << "jumlah mahasiswa = " << mahasiswa::gettotalmhs() << endl;
    return 0;
}