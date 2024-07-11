#include <iostream>
#include <cstring> // C에서는 <string.h>

using namespace std;

int main() {
    char input1[100], input2[100];
    char temp[200];
    int f;
    cout << "문자열 입력 1: ";
    cin >> input1;
    cout << "문자열 입력 2: ";
    cin >> input2;
    
    
    cout << "1번째 문자열의 길이: " << strlen(input1) << endl;
    cout << "2번째 문자열의 길이: " << strlen(input2) << endl;
    
    strcpy(temp, input1);
    strcat(temp, input2);
    
    f = strcmp(input1, input2);
    if (f == 0)
        cout << "두 문자열은 같다.\n";
    else
        cout << "두 문자열은 다르다.\n";
}