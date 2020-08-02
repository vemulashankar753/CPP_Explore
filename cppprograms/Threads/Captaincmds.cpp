//
//  CaptainCmds.cpp
//  CPP_Learning
//
//  Created by Shankar Vemula on 7/18/20.
//  Copyright © 2020 Shankar Vemula. All rights reserved.
//

#include <iostream>
#include <thread>
#include <string>

using namespace std;


void CleanCommand(){
   // std::this_thread::sleep_for(std::chrono::milliseconds(5000));
    cout << "This is A cleaning command" << endl;
};

void FullSpeedCommand(){
    cout << "This is fullspeepd Command" << endl;
    
};

void StopCommand(){
    cout << "This is Stop Command" << endl;
    
};

int main(){
    
    while(1){
        int cmdId;
        cout << "Enter the command: " << endl;
        cin >> cmdId;
//        std::thread t1(CleanCommand);
 //       std::thread t2(FullSpeedCommand);
 //       std::thread t3(StopCommand);
        
        if(cmdId == 1){
            std::thread t1(CleanCommand);
            t1.detach();
        } else if(cmdId == 2){
             std::thread t2(FullSpeedCommand);
            t2.join();
        }else if(cmdId == 3){
            std::thread t3(StopCommand);
            t3.join();
            break;
        }else {
            cout << "Invalid Command is issued: " << cmdId << endl;
        }
    }
 
    return 0;
}
    

