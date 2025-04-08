#include <iostream>
#include <fstream> // malnipulate with file

using namespace std;

int main()
{


    fstream outFile;

    string outputFileName = "text.txt";

    outFile.open(outputFileName, ios::out); //type output file 

    if(outFile.is_open())
    {
        outFile << "Hello World" << endl;
        outFile << 123 << endl;
        outFile << "Tao O day ne" << endl;
        outFile.close();
    }
    else
    {
        cout << "Could not create file: " << outputFileName << endl;
    }


///// Input File
    string inFileName = "text.txt";
    ifstream inFile;
    inFile.open(inFileName);

    if(inFile.is_open())
    {
        string line;
        while(!inFile.eof())
        {
        getline(inFile, line);
        cout << line << endl;

        }

        inFile.close();
    }
    else
    {
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}