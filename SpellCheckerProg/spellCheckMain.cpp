#include "spellCheck.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    std::string target = "progrum "; // enter a different word in quotations to test
    SpellCheck check; // to be abe to call ifstream actions
    cout << "Spell Check " << endl;
    std::ifstream infile ("words.txt"); // "words.txt is name of my dictionary"
    if (!infile.is_open()) throw std::exception();
    check.load_dictionary(infile);
    check.find(target);
    infile.close();
    check.suggest(target, 3); // gives three suggestions
};
