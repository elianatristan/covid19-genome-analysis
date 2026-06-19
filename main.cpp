// COVID-19 Gene Sequence Analysis
// Author: Eliana Tristan
// Date: 03/30/2026

#include <iostream> //for printing the output
#include <fstream> // for file input, and sequence outputs
#include <iomanip> // needing to format set precision formatting 
using namespace std;

int main() {

    ifstream file; //input file stream (file object)
    file.open("covid_19_sequence.txt"); //connect the actual file to file object

    if (!file) {
        cout << "File could not be opened." << endl;
        return 0;
    }

    char ch;

    int countA = 0;
    int countT = 0;
    int countC = 0;
    int countG = 0;
    int total = 0;

    while (file >> ch) //keeping reading one letter from the file into ch, this is the loop
   {            
        if (ch == 'A') { //if ch is A add to A count and add to total
            countA++;
            total++;
        }
        else if (ch == 'T') { //if ch is T add to T count and add to total
            countT++;
            total++;
        }
        else if (ch == 'C') {
            countC++;
            total++;
        }
        else if (ch == 'G') {
            countG++;
            total++;
        }
    }

    file.close();

    double percentA = (double)countA / total * 100;
    double percentT = (double)countT / total * 100;
    double percentC = (double)countC / total * 100;
    double percentG = (double)countG / total * 100;

    cout << fixed << setprecision(2);

    cout << "COVID-19 sequence analysis:" << endl;
    cout << total << " nucleotides in the sequence." << endl;
    cout << "Sequence breakdown:" << endl;

    cout << "A: " << countA << " " << percentA << "%" << endl;
    cout << "T: " << countT << " " << percentT << "%" << endl;
    cout << "C: " << countC << " " << percentC << "%" << endl;
    cout << "G: " << countG << " " << percentG << "%" << endl;

    return 0;
}
