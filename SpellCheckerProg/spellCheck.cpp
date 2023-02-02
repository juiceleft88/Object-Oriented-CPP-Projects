#include "spellcheck.hpp"
#include <istream>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

void SpellCheck::load_dictionary(std::istream& d) // defining load_dictionary function to insert our target word
{
    std::string target;
    while (d >> target)
    {
        word_set.insert(target);
    };
};

bool SpellCheck::find(const std::string& correction) const{ // bool function to check whether words are in the dictionry or not
    for(auto i = word_set.begin(); i != word_set.end(); i++)
    {
        if(correction == (*i))
        {
            cout << correction << "Not found." << endl;
            return true;
        }
    };
    cout << correction << "Word found" << endl;
    return false;
};

int Levenshtein(const std::string &w1, const std::string &w2) // function to compute Levenshtein distance, which will be used in suggest()
{ 
    const size_t
    a(w1.size()), b(w2.size());

    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    size_t lev[b + 1];
    for(size_t c=0; c<=b; c++) lev[c] = c;
    size_t i {0};
    for (char const &c1 : w1)
    {
        lev[0] = i+1;
        size_t corner {i}, j{0};
        for (char const &c2 : w2)
        {
            size_t upper {lev[j+1]};
            if (c1 == c2) lev[j+1] = corner;
            else{
                size_t t(upper<corner? upper:corner);
                lev[j+1] = (lev[j] < t?lev[j]:t)+1;
            }
            corner = upper;
            j++;
        }
        i++;
    }
return lev[b];
};

std::vector<std::string> SpellCheck::suggest(const std::string& word2, size_t n) const // suggest function which returns vector of words using Lev distance above
{
    int count = 0;
    int q = 0;
    std::set<std::pair<int, std::string>> order_set = {};
    std::vector<std::string> final = {};
    for(auto i = word_set.begin(); i != word_set.end(); i++)
    {
        count = Levenshtein(word2, (*i));
        order_set.insert(std::make_pair(count,(*i) ));
    };

    cout << "The correct word could be... " << endl;
    for(auto const &p: order_set)
    {
        if(((q < n) && (p.first > 0)))
        {
            final.push_back( (p.second));
            cout << p.second << endl;
            q++;
        };
    };
  
};
