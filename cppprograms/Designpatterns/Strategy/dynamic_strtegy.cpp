#include <iostream>
#include <sstream>
#include <string>
#include <memory>
#include <vector>


using namespace std;

enum class OutputFormat{
//enum class format{
    html,
    text
};

struct ListStrategy{
    virtual void start(ostringstream& oss){
        
    }
    virtual void add_list_item(ostringstream& oss, const string& s) = 0;
    virtual void end(ostringstream& oss){
        
    }
};

struct HTMLListStrategy: ListStrategy{
    void add_list_item(ostringstream& oss, const string& s) override{
        oss << "*" << "HTML Processing " << s << "\n";
    }
};

struct TEXTListStrategy: ListStrategy{
    void add_list_item(ostringstream& oss, const string& s) override{
        oss << "*" << s << "\n";
    }
};


//Dynamic Approach
struct TextProcessor{
    void clear(){
        oss.str("");
        oss.clear();
    }
    void append_list(const vector<string>& items){
        list_strategy->start(oss);
        for(auto& item: items){
            list_strategy->add_list_item(oss,item);
        }
    }
    void set_output_format(const OutputFormat& format){
        switch(format){
            case OutputFormat::html:
                list_strategy = make_unique<HTMLListStrategy>();
                break;
            case OutputFormat::text:
                list_strategy = make_unique<TEXTListStrategy>();
                break;
        }
    }
    
    std::string getdata(){
        return oss.str();
    }
private:
    ostringstream oss;
    std::unique_ptr<ListStrategy> list_strategy;
};

int main(){
    TextProcessor tp;
    std::vector<std::string> items {"shankar", "shankar1", "shankar2"};
    tp.set_output_format(OutputFormat::html);
    tp.append_list(items);
    cout << "HTML data is : " << tp.getdata() << endl;
    tp.clear();
    tp.set_output_format(OutputFormat::text);
    tp.append_list(items);
    cout << "TEX  data is : " << tp.getdata() << endl;





}
