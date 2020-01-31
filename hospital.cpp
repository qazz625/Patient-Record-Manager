
#include<bits/stdc++.h>
using namespace std;
#include <termios.h>
#include <unistd.h>

#include "login.cpp"
#include "classes.cpp"


int main()
{
  Display disp;
  disp.Display_Time();

  re:
  disp.Welcome_Message();

  int option;
  void login();
  login();

  b:
  option = disp.Menu();

  if(option==1)
  {
    FirstOption first;
    first.Display_Time();
    first.Get_File_Details();
    goto b;
  }

  //Appending diagnosis information of patient datewise.................option 2
  if(option==2)
  {
    SecondOption second;
    second.Get_File_Details();
    goto b;
  }

  //For displaying the full medical history of patient in that hospital............option 3
  if(option==3)
  {
    ThirdOption third;
    third.Show_Details();   
    goto b;
  }

  //displaying the information about the hospital........option 4
  if(option==4)
  {
    FourthOption fourth;
    fourth.Hospital_Info();
    goto b;
  }

  //Exiting Through the system with a Thank You note........................option 5
  if(option==5)
  {
    FifthOption fifth;
    fifth.Exit_Message();
  }

  cout<<"\n";


  return 0;
}

