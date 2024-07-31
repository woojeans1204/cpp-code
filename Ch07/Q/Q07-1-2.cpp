#include <iostream>
#include <cstring>

using namespace std;

class MyFriendInfo {
    private:
        char *name;
        int age;
    public:
        MyFriendInfo(char *n, int a) :age(a) {
            name = new char[strlen(n)+1];
            strcpy(name, n);
        }
        ~MyFriendInfo() {
            delete []name;
        }
        void ShowMyFriendInfo() {
            cout << "이름: " << name << endl;
            cout << "나이: " << age << endl;
        }
};

class MyFriendDetailInfo : public MyFriendInfo {
    private:
        char *addr;
        char *phone;
    public:
        MyFriendDetailInfo(char*name, int age, char *a, char *p) : MyFriendInfo(name, age) {
            addr = new char[strlen(a)+1];
            strcpy(addr, a);
            phone = new char[strlen(p)+1];
            strcpy(phone, p);
        }
        ~MyFriendDetailInfo() {
            delete []addr;
            delete []phone;
        }
        void ShowMyFriendDetailInfo() {
            ShowMyFriendInfo();
            cout << "주소: " << addr << endl;
            cout << "전화: " << phone << endl << endl;
        }
};

int main() {
    MyFriendDetailInfo f("woojin", 18, "Busan", "010-1234-5678");
    f.ShowMyFriendDetailInfo();
}