#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    std::string line;
    int k = 0;
    setlocale(NULL, "rus");
    ofstream out("G:\\2\\МДК 02.02\\10\\10pr\\4\\g.txt");
    ifstream in("G:\\2\\МДК 02.02\\10\\10pr\\4\\f.txt");
    if (in.is_open())
    {
        std::string::size_type max = 0;
        while (getline(in, line))
        {
            if (max < line.length()) { max = line.length(); k=max; }
        }
    }
    cout << "Длина наибольшей строки = " << k << endl;
    in.close();
    out.close();

}
