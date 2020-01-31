class Display
{
  protected:
    struct tm * timeinfo;
  public:
    void Display_Time()
    {
      time_t rawtime;
      time ( &rawtime );
      timeinfo = localtime ( &rawtime );
      // cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
    }

    void Welcome_Message()
    {
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
      cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                  WELCOME TO                                           |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                           HOSPITAL MANAGEMENT SYSTEM                                  |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                 -BY: Arun and Saurabh                 |@@\n";
      cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
      cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    }

    int Menu()
    {
      int option;
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t  HOSPITAL MANAGEMENT SYSTEM \n\n";  
      cout<<"\n\n\t\t\t\t\t\tPlease,  Choose from the following Options: \n\n";
      cout<<"\t\t\t\t\t\t _________________________________________________________________ \n";
      cout<<"\t\t\t\t\t\t|                                                                 |\n";
      cout<<"\t\t\t\t\t\t|             1  >> Add New Patient Record                        |\n";
      cout<<"\t\t\t\t\t\t|             2  >> Add Diagnosis Information                     |\n";
      cout<<"\t\t\t\t\t\t|             3  >> Full History of the Patient                   |\n";
      cout<<"\t\t\t\t\t\t|             4  >> Information About the Hospital                |\n";
      cout<<"\t\t\t\t\t\t|             5  >> Exit the Program                              |\n";
      cout<<"\t\t\t\t\t\t|_________________________________________________________________|\n\n";
      a:cout<<"\t\t\t\t\t\tEnter your choice: ";
      cin>>option;
      if(option>5||option<1)
      {
        cout<<"\n\n\t\t\t\t\t\tInvalid Choice\n";
        cout<<"\t\t\t\t\t\tTry again...........\n\n";
        goto a;
      } //if inputed choice is other than given choice

      return option;
    }

    void Exit_Message()
    {
      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
      cout<<"\t\t\t\t\t@@ _______________________________________________________________________________________ @@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                               THANK YOU FOR USING                                     |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                            HOSPITAL MANAGEMENT SYSTEM                                 |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|                                                                                       |@@\n";
      cout<<"\t\t\t\t\t@@|_______________________________________________________________________________________|@@\n";
      cout<<"\t\t\t\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n\n\n\t\t\t\t\t";
    }
};

class FirstOption: public Display
{
  protected:
    string fname;
  public:

    void Display_Time()
    {
      Display::Display_Time();
      cout<<"\n\n\t\t\t\t\t\t\t\t"<< asctime (timeinfo);
    }
    

    void Get_File_Details()
    {
      ofstream pat_file;
      cout<<"\n\n\n\nEnter the patient's file name : ";
      cin.ignore();
      cin>>fname;
      pat_file.open(fname);
      if(!pat_file)
      {
        cout<<"\nError while opening the file\n";
      }

      else
      {
        struct patient_info
        {
            string name,address,contact,age,sex,blood_gp,disease_past,id;
        };

        patient_info ak;
        cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
        cout<<"\nName : ";pat_file<<"Name : ";cin>>ak.name;pat_file<<ak.name<<"\n";
        cout<<"\nAddress : ";pat_file<<"Address : ";cin>>ak.address;pat_file<<ak.address<<"\n";
        cout<<"\nContact Number : ";pat_file<<"Contact Number : ";cin>>ak.contact;pat_file<<ak.contact<<"\n";
        cout<<"\nAge : ";pat_file<<"Age : ";cin>>ak.age;pat_file<<ak.age<<"\n";
        cout<<"\nSex : ";pat_file<<"Sex : ";cin>>ak.sex;pat_file<<ak.sex<<"\n";
        cout<<"\nBlood Group : ";pat_file<<"Blood Group : ";cin>>ak.blood_gp;pat_file<<ak.blood_gp<<"\n";
        cout<<"\nAny Major disease suffered earlier : ";pat_file<<"Any Major disease suffered earlier : ";cin>>ak.disease_past;pat_file<<ak.disease_past<<"\n";
        cout<<"\nPatient ID : ";pat_file<<"Patient ID : ";cin>>ak.id;pat_file<<ak.id<<"\n";
        cout<<"\n********************************************************************\n";pat_file<<"\n********************************************************************\n\n";
        cout<<"\nInformation Saved Successfully\n";
      }

      system("clear");
    }
};



class SecondOption: public Display
{
  string fname;
  public:
    void Get_File_Details()
    {
      Display_Time();
      fstream pat_file;
      cout<<"\n\nEnter the patient's file name to be opened : ";
      cin.ignore();
      cin>>fname;
      //system("cls");
      pat_file.open(fname, ios::in);
      if(!pat_file)
      {
        cout<<"\nError while opening the file\n";
      }
      else
      {
        cout<<"\n\n\n\n\t\t\t\t........................................ Information about "<<fname<<" ........................................\n\n\n\n";
        string info;
        while(pat_file.good())
        {
          getline(pat_file,info);
          cout<<info<<"\n";
        }
        cout<<"\n";
        pat_file.close();
        pat_file.open(fname, ios::out | ios::app);
        cout<<"\n";
        cout<<"Adding more information in patient's file................on : "<<asctime (timeinfo);pat_file<<"Description of "<<asctime (timeinfo)<<"\n";
        
        struct app
        {
          string symptom,diagnosis,medicine,addmission,ward;
            
        };

        app add;
        cout<<"\nSymptoms : "; pat_file<<"Symptoms : ";cin>>add.symptom; pat_file<<add.symptom<<"\n";
        cout<<"\nDiagnosis : "; pat_file<<"Diagnosis : ";cin>>add.diagnosis; pat_file<<add.diagnosis<<"\n";
        cout<<"\nMedicines : "; pat_file<<"Medicines : ";cin>>add.medicine; pat_file<<add.medicine<<"\n";
        cout<<"\nAddmission Required? : "; pat_file<<"Addmission Required? : ";cin>>add.addmission; pat_file<<add.addmission<<"\n";
        cout<<"\nType of ward : "; pat_file<<"Type of ward : ";cin>>add.ward; pat_file<<add.ward<<"\n";pat_file<<"\n*************************************************************************\n";
        cout<<"\n\n"<<add.ward<<" ward is alloted Successfully\n";
        pat_file.close();
        cout<<"\n\n";
        system("clear");
    }
  }
};


class ThirdOption: public Display
{
  string fname;
  public:
    void Show_Details()
    {
      fstream pat_file;
      cout<<"\n\nEnter the patient's file name to be opened : ";
      cin.ignore();
      cin>>fname;
      pat_file.open(fname, ios::in);
      if(!pat_file)
      {
        cout<<"\nError while opening the file\n";
      }

      else
      {
        cout<<"\n\n\n\n\t\t\t\t........................................ Full Medical History of "<<fname<<" ........................................\n\n\n\n";
        string info;
        while(pat_file.good())
        {
          getline(pat_file,info);
          cout<<info<<"\n";
        }
        cout<<"\n";
      }
    }
};



class FourthOption: public Display
{
  public:
    void Hospital_Info()
    {
      ifstream file;
      file.open("hos.txt");
      if(!file)
      {
        cout<<"\nError while opening the file\n";
      }
      else
      {
        cout<<"\n\n\n\n\n\n\n\t\t\t\t\t   ...........................Information about the Hospital.............................\n\n";
        string line;
        while(file.good())
        {
          getline(file,line);
          cout<<line<<"\n\t\t";
        }
        cout<<"\n\n\t\t";
      }

    }
};



class FifthOption: public Display
{
  //Use Exit_Message function from Display
};



