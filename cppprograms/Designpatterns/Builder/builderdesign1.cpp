#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;


//Builder Design pattern example

struct HtmlElement{
    string name,text;
    vector<HtmlElement> elements;
    const size_t indent_size = 2;

    HtmlElement(){
    }

    HtmlElement(const string& n,const string& t):name(n),text(t){
    }

    string str(int indent=0) const
    {
        ostringstream  oss;
        string ind(indent_size*indent, ' ');
        oss << ind << "<" << name << ">" << endl;

        if(text.size() > 0){
            oss << string(indent_size*(indent+1), ' ') << text << endl;
        }
        for(const auto& e: elements) {
            oss << e.str(indent + 1);
        }
        oss << indent << "</" << name << ">" << endl;
        return oss.str();
    }
};

struct HtmlBuilder{
    HtmlElement root;
    HtmlBuilder(string root_name){
        root.name = root_name;
    }
    void add_child(string child_name,string child_text){
        HtmlElement e{child_name,child_text};
        root.elements.emplace_back(e);
    }

    string str() const{
        return root.str();
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;

    HtmlBuilder hb {"ul"};
    hb.add_child("li", "hello");
    hb.add_child("li", "world");
    cout << hb.str() << endl;
    return 0;
}

