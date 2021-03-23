#include <iostream>

using namespace std;

/*** This is a State Machine implementation , but its quite complicated and outdated
with a new implementation it will be good like with "enum class" *******/

class LightSwitch;

struct State{
    
    virtual void On(LightSwitch* ls){
        cout << "Light is already ON" << endl;
    }
    virtual void Off(LightSwitch* ls){
        cout << "Light is already OFF" << endl;
    }
    
};

struct OnState: State{
    OnState(){
        cout << "Light is turned ON" << endl;
    }
    void Off(LightSwitch* ls) override;
};

struct OffState: State{
    OffState(){
        cout << "Light is turned OFF" << endl;
    }
    void On(LightSwitch* ls) override;
};

class LightSwitch{
    State* state;
public:
    LightSwitch(){
        state = new OffState();
    }
    void setState(State* state){
        this->state = state;
    }
    
    void on(){
        state->On(this);
    }
    void off(){
        state->Off(this);
    }
};

void OffState::On(LightSwitch* ls)
{
    cout << "Switching Light On:" << endl;
    ls->setState(new OnState());
    delete this;
};


void OnState::Off(LightSwitch* ls)
{
    cout << "Switching Light Off:" << endl;
    ls->setState(new OffState());
    delete this;
};


int main(){
    
    LightSwitch swt;
    
//    State* onstate = new State();
//    swt.setState(onstate);
    swt.on();
    swt.off();
    
}

