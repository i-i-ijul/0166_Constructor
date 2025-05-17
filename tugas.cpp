#include <iostream>
using namespace std;

class admin;
class Judul{
private:
    string nama;

public:
    Judul(string n){
    nama = n;
    }
  // konstruktor

    friend class Petugas; // ngejadiin petugas sbg fri& class agar bisa memodifikasi
};

class Penulis{
private:
    string namaPenulis;

public:
    Penulis(string n){
    namaPenulis = n;
    }
    // konstruktor

    friend class Petugas; // ngejadiin petugas sbg fri& class agar bisa memodifikasi
};

class StatusPeminjaman{
private:
    bool dipinjam;

public:
    StatusPeminjaman(bool s){
        dipinjam = s;
    }
    //konstruktor

    friend class Petugas; // ngejadiin petugas sbg fri& class agar bisa memodifikasi
};

class Petugas{
public:
    void tampilData(Judul j, Penulis p, StatusPeminjaman s){
        cout << "JUDUL BUKU: " << j.nama << endl;
        cout << "NAMA PENULIS: " << p.namaPenulis << endl;
        cout << "STATUS: " << "dipinjam" << endl;
        cin >> s.dipinjam;
    }

    friend class Admin;
};

int main(){
    Judul j("IJUL GANTENG");
    Penulis p("haqqi");
    StatusPeminjaman s("dipinjam");

    Petugas petugas;
    petugas.tampilData(j, p, s);

    return 0;
}