
class Account {
    private:
        int id;
        char *name;
        int money;
    public:
        Account(int i, char *n, int m) : id(i), name(n), money(m) {
        }
        Account(Account &copy) {
            id = copy.id;
            name = new char[strlen(copy.name)+1];
            strcpy(name, copy.name);
            money = copy.money;
        }
        ~Account() {
            delete []name;
        }
        void show_info() const{
            cout << "계좌ID: " << id << endl;
            cout << "이름: " << name << endl;
            cout << "잔액: " << money << endl;
        }
        int get_id(void) const{
            return id;
        }
        void deposit(int money) {
            this->money += money;
        }
        int withdraw(int money) {
            if (this->money < money) return 0;
            this->money -= money;
            return money;
        }
};
