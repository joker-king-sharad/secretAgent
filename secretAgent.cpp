#include<iostream>
using namespace std;

class dua{
    protected:
    string sms;
    
    public:
   
    void mes(){
        cout<<"Enter Your SMS : ";
        cin>>sms;
    }
    void code(int coe){
        if(coe==5878){
            cout<<"Your message is '"<<sms<<"'\n";
        }else{
            cout<<"Code Is failed";
        }
    }
    class fil{
        public:
        fil(){
            cout<<"Nested Class";
        }
    };
};
class design:public dua{
    protected:
    int adminPass=22654;
    string adminUser="moster";
    string agentUser="rocky";
    int agentPass=8564;
    string missCOde;

    public:
     void dua(){
        cout<<"\n---------------Security Organization----------------\n";
    }
    void dash(){
        cout<<"\n----------------------------------------------------\n";
    }
    
    void admin(){
        dash();
        cout<<"Welcome To Admin Login\n";
        dash();
        string user;
        int code;
        cout<<"Username: ";
        cin>>user;
        cout<<"PIN: ";
        cin>>code;
        if(user==adminUser&&adminPass==code){
            cout<<"Login Susseful";
            cout<<"\nFetere comming soon";
            menu();
        }else{
            cout<<"Failed";
            menu();
        }

    }
    void agent(){
        dash();
        cout<<"Welcome To Special Agent Login\n";
        dash();
        string user;
        int code;
        cout<<"Username: ";
        cin>>user;
        cout<<"PIN: ";
        cin>>code;
        if(user==agentUser&&agentPass==code){
            cout<<"Login Susseful";
            cout<<"Your Mission is "<<missCOde<<endl;
            char a;
            cin>>a;
            menu();
           
        }else{
            cout<<"Failed";
            menu();
        }
    }
    void menuShow(){
        cout<<"1.Login Admin\n2.Login Agent System\n3.Login Mission Allowed\n4.High Authority\n";
        dash();
    }
    void miss(){
        
        cout<<"Mission Id Enter: ";
        cin>>missCOde;
        menu();

    }
    void auth(){
        cout<<"This Option is Comming soon";
        menu();

    }
    void menuItem(int opt){
        switch(opt){
            case 1:
            cout<<"Login Admin";
            admin();
            break;
            case 2:
            cout<<"Login Agent System";
            agent();
            break;
            case 3:
            cout<<"Login Mission Allowed";
            miss();
            break;
            case 4:
            cout<<"High Authority";
            auth();
            break;
            default:
            menu();
        }
    }
    void menu(){
        system("clear");//Linux Command & you are use Windows to use "CLS"

        dua();
        int select;
        dash();
        menuShow();
        cout<<"Such Option: ";
        cin>>select;
        menuItem(select);
    }
};


int main(){
    design d;
    d.menu();
    return 0;
}
