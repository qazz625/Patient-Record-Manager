int _getch(void)
{
    struct termios oldattr, newattr;
    int ch;
    tcgetattr( STDIN_FILENO, &oldattr );
    newattr = oldattr;
    newattr.c_lflag &= ~( ICANON | ECHO );
    tcsetattr( STDIN_FILENO, TCSANOW, &newattr );
    ch = getchar();
    tcsetattr( STDIN_FILENO, TCSANOW, &oldattr );
    return ch;
}

void login(){
   
   
   char pass[4];
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";
   cout<<"\t\t\t\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t\t\t\t     LOGIN \n"; 
   cout<<"\t\t\t\t\t\t\t\t------------------------------\n\n";  
   cout << "\t\t\t\t\t\t\t\tEnter Password of length 4 only: ";
  
   pass[0]=_getch();
   cout<<"*";
   pass[1]=_getch();
   cout<<"*";
   pass[2]=_getch();
   cout<<"*";
   pass[3]=_getch();
   cout<<"*";

   if(strcmp(pass, "pass")==0){
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Granted! \n";
      system("clear");
      
   }else{
      cout << "\n\n\t\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\t\tPlease Try Again\n\n";
      
      login();
   }
}
