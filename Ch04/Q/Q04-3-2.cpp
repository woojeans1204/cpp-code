#include <iostream>
#include <cstring>
using namespace std;

namespace COMP_POS {
    enum {CLERK, SENIOR, ASSIST, MANAGER};

    void ShowPosInfo(int level) {
        switch (level) {
                case 0:
                    cout << "사원"; break;
                case 1:
                    cout << "주임"; break;
                case 2:
                    cout << "대리"; break;
                case 3:
                    cout << "과장"; break;
            }
    }
}


class NameCard {
    private:
        char* name;
        char* comp;
        char* phone;
        int level;

    public:
        NameCard(char* n, char* c, char* p, int l) {
            name = new char[strlen(n)+1];
            strcpy(name, n);
            comp = new char[strlen(c)+1];
            strcpy(comp, c);
            phone = new char[strlen(p)+1];
            strcpy(phone, p);
            level = l;
        }
        ~NameCard() {
            delete []name;
            delete []comp;
            delete []phone;
        }
        void ShowNameCardInfo() {
            cout << "이름: " << name << endl;
            cout << "회사: " << comp << endl;
            cout << "전화번호: " << phone << endl;
            cout << "직급: ";
            COMP_POS::ShowPosInfo(level);
            cout << endl << endl;
        }
};

int main() {
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}