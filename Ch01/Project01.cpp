#include <iostream>
using namespace std;

typedef struct {
    int id;
    char name[20];
    int money;
} account; 

account user[100]; // 100개의 계정 저장 가능  
int user_n = 0; // 유저 수

void create(void) { // 계좌 개설
    cout << "[계좌개설]\n";
    cout << "계좌ID: ";
    cin >> user[user_n].id;
    cout << "이 름: ";
    cin >> user[user_n].name;
    cout << "입금액: ";
    cin >> user[user_n].money;
    user_n++;
}

void deposit(void) { // 계좌 입금
    int idx, m;

    cout << "[입    금]\n";
    cout << "계좌ID: ";
    cin >> idx;

    for (int i = 0; i < user_n; i++) {
        if (idx != user[i].id)
            continue;
        cout << "입금액: ";
        cin >> m;
        user[i].money += m;
        cout << "입금완료\n";
        return;
    }
    cout << "유효하지 않은 ID입니다\n";
    return;
}

void withdraw(void) { // 계좌 출금
    int idx, m;

    cout << "[출    금]\n";
    cout << "계좌ID: ";
    cin >> idx;

    for (int i = 0; i < user_n; i++) {
        if (idx != user[i].id)
            continue;
        cout << "출금액: ";
        cin >> m;
        if (m > user[i].money) {
            cout << "잔액이 부족합니다\n";
            return;
        }
        user[i].money -= m;
        cout << "출금완료\n";
        return;
    }
    cout << "유효하지 않은 ID입니다\n";
    return;
}

void print(void) { // 계좌정보 출력
    int i;
    for (i = 0; i < user_n; i++) {
        cout << "계좌ID: " << user[i].id << endl;
        cout << "이름: " << user[i].name << endl;
        cout << "잔액: " << user[i].money << endl;
    }
}

int main() {
    int p;
    while (true) {
        cout << "-----Menu------\n";
        cout << "1. 계좌개설\n";
        cout << "2. 입 금\n";
        cout << "3. 출 금\n";
        cout << "4. 계좌정보 전체 출력\n";
        cout << "5. 프로그램 종료\n";
        cout << "선택: ";
        cin >> p;
        switch (p) {
            case 1:
                create();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                print();
                break;
            case 5:
                cout << "프로그램이 종료되었습니다\n";
                return 0;
            default:
                cout << "잘못된 선택입니다\n";
        }
    }
}