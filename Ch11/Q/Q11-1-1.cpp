#include <iostream>
#include <cstring>
using namespace std;

class Gun {
    private:
        int bullet;
    public:
        Gun(int bnum) : bullet(bnum) {

        }
        void Shot() {
            cout << "BBANG!" << endl;
            bullet--;
        }
};

class Police { 
    private:
        int handcuffs;
        Gun *pistol;
    public:
        Police(int bnum, int bcuff) : handcuffs(bcuff) {
            if (bnum > 0)
                pistol = new Gun(bnum);
            else
                pistol = NULL;
        }
        Police(Police &p) {
            handcuffs = p.handcuffs;
            pistol = new Gun(*(p.pistol));
        }
        Police& operator=(Police &p) {
            handcuffs = p.handcuffs;
            pistol = new Gun(*(p.pistol));
            return *this;
        }
        void PutHandcuff() {
            cout << "SNAP!" << endl;
            handcuffs--;
        }
        void Shot() {
            if(pistol == NULL)
                cout << "Hut BBANG!" << endl;
            else
                pistol->Shot();
        }
        ~Police() {
            if (pistol != NULL)
                delete pistol;
        }
};

int main() {
    Police pman1(0, 0);
    pman1.Shot();
    pman1.PutHandcuff();

    Police pman2 = pman1;
    pman2.Shot();
    pman2.PutHandcuff();

}