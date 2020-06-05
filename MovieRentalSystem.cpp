#include<iostream>
#include<fstream>
#include<conio.h>
#include<unistd.h>
#include<dos.h>
#include<stdlib.h>
#include<iomanip>
#include<string.h>
#include<cstring>

using namespace std;

class customer{
             public:
                string customer_name;
                string movie_type;
                string movie_name="";
                };

class rent:public customer{
    public:
        int days=0;
        int rental_amount=0;
        string type;

        void data()
        {
            system("CLS");
            cout<<"\n\t\t\t\tPlease enter customer name: ";
            cin>>customer_name;
            cout<<endl;
            do{
                cout<<"\n\t\t\t\tPlease select a movie category: "<<endl;
                cout<<"\t\t\t\t\t\tEnter 'A' for Sci-fi"<<endl;
                cout<<"\t\t\t\t\t\tEnter 'B' for Drama"<<endl;
                cout<<"\t\t\t\t\t\tEnter 'C' for Comedy"<<endl;
                cout<<"\t\t\t\t\t\tEnter 'D' for Action\n"<<endl;
                cout<<"\t\t\t\tEnter your choice: ";
                cin>>movie_type;
                cout<<endl;
                cout<<"_____________________________________________________________________________"<<endl;
                if(movie_type=="A")
                {
                    system("CLS");
                    type = "SCI-FI";
                    cout<<"\nSCI-FI:"<<endl;
                    ifstream inA("SCI-FI.txt");
                    char str[200];
                    while(inA)
                    {
                        inA.getline(str,200);
                        if(inA)
                            cout<<str<<endl;
                    }
                    inA.close();
                    sleep(2);
                }
                if(movie_type=="B")
                {
                    system("CLS");
                    type = "DRAMA";
                    cout<<"\nDRAMA:"<<endl;
                    ifstream inB("DRAMA.txt");
                    char str[200];
                    while(inB)
                    {
                        inB.getline(str,200);
                        if(inB)
                            cout<<str<<endl;
                    }
                    inB.close();
                    sleep(2);
                }
                if(movie_type=="C")
                {
                    system("CLS");
                    type = "COMEDY";
                    cout<<"\nCOMEDY:"<<endl;
                    ifstream inC("COMEDY.txt");
                    char str[200];
                    while(inC)
                    {
                        inC.getline(str,200);
                        if(inC)
                            cout<<str<<endl;
                    }
                    inC.close();
                    sleep(2);
                }
                if(movie_type=="D")
                {
                    system("CLS");
                    type = "ACTION";
                    cout<<"\nACTION:"<<endl;
                    ifstream inD("ACTION.txt");
                    char str[200];
                    while(inD)
                    {
                        inD.getline(str,200);
                        if(inD)
                            cout<<str<<endl;
                    }
                    inD.close();
                    sleep(2);
                }
                if(movie_type!="A"&&movie_type!="B"&&movie_type!="C"&&movie_type!="D")
                    cout<<"\nInvalid Choice.Please try again!!!"<<endl;
            }while(movie_type!="A"&&movie_type!="B"&&movie_type!="C"&&movie_type!="D");
        cout<<"\n______________________________________________________________________"<<endl;
        cout<<"\nPlease provide following information:"<<endl;
        cout<<"Please select a movie: ";
        cin>>movie_name;
        cout<<"Number the days you wish to rent the movie: ";
        cin>>days;
        cout<<endl;
        }
        void calculate()
        {
            sleep(1);
            system("CLS");
            cout<<"Calculating rent. Please wait........."<<endl;
            sleep(2);
            if(movie_type=="A")
                rental_amount = days*15;
            if(movie_type=="B")
                rental_amount = days*10;
            if(movie_type=="C")
                rental_amount = days*18;
            if(movie_type=="D")
                rental_amount = days*20;
        }
        void showrent()
        {
            cout<<"\n\n\t\t\t\t\tMovie Rental - Customer Invoice\t\t"<<endl;
            cout<<"\t\t//////////////////////////////////////////////////////////////////////////////////////////"<<endl;
            cout<<"\t\t|Invoice No:"<<"----------------------|"<<setw(10)<<"#Cnb81353"<<"  |"<<endl;
            cout<<"\t\t|Customer Name:"<<"-------------------|"<<setw(10)<<customer_name<<"  |"<<endl;
            cout<<"\t\t|Movie Category:"<<"------------------|"<<setw(10)<<type<<"  |"<<endl;
            cout<<"\t\t|Movie Name:"<<"----------------------|"<<setw(10)<<movie_name<<"  |"<<endl;
            cout<<"\t\t|No. of days:"<<"---------------------|"<<setw(10)<<days<<"  |"<<endl;
            cout<<"\t\t|Your rental amount is:"<<"-----------|"<<setw(10)<<rental_amount<<"  |"<<endl;
            cout<<"\t\t|Caution Money:"<<"-------------------|"<<setw(10)<<"0"<<"  |"<<endl;
            cout<<"\t\t|Advanced:"<<"------------------------|"<<setw(10)<<"0"<<"  |"<<endl;
            cout<<"\t\t____________________________________________________________________________________________"<<endl;
            cout<<"\n";
            cout<<"\t\t|Total Rental Amount is:"<<"----------|"<<setw(10)<<rental_amount<<"  |"<<endl;
            cout<<"\t\t____________________________________________________________________________________________"<<endl;
            cout<<"\t\t#This is a computer generated invoice and it does not"<<endl;
            cout<<"\t\trequire an authorized signature#"<<endl;
            cout<<"  "<<endl;
            cout<<"\t\t///////////////////////////////////////////////////////////////////////////////////////////"<<endl;
            cout<<"\t\tYou are advised to pay up the amount before due date."<<endl;
            cout<<"\t\tOtherwise penalty fee will be applied"<<endl;
            cout<<"\t\t///////////////////////////////////////////////////////////////////////////////////////////"<<endl;
            system("PAUSE");
        }

        void show_detail()
        {
            cout<<"\n\t\tCustomer Name:"<<this->customer_name;
            cout<<"\n\t\tMovie Name:"<<this->movie_name;
            cout<<"\n\t\tMovie Type:"<<this->type;
            cout<<"\n\t\tNo. of days:"<<this->days;
            cout<<"\n\t\tRental Amount:"<<this->rental_amount;
            cout<<endl;
        }
    };

    int login(){
        string pass ="";
        char ch;
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       MOVIE RENTAL SYSTEM \n\n";
        cout<<"\t\t\t\t\t------------------------------";
        cout<<"\n\t\t\t\t\t\t     LOGIN \n";
        cout<<"\t\t\t\t\t------------------------------\n\n";
        cout << "\t\t\t\t\tEnter Password: ";
        ch = _getch();
        while(ch != 13){//character 13 is enter
            pass.push_back(ch);
            cout << '*';
            ch = _getch();
            }
        if(pass == "pass"){
            cout << "\n\n\n\t\t\t\t\t\tAccess Granted! \n";
        system("PAUSE");
        system ("CLS");
        }
        else
        {
            cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
            system("PAUSE");
            system("CLS");
            login();
        }
      }

    class welcome
    {
        public:
            int welcum()
            {
                ifstream in("welcome.txt");
                if(!in)
                    cout << "Cannot open input file.\n";
                char str[1000];
                while(in)
                {
                    in.getline(str, 1000);
                    if(in)
                        cout << str << endl;
                }
                in.close();
                sleep(5);
                cout<<"\nStarting the program please wait....."<<endl;
                sleep(1);
                cout<<"\nloading up files....."<<endl;
                sleep(1);
                system ("CLS");
            }

    };

    int main()
    {
        int choice, i=0;
        welcome obj1;
        obj1.welcum();
        int login();
        login();
        rent obj2[10];

        do{
                system("CLS");
                cout<<"\t\t-------------------MOVIE RENTAL SYSTEM MENU----------------"<<endl;
                cout<<"\t\t\t\t|1. Book movie"<<endl;
                cout<<"\t\t\t\t|2. Booking history"<<endl;
                cout<<"\t\t\t\t|3. All movies"<<endl;
                cout<<"\t\t\t\t|4. Exit"<<endl;
                cout<<"\n\t\t\tEnter your choice(1-4):";
                cin>>choice;

                if(choice==1)
                {
                    obj2[i].data();
                    obj2[i].calculate();
                    obj2[i].showrent();
                    i++;
                }

                if(choice==2)
                {
                    system("CLS");
                    for(int j=0; j<i; j++)
                    {
                        sleep(1);
                        cout<<"\n\tCustomer no.: "<<j+1;
                        obj2[j].show_detail();
                    }
                    cout<<endl;
                    cout<<endl;
                    system("PAUSE");
                }

                if(choice==3)
                {
                    system("CLS");
                    cout<<"\t\t----------------ALL MOVIE DETAILS--------------"<<endl;
                    cout<<"\nSCI-FI:\n"<<endl;
                    ifstream inA("SCI-FI.txt");
                    char strA[200];
                    while(inA)
                    {
                        inA.getline(strA,200);
                        if(inA)
                            cout<<strA<<endl;
                    }
                    inA.close();
                    sleep(1);

                    cout<<"\nDRAMA:\n"<<endl;
                    ifstream inB("DRAMA.txt");
                    char strB[200];
                    while(inB)
                    {
                        inB.getline(strB,200);
                        if(inB)
                            cout<<strB<<endl;
                    }
                    inB.close();
                    sleep(1);

                    cout<<"\nCOMEDY:\n"<<endl;
                    ifstream inC("COMEDY.txt");
                    char strC[200];
                    while(inC)
                    {
                        inC.getline(strC,200);
                        if(inC)
                            cout<<strC<<endl;
                    }
                    inC.close();
                    sleep(1);

                    cout<<"\nACTION:\n"<<endl;
                    ifstream inD("ACTION.txt");
                    char strD[200];
                    while(inD)
                    {
                        inD.getline(strD,200);
                        if(inD)
                            cout<<strD<<endl;
                    }
                    inD.close();
                    sleep(1);
                    system("PAUSE");
                }
                if(choice!=1 && choice!=2 && choice!=3 && choice!=4)
                    cout<<"\nInvalid choice. Please try again......."<<endl;
        }while(choice!=4);

        system("CLS");
        cout<<"\n\nExiting................."<<endl;

            sleep(2);
            int f;
            system("CLS");
            ifstream inf("thanks.txt");
            char str[300];
            while(inf)
            {
                inf.getline(str,300);
                if (inf)
                    cout<<str<<endl;
            }
            inf.close();

            return 0;
    }
