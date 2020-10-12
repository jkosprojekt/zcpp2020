#include <iostream>
using namespace std;

class base {
public:
    virtual void vrt(){
        cout << "Metoda wirtualna klasa bazowa" << endl;
    }

    void zwk(){
        cout << "Metoda zwyk³a klasa bazowa" << endl;
    }
};

class der : public base {
    void vrt(){
        cout << "Metoda wirtualna klasa pochodna" << endl;
    }

    void zwk(){
        cout << "Metoda zwyk³a klasa pochodna" << endl;
    }
};

int main(){
    base *bp;
    der d;
    bp = &d;
    bp->vrt();
    bp->zwk();
//metoda wirtualna zosta³a wywo³ana w klasie pochodnej.
}
