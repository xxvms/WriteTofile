#include <iostream>
#include <fstream>                                                      // for file I/O
#include <string>

int main() {
    char ch = 'x';
    int j = 7999997;
    double d = 6.02;                                                    // strings without
    std::string string1 = "und due licko";                                      // strings without embedded spaces
    std::string string2 = "this is file writen to the system";
    std::ofstream outfile("fdata.txt");                                 // create ofstreem objects

    outfile << ch                                                       // insert (wtite) data
            << j
            << ' '                                                      // need space beetwen numbers
            << d
            << string1
            << ' '
            << string2;
    std::cout << "File Written\n";
    system("pause");
    return 0;
}