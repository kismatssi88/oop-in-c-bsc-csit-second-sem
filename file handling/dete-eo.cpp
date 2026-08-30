#include <iostream>
#include <fstream>
using namespace std;
 
int main() {
    ofstream fout("eoftest.txt");
    fout << "Line One" << endl << "Line Two" << endl << "Line Three";
    fout.close();
 
    ifstream fin("eoftest.txt");
    if (!fin) {
        cout << "Error opening file!";
        return 1;
    }
    string line;
    cout << "----- File Content -----" << endl;
    while (!fin.eof()) {               // proper use: check eof() AFTER attempting read
        getline(fin, line);
        if (!fin.eof())                // guard against printing the last line twice
            cout << line << endl;
        else if (fin.fail() == false)  // last successful getline
            cout << line << endl;
    }
    cout << "\nEnd of file reached." << endl;
    fin.close();
    return 0;
}
