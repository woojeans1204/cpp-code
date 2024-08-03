#include <iostream>
#include <cstring>
using namespace std;

class Book {
    private:
        char *title;
        char *isbn;
        int price;

    public:
        Book(char *t, char *i, int p) :price(p) {
            title = new char[strlen(t)+1];
            strcpy(title, t);
            isbn = new char[strlen(i)+1];
            strcpy(isbn, i);
        }
        Book(Book &b) {
            title = new char[strlen(b.title)+1];
            strcpy(title, b.title);
            isbn = new char[strlen(b.isbn)+1];
            strcpy(isbn, b.isbn);
            price = b.price;
        }
        Book &operator=(Book &b) {
            title = new char[strlen(b.title)+1];
            strcpy(title, b.title);
            isbn = new char[strlen(b.isbn)+1];
            strcpy(isbn, b.isbn);
            price = b.price;
        }
        void ShowBookInfo() {
            cout << "제목: " << title << endl;
            cout << "ISBN: " << isbn << endl;
            cout << "가격: " << price << endl;
        }
};

class EBook : public Book {
    private:
        char *DRMKey;
    
    public:
        EBook(char *t, char *i, int p, char *D) :Book(t, i, p) {
            DRMKey = new char[strlen(D)+1];
            strcpy(DRMKey, D);
        }
        EBook(EBook &e) :Book(e) {
            DRMKey = new char[strlen(e.DRMKey)+1];
            strcpy(DRMKey, e.DRMKey);
        }
        EBook &operator=(EBook &e) {
            EBook::operator=(e);
            DRMKey = new char[strlen(e.DRMKey)+1];
            strcpy(DRMKey, e.DRMKey);
        }
        void ShowEBookInfo() {
            ShowBookInfo();
            cout << "인증키: " << DRMKey << endl;
        }
};

int main() {
    Book book("좋은 C++" , "555-12345-890-0", 20000);
    book.ShowBookInfo();
    cout << endl;
    EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
    ebook.ShowEBookInfo();
    cout << endl;
    book = ebook;
    book.ShowBookInfo();
}