//Authors: 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int year;
    string kingAdj1;
    string kingAdj2;
    string nounThing;
    string nounPerson;
    string verbDishes;

    cout << "Enter a number for year: ";
    cin >> year;
    cout << "Enter a description for the king: ";
    cin >> kingAdj1;
    cout << "Enter a mood for the king: ";
    cin >> kingAdj2;
    cout << "Enter anything that can be cook: ";
    cin >> nounThing;
    cout << "Enter a person who can cook: ";
    cin >> nounPerson;
    cout << "Enter a verb relates to making a dish: ";
    cin >> verbDishes;

    cout << endl;
    cout << "Your Mad Libs Story:" << endl;


    cout << "Once upon a time, in year "
            << year << " was a " << kingAdj1 << " king." << endl;
    cout << "The king was not " << kingAdj2 << " by the way his "
            << nounThing << " was cooked." << endl;
    cout << "To solve such tragedy, he hired a " << nounPerson <<
            " to " << verbDishes << " his future dishes." << endl;

  return 0;
}
