#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <initializer_list>


using namespace std;

//Groovy Builder Design Pattern

class Tag{

private:
    friend ostream& operator<<(ostream& os,const Tag& t){

        os << "<" << t.name;
        for(const auto& att: t.attributes){
            os << " " << att.first << "=\"" << att.second << "\"";
        }

        if(t.children.size() == 0 && t.text.length() == 0){
            os << "/>" << std::endl;
        }else {
            os << ">" << endl;
            if (t.text.length()) {
                os << t.text << endl;
            }
            for (const auto &child: t.children) {
                os << child;
            }
            os << "</" << t.name << ">" << std::endl;
        }

        return os;
    }

protected:
public:
    Tag(const string& n, const string& t):name(n),text(t){

    }
    Tag(const string& name, const vector<Tag>& children):name(name),
    children(children){

    }
    string name,text;
    std::vector<Tag> children;
    vector<pair<string,string>> attributes;

};

struct P: Tag
{
    P(const string& text): Tag("p",text){

    }
    P(initializer_list<Tag> children):Tag{"p",children}{

    }
};

struct IMG: Tag{
    explicit  IMG(const string& url): Tag{"img", ""}{
        attributes.emplace_back(make_pair("src",url));
    }
};


int main() {
    cout << P{
        IMG {"http://pokemon.com/pikachu.ping"}
    }
}

