#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int ID;
    string movie;
    string day;
    string bye;

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    getline(cin,name);
    cout<<"Fahsai: Wow!!! "<<name<<" that is a really cool name.\nFahsai: I think you are Engineering student. What is your student ID?\n";
    cout<<name<<": ";
    cin>>ID;
    cin.ignore();
    cout<<"Fahsai: I think you may be GEAR "<<ID/10000000-12<<".  I have a free movie tickets for you.\nFahsai: Let's go to cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout<<name<<": ";
    getline(cin,movie);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<<name<<": ";
    getline(cin,day);
    cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you.\n";
    cout<<name<<": ";
    getline(cin,bye);
    cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/";

    return 0;
}