#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int M;
    double score1, score2, sum, avg;
    string sname;
    ifstream ifs;

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
    // TODO: check if file opened successfully; print error and exit if not

    // TODO: read M from ifs, print "Total M students"

    for (int i = 0; i < M; i++)
    {ifs >> sname >> score1 >> score2;
        sum = score1 + score2;
        avg = sum / 2.0;
        r'student name:\s+tom\s+score1:\s+85\s+score2:\s+90\s+sum:\s+175\s+avg:\s+87.5
        cout << "Student Name: " << sname << ", score1: " <<
        "score1:" << score1 << " " << "score2:" << score2 << " " << "sum:" << sum << " " << "avg:" << avg << endl;

        // TODO: read stuName, score1, score2 from ifs
        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        // TODO: print Student Name, score1, score2, Sum, Avg
    }
    ifs.close();
    return 0;
}
