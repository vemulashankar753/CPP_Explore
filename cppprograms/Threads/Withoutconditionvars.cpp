#include <iostream>
#include <thread>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

bool haveIarrived = false;
int dista_my_destin = 10;
int dist_covered = 0;


bool keep_driving(){
    while(true){
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        dist_covered++;
        
    }
    
    return false;
    
};

void keep_awake_all_night(){
    
    while(dist_covered<dista_my_destin){
      std::cout << "Keep checking" << dist_covered << endl;
       std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
    
    std::cout << "Finally I am there, distance covered" << dist_covered << endl;
    
};

void set_thealarmandtakeanap(){
    
    if( dist_covered < dista_my_destin ){
        std::cout << "let  me take a nap" << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10000));
    }
        
   std::cout << "Finally I am there, distance covered" << dist_covered << endl;
    
};


int main(){
    
    std::thread driver_thread(keep_driving);
    std::thread keep_awake_all_nightthread(keep_awake_all_night);
    std::thread set_thealarm_thread(set_thealarmandtakeanap);
    driver_thread.join();
    keep_awake_all_nightthread.join();
    set_thealarm_thread.join();
    

    return 0;
} 
