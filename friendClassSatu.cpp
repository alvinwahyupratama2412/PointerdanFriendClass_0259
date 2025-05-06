#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang{
    private :
    string nama;

    public : 
    void setNama(string pNama);
    friend class siswa;
};

class siswa {
  private:
  int id;
  
  public :
  void setID (int pID);
  void displayall(orang &a);
};

void siswa::displayall(orang &a){
    cout << id << endl << a.nama;
}
void siswa::setID(int pID){
    id = pID;
}

int main(){
    orang joko;
    joko.setNama("joko susilo");
    siswa joko_siswa;
    joko_siswa.setID(1);
    joko_siswa.displayall(joko);
    return 0;
}