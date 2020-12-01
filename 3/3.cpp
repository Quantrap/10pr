#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;
int main()
{
    char S;
    int k=0;
    std::string line;
    setlocale(NULL, "rus");
    ofstream out("G:\\2\\МДК 02.02\\10\\10pr\\3\\g.txt");
    ifstream in("G:\\2\\МДК 02.02\\10\\10pr\\3\\f.txt");
    cout << "Введите букву:";
    cin >> S;
    if (in.is_open())
    {
        while (getline(in, line))
        {
            if (line[0] == S) k++;
        }
    }
    cout << "Количество строк в файле, начинающихся с данной буквы =" << k << endl;
    in.close();
    out.close();

}
