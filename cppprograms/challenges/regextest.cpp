#include<iostream>
#include<regex>
#include<vector>

using namespace std;

int
main()
{
    //std::string line("some words: with some punctuation.");
    std::string line("somewordswithsomeunctuation");
    //std::regex words("[\\w]+");
    std::regex words("[[:alpha:]]+");
   // std::sregex_token_iterator i(line.begin(), line.end(), words);
  //  std::vector<std::string> list(i, std::sregex_token_iterator());
  //  for (auto j = list.begin(), e = list.end(); j != e; ++j)
  //      std::cout << *j << '\n';

   cout << std::regex_match(line,words) << endl;
}
