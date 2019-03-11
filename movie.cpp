#include <iostream>
#include <string>

using namespace std;

int main()
{
    //get the name of the movie
    string movie;
    cout << "what\'s the name of the movie?" << endl;
    getline(cin, movie);

    //get the metascore
    double metascore = 0;
    cout << "what\'s the Metascore rating for " << movie << "? \n"
         << endl;
    cin >> metascore;

    //get the Tomatometer score
    double tomatometer = 0;
    cout << "what\'s the tomatometer rating for " << movie << "?\n"
         << endl;
    cin >> tomatometer;

    // calculate average
    double average = (metascore + tomatometer) / 2.0;

    //rescare average
    double rescaleScore = average / 10;

    //display result of our calculation
    cout << "Our average on a 10 point sale : " << movie << " is " << rescaleScore << endl;
}
