#include<iostream>
using namespace std;

class hello {
    private:
    string name;
    string city;  
    int per;
    int age;
    int mobile;
    public:
    void details(){
        cout<<"enter your name";
        cin>>name;
        cout<<"enter your city";
        cin>>city;
        cout<<"enter your 12 per";
        cin>>per;
        cout<<"enter your age";
        cin>>age;
        cout<<"enter your mobile";
        cin>>mobile;
    }
    void admin(){
        
        cout<<"admin block";
        cout<<name<<endl;
        cout<<city<<endl;
        cout<<per<<endl;
        cout<<age<<endl;
        cout<<mobile<<endl;
    }
    void principal(){
        
        cout<<"principal block";
        cout<<name<<endl;
        cout<<city<<endl;
        cout<<per<<endl;
        cout<<mobile<<endl;
    }
    void hod(){
        
        cout<<"hod block";
        cout<<name<<endl;
        cout<<per<<endl;
        cout<<mobile<<endl;
    }
};

int main(){
    hello s1;
    string dep;
    cout<<"enter your department";
    cin>>dep;
    s1.details();
    if(dep=="admin"){
        s1.admin();
    }
    else if(dep=="principal"){
        s1.principal();
    }
    else if(dep=="hod"){
        s1.hod();
    }
    else {
        cout<<"no dep found";
    }
}