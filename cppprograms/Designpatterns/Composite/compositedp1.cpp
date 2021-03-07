#include <iostream>
#include <vector>
#include <string>

/***In this example both GraphObject and corresponding Group will work in a Same manner***/

using namespace std;

struct GraphObject{

    virtual void draw()=0;
};

struct Circle: GraphObject{
    void draw(){
        cout << "This is Circle: " << endl;
    }
};

struct Group: GraphObject{
    string name;
    vector<GraphObject*> objects;
    Group(const string& name):name(name){

    }

    void draw() override{
        cout << "Group: " << name.c_str() << "contains: " << endl;
        for(auto&& o: objects){
            o->draw();
        }
    }
};

int main() {

    Group gp("root");

    Circle c1,c2;

    gp.objects.push_back(&c1);

    gp.draw();

    Group subgroup("sub");

    subgroup.objects.push_back(&c2);

    gp.objects.push_back(&subgroup);

    gp.draw();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

