#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{

    std::string line;
    setlocale(NULL, "rus");
    fstream f("G:\\2\\МДК 02.02\\10\\10pr\\7\\f.txt");
    fstream g("G:\\2\\МДК 02.02\\10\\10pr\\7\\g.txt");
    fstream h("G:\\2\\МДК 02.02\\10\\10pr\\7\\h.txt");
    
    if (!g.eof()) 
    {
       
            getline(g, line);
            h << line;
            line == line.erase(line.size());
        
    }
    if (!f.eof()) 
    {
       
            getline(f, line);
            g << line;
            line == line.erase(line.size());
        
    }
    if (!h.eof())
    {

            getline(h, line);
            f << line;
            line == line.erase(line.size());
        
    }
    f.close();
    g.close();
    h.close();
}
