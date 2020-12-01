#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{

    std::string line;
    setlocale(NULL, "rus");
    ofstream out("G:\\2\\МДК 02.02\\10\\10pr\\2\\g.txt");
    ifstream in("G:\\2\\МДК 02.02\\10\\10pr\\2\\f.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            string p;
            for (std::string::size_type i = 0; i < line.length() + 1; i++)
            {
                if (line[i] != 'C')
                {
                    p += line[i];
                }
                else
                {
                    out << p << "C++";
                    p = "";
                }
            }
            out << p;
            out << endl;
        }
    }
    in.close();
    out.close();

}
