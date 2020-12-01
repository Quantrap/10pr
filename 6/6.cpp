#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{

    std::string line;
    setlocale(NULL, "rus");
    ofstream out("G:\\2\\МДК 02.02\\10\\10pr\\6\\g.txt");
    ofstream out1("G:\\2\\МДК 02.02\\10\\10pr\\6\\h.txt");
    ifstream in("G:\\2\\МДК 02.02\\10\\10pr\\6\\f.txt");
    if (in.is_open())
    {
        while (getline(in, line))
        {
            string p;
            for (std::string::size_type i = 0; i < line.length() + 1; i++)
            {
                if (line[i] != ' ')
                {
                    p += line[i];
                }
                else
                {
                    int x = atoi(p.c_str());
                    if (x % 2 == 0) { out << x << " "; }
                    if (x % 2 != 0) { out1 << x << " "; }
                    p = "";
                }
            }
            int x = atoi(p.c_str());
            if (x % 2 == 0) { out << x << " "; }
            if (x % 2 != 0) { out1 << x << " "; }
            p = "";
            out << endl;
            out1 << endl;
        }
    }
    in.close();
    out.close();

}
