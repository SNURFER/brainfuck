#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;
bool interprete(string code) {
    unsigned char* ptr = new unsigned char[30000]; 

    bool checkConvention = true;

    int idx = 0;
    while (idx < code.size()) {
        char ch = code[idx];
        switch (ch) {
            case '>':
                ++ptr;
                break;
            case '<':
                --ptr;
                break;
            case '+':
                ++(*ptr);
                break;
            case '-':
                --(*ptr);
                break;
            case '.':
                cout << *ptr;
                break;
            case ',':
                *ptr = getchar();
                break;
            case '[':
                if (*ptr == 0) {
                    while(code[idx] != ']') {
                        idx++;
                    }
                }
                break;
            case ']':
                if (*ptr != 0) {
                    while(code[idx] != '[') {
                        idx--;
                    }
                }
                break;
            default:
                checkConvention = false;
                break;
        }
        idx++;
    }

    return checkConvention;
}

int main()
{
    
    std::ifstream input("input");
    string code = "";

    if (input) {
        stringstream buff;
        buff << input.rdbuf();
        input.close();
        code = buff.str();
    }

    bool runSuccess = interprete(code);

    cout << endl;
    cout << endl;
    cout << endl;

    if (runSuccess) {
        cout << "----------------succesully run-----------------" << endl;
    } else {
        cout << "---------------------error---------------------" << endl;
    }

}