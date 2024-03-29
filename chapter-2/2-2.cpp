#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    
    const string greeting = "Hello, " + name + "!";
    const int row_pad = 1;
    const int rows = row_pad * 2 + 3;
    const int col_pad = 4;
    const string::size_type cols = greeting.size() + col_pad * 2 + 2;
    
    cout << endl;
    for (int r = 0; r < rows; ++r) {
        string::size_type c = 0;
        while (c != cols) {
            if (r == row_pad + 1 && c == col_pad + 1) {
                cout << greeting;
                c += greeting.size();        
            } else {
                if (c == 0 || c == cols - 1 || r == 0 || r == rows -1)
                    cout << "*";
                else
                    cout << " ";
                ++c;
            }
        }
        cout << endl;
    }
    return 0;
}
