#include <iostream>

using namespace std;

class String {
private:
    char* pStr;
    int _size;
public:
    String() {
        pStr = NULL;
        _size = 0;
    }
    String(char* str) {
        _size = strlen(str) + 1;
        pStr = new char[_size];
        strcpy(pStr, str);
    }
    int size() {
        return _size;
    }
    ~String() {
        delete[]pStr;
    }
    friend ostream& operator << (ostream& os, String& obj) {
        for (int i = 0; i < obj.size(); i++)
            os << obj.pStr[i];
        return os;
    }
};

int main(int argc, char* argv[]) {
    String str("Hello World!");
    cout << str;
    return 0;
}
