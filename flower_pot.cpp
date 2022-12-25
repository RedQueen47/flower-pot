#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <stdlib.h>
#define c1 "\033[031m"
#define c2 "\033[032m"
#define c3 "\033[033m"
#define c4 "\033[034m"
#define c5 "\033[035m"
#define c6 "\033[036m"
#define c7 "\033[037m"
#define res "\033[0m"
int main()
{
	using namespace std;
	using namespace this_thread;
	using namespace chrono_literals;
using chrono::system_clock;

char name[6] ;
cout<<"please enter 1 by 1 in rows order!"<<endl;
cout<<"like these!"<<endl;
cout<<"0"<<endl;
cout <<"0"<<endl;
cout <<"0"<<endl;
cout <<"0"<<endl;
cout <<"only 6 character allowed!"<<endl;
for(int i = 1; i <=6; i ++ ){
	cout<<"enter your (nick name) :";
		cin>>name[i];
	}
	
			cout<<"\n";
				cout<<"\n";
					cout<<"\n";
						cout<<"\n";
							cout<<"\n";					
		cout <<c5<<"               ∆   ∆\n"<<"             ∆       ∆\n"<<"           ∆    ∆ ∆    ∆\n"<<"           ∆   ∆   ∆   ∆\n"<<"            ∆   ∆ ∆ "<<"  ∆\n"<<"               ∆   ∆\n"<<"                 |\n"<<"                 |\n"<<endl;            
	
	for(int i = 0 ; i < 5 ; i ++ ){
	sleep_for(20000000ns);
	cout <<" "<<c1 <<name[1]<<res<<c7<<"  "<<name[1]<<"                         "<<c5<<name[1]<<res<<"  "<<c5<<name[1]<<res<<endl;
	
	
	
	sleep_for(200000000ns);
	cout <<"  "<<c2 <<name[2]<<res<<c4<<"   "<<name[2]<<"                     "<<c7<<name[2]<<res<<"   "<<c7<<name[2]<<res<<endl;
	
	
	
	sleep_for(200000000ns);
	cout <<"   "<<c3 <<name[3]<<res<<c5<<"     "<<name[3]<<"                "<<c1<<name[3]<<res<<"    "<<c2<<name[3]<<res<<endl;
	
	
	
	sleep_for(200000000ns);
	cout <<"    "<<c4 <<name[4]<<res<<c1<<"      "<<name[4]<<"            "<<c2<<name[4]<<res<<"     "<<c5<<name[4]<<res<<endl;
	
	
	
	sleep_for(200000000ns);
	cout <<"      "<<c5<<name[5]<<res<<c3<<"       "<<name[5]<<"      "<<c3 <<name[5]<<res<<"      "<<c4<<name[5]<<res<<endl;
	
	
	sleep_for(200000000ns);
	cout <<"        "<<c6<<name[6]<<res<<c1<<"        "<<name[6]<<c4 <<""<<name[6]<<res<<"       "<<c1<<name[6]<<res<<endl;
	}
	sleep_for(200000000ns);
	system("color 9");
	cout<<"      #########®®®®®#########\n"<<"       #######be Happy######\n"<<"        ###################\n"<<"         #################\n"<<"          ###############\n"<<"           #############\n"<<"            ###########\n"<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
	return 0;
	//under development.
}