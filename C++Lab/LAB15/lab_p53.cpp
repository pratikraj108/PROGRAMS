//WAP to perform read/write operation on a file sequentially. using gets() and puts() function.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("file.txt");
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    //  write using put fxn.
    for (int i = 0; i < str.length(); i++)
    {
        fout.put(str[i]);
    }
    fout.close();

    ifstream fin("file.txt");  // open file 

    // read using get fxn.
    char ch;
    while (fin.get(ch))
    {
        cout << ch;
    }
    fin.close();
    return 0;
}