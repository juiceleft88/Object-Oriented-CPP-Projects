#pragma once
#include<istream>
#include<string>
#include<vector>
#include<set>

class SpellCheck{
    private: 
    std::set<std::string> word_set; //<set> as asked for in instructions for storage
    
    public: //public members to define
    void load_dictionary(std::istream&);
    bool find(const std::string&) const;
    std::vector<std::string> suggest(const std::string&, size_t n) const;

};
