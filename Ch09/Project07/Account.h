#ifndef ACCOUNT_H_
#define ACCOUNT_H_

class Account {
    private:
        int id;
        char *name;
        int money;
    public:
        Account(int i, char *n, int m);
        Account(Account &copy);
        ~Account();
        void show_info() const;
        int get_id(void) const;
        void deposit(int money);
        int withdraw(int money);
};

#endif