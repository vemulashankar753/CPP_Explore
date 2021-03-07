#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
//This is an example for Fluent Build where add_child can be called multiple times in a same line like
 // root.add_child(s1,s2).add_child(s3,s4);

 struct HtmlBuilder;
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

    static HtmlBuilder build(string root_name){
        return root_name; //Implicit Conversion from string to the HtmlBuilder
    }
};

struct HtmlBuilder{
    HtmlElement root;
    HtmlBuilder(string root_name){
        root.name = root_name;
    }
    HtmlBuilder& add_child(string child_name,string child_text){
        HtmlElement e{child_name,child_text};
        root.elements.emplace_back(e);
        return *this;
    }

    HtmlBuilder* add_child_2(string child_name,string child_text){
        HtmlElement e{child_name,child_text};
        root.elements.emplace_back(e);
        return this;
    }

    string str() const{
        return root.str();
    }

    //Returning a copy of the root element
    operator HtmlElement() const{
        return root;
    }
};
int main() {
    std::cout << "Hello, World!" << std::endl;

    HtmlBuilder hb {"ul"};
    hb.add_child("li", "hello").add_child("li", "world");

    HtmlBuilder hb1 = HtmlElement::build("ul1").add_child_2("li", "hello")->add_child_2("li","world");

    //This is also valid as we declare operator()
    HtmlElement he2 = HtmlElement::build("ul1").add_child_2("li", "hello")->add_child_2("li","world");

    cout << hb.str() << endl;
    return 0;
}

