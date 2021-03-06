#include <iostream>
#include <fstream>
#include <thread>
#include <chrono>
#include <ctime>


using namespace std;

void DoWork()
{
    int n = 0;
    while(n < 5)
    {   
        cout << "I am doing some works " << endl;
        this_thread::sleep_for(chrono::seconds(1));
        n++;
    }
}

void DoRest()
{
    int n = 0;
    while(n < 5)
    {   
        cout << "I am sleeping " << endl;
        this_thread::sleep_for(chrono::seconds(1));
        n++;
    }
}

int main()
{
    cout << "Hello Qi!" << endl;
    // current date/time based on current system
    time_t now = time(0);
   // convert now to string form
    char* dt = ctime(&now);
  
    cout << "The local date and time is: " << dt << endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout << "I am writing some words down ... " << endl;
    ofstream logfile ("logs/logs.txt");
    logfile << "----------------------------- \n" ;
    logfile << "The local date and time is " + string(dt) + "\n" ;
    logfile.close();

    this_thread::sleep_for(chrono::seconds(1));
    cout << "Test Docker Image Finish"<< endl;

   
    // thread worker_one(DoWork);
    // thread worker_two(DoRest);
    // worker_one.join();
    // worker_two.join();
    // cin.get();
    return 0;
}
