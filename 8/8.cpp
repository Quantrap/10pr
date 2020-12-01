#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    std::string line;
    setlocale(NULL, "rus");
    ofstream out("G:\\2\\МДК 02.02\\10\\10pr\\8\\g.txt");
    ifstream in("G:\\2\\МДК 02.02\\10\\10pr\\8\\f.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            out << line << " Длина строки = " << line.length() << endl;
        }
    }
    in.close();
    out.close();

}