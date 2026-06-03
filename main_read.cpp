#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
    int M;
    double score1, score2, sum, avg;
    string sname;
    ifstream ifs;
    string num;

    // TODO: open "students.txt" for reading
ifs.open("students.txt");
ifs >> num;
cout << "first line: " << num << endl;
ifs >> num;
cout << "second word: " << sname << endl;
ifs >> num;
cout << "second line 2nd word: " << num << endl;
ifs >> num;
cout << "second line 3rd word: " << num << endl;
ifs.clear();
ifs.seekg(0);
    // TODO: check if file opened successfully; print error and exit if not
if(!ifs.is_open()) {
        cout << "Error opening file." << endl;
        exit(0);
    }
    // TODO: read M from ifs, print "Total M students"
    ifs >> M;
    cout << "Total " << M << " students" << endl;

    for (int i = 0; i < M; i++)
    {ifs >> sname >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;



    cout << "Student Name: " << sname << " score1: " << score1 
             << " score2: " << score2 << " Sum: " << sum 
             << " Avg: " << avg << endl;}
    ifs.close();
    return 0;
    }




    