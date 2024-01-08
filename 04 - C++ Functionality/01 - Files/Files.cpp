#include <iostream>
// the 'fstream' library exposes file access classes
#include <fstream>
using namespace std;

int main()
{
    // The 'ofstream' class allows writing a file (o: output)
    ofstream outFile("./data/test.txt");
    outFile << "Here's some text I will write to the file.";
    outFile.close();

    // The 'ifstream' class allows reading a file (i: input)
    ifstream inFile("./data/test.txt");
    string inText;
    while (getline(inFile, inText))
    {
        cout << inText << endl;
    }
    inFile.close();

    // The 'fstream' class allows both read and write operations
    fstream writeFile("./data/test.txt");
    writeFile << "Here is the replacement text I am writing to the file...";
    writeFile.close();

    fstream readFile("./data/test.txt");
    while (getline(readFile, inText))
    {
        cout << inText << endl;
    }    
    readFile.close();
    
    return 0;
}