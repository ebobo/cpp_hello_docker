#include <iostream>
#include <thread>
#include <chrono>

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
    thread worker_one(DoWork);
    thread worker_two(DoRest);
    worker_one.join();
    worker_two.join();
    cin.get();
//    return 0;
}
