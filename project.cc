#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
void mainmenu();
class management
{
  public:
  management()
  {
    mainmenu();
  }


};
class Details
{
  public:
  static string name;
  string phone;
  string gender;
  string city;
  static string customer_id;
  int age;
  char arr[100];
  void information()
  {
    cout<<"Enter the customer id:";
    cin>>customer_id;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the phone:";
    cin>>phone;
    cout<<"Enter the gender:";
    cin>>gender;
    cout<<"Enter the age:";
    cin>>age;
    cout<<"Enter the city:";
    cin>>city;

  }
};
class Registration
{
  public:
  static int choice;
  int back;
  int flight_choice;
  static float charges;
  void flights()
  {
    cout<<"Enter the destination number"<<endl;
    string country[5]={"India","America","Austarlia","Canada","Germany"};
    for(int i=0;i<5;i++)
    {
      cout<<(i+1)<<":"<<country[i]<<endl;
    }
    cout<<"choice:";
    cin>>choice;
    switch(choice)
    {

      case 1:
      cout<<"_____Welcome to Indian Airlines____"<<endl;
      cout<<"Following are the flight details"<<endl;
      cout<<"________1_______"<<endl;
      cout<<"Ind-100"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________2_______"<<endl;
      cout<<"Ind-101"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________3_______"<<endl;
      cout<<"Ind-102"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"Enter the flight number"<<endl;
      cin>>flight_choice;
      switch(flight_choice)
      {
        case 1:
        cout<<"You are successfully booked Ind-100"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 2:
        cout<<"You are successfully booked Ind-101"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 3:
        cout<<"You are successfully booked Ind-102"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
      }
      break;
      case 2:
      cout<<"_____Welcome to America Airlines____"<<endl;
      cout<<"Following are the flight details"<<endl;
      cout<<"________1_______"<<endl;
      cout<<"AME-100"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________2_______"<<endl;
      cout<<"AME-101"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________3_______"<<endl;
      cout<<"AME-102"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"Enter the flight number"<<endl;
      cin>>flight_choice;
      switch(flight_choice)
      {
        case 1:
        cout<<"You are successfully booked AME-100"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 2:
        cout<<"You are successfully booked AME-101"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 3:
        cout<<"You are successfully booked AME-102"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
      }
      break;
      case 3:
      cout<<"_____Welcome to Australia Airlines____"<<endl;
      cout<<"Following are the flight details"<<endl;
      cout<<"________1_______"<<endl;
      cout<<"AUS-100"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________2_______"<<endl;
      cout<<"AUS-101"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________3_______"<<endl;
      cout<<"AUS-102"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"Enter the flight number"<<endl;
      cin>>flight_choice;
      switch(flight_choice)
      {
        case 1:
        cout<<"You are successfully booked AUS-100"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 2:
        cout<<"You are successfully booked AUS-101"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 3:
        cout<<"You are successfully booked AUS-102"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
      }
      break;
      case 4:
      cout<<"_____Welcome to CANADA Airlines____"<<endl;
      cout<<"Following are the flight details"<<endl;
      cout<<"________1_______"<<endl;
      cout<<"CAN-100"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________2_______"<<endl;
      cout<<"CAN-101"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________3_______"<<endl;
      cout<<"CAN-102"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"Enter the flight number"<<endl;
      cin>>flight_choice;
      switch(flight_choice)
      {
        case 1:
        cout<<"You are successfully booked CAN-100"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 2:
        cout<<"You are successfully booked CAN-101"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 3:
        cout<<"You are successfully booked CAN-102"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
      }
      break;
      case 5:
      cout<<"_____Welcome to Germany Airlines____"<<endl;
      cout<<"Following are the flight details"<<endl;
      cout<<"________1_______"<<endl;
      cout<<"GER-100"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________2_______"<<endl;
      cout<<"GER-101"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"________3_______"<<endl;
      cout<<"GER-102"<<endl;
      cout<<"Cost:10000"<<endl;
      cout<<"Date:23-09-2022"<<endl;
      cout<<"Time:9:00"<<endl;
      cout<<"Enter the flight number"<<endl;
      cin>>flight_choice;
      switch(flight_choice)
      {
        case 1:
        cout<<"You are successfully booked GER-100"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 2:
        cout<<"You are successfully booked GER-101"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        case 3:
        cout<<"You are successfully booked GER-102"<<endl;
        cout<<"You can collect your ticket"<<endl;
        break;
        default:
        cout<<"Invalid Choice"<<endl;
      }
      break;
      default:
      cout<<"Indvalid choice"<<endl;
      cout<<"Shifting to mainmenu"<<endl;
      mainmenu();
      break;


    }
  }

};
int Registration::choice;

/*class Ticket:public Registration,Details
{
  public:
  void Bill()
  {
    string destionation="";
    ofstream outf("ticket.txt");
    {
      outf<<"____BHARAT AIRLINES______"<<endl;
      outf<<"____TICKET____________"<<endl;
      outf<<"______________________"<<endl;
      outf<<"Customer id:"<<Details::customer_id<<endl;
      outf<<"Customer Name:"<<Details::name<<endl;
      if(Registration::choice==1)
      {
          destionation="India";
      }
      else if(Registration::choice==2)
      {
          destionation="America";
      }
      else if(Registration::choice==3)
      {
          destionation="Australia";
      }
      else if(Registration::choice==4)
      {
          destionation="Cananda";
      }
      else if(Registration::choice==5)
      {
          destionation="Germany";
      }
      outf<<"Destionation:"<<destionation<<endl;
    }
    outf.close();
  }
  void display()
    {
      ifstream ifs("ticket.txt");
      {
        if(!ifs)
        cout<<"File Error"<<endl;
        while(!ifs.eof())
        {
          ifs.getline(arr,100);
          cout<<arr<<endl;
        }

      }
      ifs.close();
    }
};*/
//int Registration::choice;
string Details::name;
string Details::customer_id;
class Ticket:public Details,Registration
{
  public:
  string destination;
  void Bill()
  {
    ofstream outf("pass.txt");
    outf<<"_________BHARAT AIRLINES"<<endl;
    outf<<"_________Ticket_________"<<endl;
    outf<<"________________________"<<endl;
    outf<<"Customer id:"<<Details::customer_id<<endl;
    outf<<"Name:"<<Details::name<<endl;
    outf<<"choice:"<<Registration::choice<<endl;
    outf.close();
  }
  void display()
  {
    ifstream ifs("pass.txt");
    {
      if(!ifs)
      cout<<"File Error"<<endl;
      while(!ifs.eof())
      {
        ifs.getline(arr,100);
        cout<<arr<<endl;
      }
    }
    ifs.close();
  }
};
void mainmenu()
{
  int lchoice;
  int schoice;
  int back;
  cout<<"______BHARAT AIRLINES_______"<<endl;
  cout<<"_________WEL-COME____________"<<endl;
  cout<<"Press 1 to add the customer details"<<endl;
  cout<<"Press 2 for flight registration"<<endl;
  cout<<"Press 3 for Ticket and Charges"<<endl;
  cout<<"Press 4 for exit"<<endl;
  cout<<"_________________________________"<<endl;
  cout<<"Enter your choice:";
  cin>>lchoice;
  Details D;
  Registration R;
  Ticket T;
  switch(lchoice)
  {
    case 1:
    cout<<"_________CUSTOMER_________"<<endl;
    D.information();
    cout<<"Your details are saved with us"<<endl;
    cout<<"Enter any key to go back:";
    cin>>back;
    if(back==0)
    mainmenu();
    else
    mainmenu();
    break;
    case 2:
    cout<<"_____Booking system_____"<<endl;
    R.flights();
    mainmenu();
    break;
    case 3:
    cout<<"_____Ticket and Charges"<<endl;
    T.Bill();
    cout<<"Your ticket is printed\n you can collect it"<<endl;
    cout<<"Press 1 to display your ticket"<<endl;
    cin>>back;
    if(back==1)
    {
      T.display();
      cout<<"Press any key to go back"<<endl;
      cin>>back;
      if(back==1)
      mainmenu();
      else
      mainmenu();
    }
    else
    mainmenu();
    break;
    case 4:
    cout<<"___________THANK YOU__________"<<endl;
    break;
    default:
    cout<<"Invalid choice,Please try again"<<endl;
    mainmenu();
    break;




  }
};
int main()
{
  //cout<<"Hello"<<endl;
  management m1;
}