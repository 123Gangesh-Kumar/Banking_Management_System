//Full C++ Code for Banking Management System


#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;



int is_string_equal(string a1,string a2){
    if(a1.size() != a2.size()){
        return 0;
    }
    else{
        for(int x=0;x<a1.size();x++){
            if(a1[x] != a2[x]){
                return 0;
            }
        }
        return 1;
    }
}

string name,fname,mname,city,dis,state,add,aadhar,pan,branch;
string position,bank_name,day,month,year,age,pin;

string bank_pass="mybank123";

void clear(){
    getch();
    system("cls");
}

class bank{
    public:
        void entry(){
            cout<<"\n\t\t\t\t\t\t\t\t\t\tBANK MANAGEMENT SYSTEM";
            cout<<"\n=========================================================================================================================================================================================================";
        }
        void CA(){
            ofstream o1,o2;
            fflush(stdin);
            cout<<"\n\n\n\n\t\t\t\tEnter Your Full Name :\t\t";
            getline(cin,name);
            fflush(stdin);
            cout<<"\n\t\t\t\tEnter Your Father Name :\t\t";
            getline(cin,fname);
            fflush(stdin);
            cout<<"\n\t\t\t\tEnter Your Mother Name :\t\t";
            getline(cin,mname);
            cout<<"\n\t\t\t\tEnter Your Day of Date of Birth :\t\t";
            cin>>day;
            cout<<"\n\t\t\t\tEnter Your Month of Date of Birth :\t\t";
            cin>>month;
            cout<<"\n\t\t\t\tEnter Your  Year of Date of Birth :\t\t";
            cin>>year;
            cout<<"\n\t\t\t\tEnter Your Age :\t\t";
            cin>>age;
            cout<<"\n\t\t\t\tEnter Your Address :\t\t";
            fflush(stdin);
            getline(cin,add);
            cout<<"\n\t\t\t\tEnter Your City :\t\t";
            fflush(stdin);
            getline(cin,city);
            cout<<"\n\t\t\t\tEnter Your District :\t\t";
            fflush(stdin);
            getline(cin,dis);
            cout<<"\n\t\t\t\tEnter Your State :\t\t";
            fflush(stdin);
            getline(cin,state);
            cout<<"\n\t\t\t\tEnter Your PinCode :\t\t";
            cin>>pin;
            cout<<"\n\t\t\t\tEnter Your AadharCard Number :\t\t";
            fflush(stdin);
            getline(cin,aadhar);
            cout<<"\n\t\t\t\tEnter Your  PanNumber :\t\t";
            fflush(stdin);
            getline(cin,pan);
            cout<<"\n\t\t\t\tEnter Your Bank Name :\t\t";
            fflush(stdin);
            getline(cin,bank_name);
            cout<<"\n\t\t\t\tEnter Your Branch :\t\t";
            fflush(stdin);
            getline(cin,branch);
            o1.open(name,ios::out);
            o1<<name<<endl<<fname<<endl<<mname<<endl<<day<<endl<<month<<endl<<year<<endl<<age<<endl;
            o1<<add<<endl<<city<<endl<<dis<<endl<<state<<endl<<pin<<endl<<aadhar<<endl<<pan<<endl<<bank_name<<endl<<branch;
            o1.close();
            o2.open("names_customer_list.txt",ios::app);
            o2<<name<<endl;
            o2.close();

            



        }

        
};

class View : public bank{
    public:
        void VA(string file_name){
            ifstream o1;
            clear();
            entry();
            o1.open(file_name,ios::in);
            getline(o1,name);
            getline(o1,fname);
            getline(o1,mname);
            getline(o1,day);
            getline(o1,month);
            getline(o1,year);
            getline(o1,age);
            getline(o1,add);
            getline(o1,city);
            getline(o1,dis);
            getline(o1,state);
            getline(o1,pin);
            getline(o1,aadhar);
            getline(o1,pan);
            getline(o1,bank_name);
            getline(o1,branch);
            cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tYour Name is :\t\t"<<name;
            cout<<"\n\t\t\t\t\t\tYour Father Name is :\t\t"<<fname;
            cout<<"\n\t\t\t\t\t\tYour Mother Name is :\t\t"<<mname;
            cout<<"\n\t\t\t\t\t\tYour Date of Birth (DOB) is :\t\t"<<day<<" // "<<month<<" // "<<year;
            cout<<"\n\t\t\t\t\t\tYour Address is :\t\t"<<add;
            cout<<"\n\t\t\t\t\t\tYour City Name is :\t\t"<<city;
            cout<<"\n\t\t\t\t\t\tYour District Name is :\t\t"<<dis;
            cout<<"\n\t\t\t\t\t\tYour State Name is :\t\t"<<state;
            cout<<"\n\t\t\t\t\t\tYour City's PinCode is :\t\t"<<pin;
            cout<<"\n\t\t\t\t\t\tYour Aadhar Number is :\t\t"<<aadhar;
            cout<<"\n\t\t\t\t\t\tYour Pan Number is :\t\t"<<pan;
            cout<<"\n\t\t\t\t\t\tYour Bank Name is :\t\t"<<bank_name;
            cout<<"\n\t\t\t\t\t\tYour Bank Branch is :\t\t"<<branch;
            o1.close();
        }


};


int main(int argc, char const *argv[])
{
    View b1;
    int choice;
    clear();
    b1.entry();
    while(1){
        clear();
        b1.entry();
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t[1] . START";
        cout<<"\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t[2] . EXIT";
        cout<<"\n\n\n\n\n\n\n\t\t\t\tEnter Your Choice :\t\t";
        cin>>choice;
        if(choice == 1){
            clear();
            b1.entry();
            int choice2;
            cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t[1] . CREATE AN ACCOUNT";
            cout<<"\n\t\t\t\t\t\t\t\t\t[2] . VIEW YOUR ACCOUNT";
            cout<<"\n\t\t\t\t\t\t\t\t\t[3] . VIEW ACCOUNT BALANCE";
            cout<<"\n\t\t\t\t\t\t\t\t\t[4] . DEPOSITE THE AMOUNT IN THE ACCOUNT";
            cout<<"\n\t\t\t\t\t\t\t\t\t[5] . WITHDRAWL THE AMOUNT FROM YOUR ACCCOUT";
            cout<<"\n\t\t\t\t\t\t\t\t\t[6] . VIEW CUSTOMER LIST";
            cout<<"\n\t\t\t\t\t\t\t\t\t[7] . DELETE AN ACCOUNT FROM OUR BANK";
            cout<<"\n\t\t\t\t\t\t\t\t\t[8] . NOT INTRUSTED";
            cout<<"\n\n\n\n\n\n\t\t\t\tEnter Your Choice :\t\t";
            cin>>choice2;
            if(choice2 == 1){
                string pass;
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Password of the Bank , To use the Services :\t\t";
                fflush(stdin);
                getline(cin,pass);
                if(is_string_equal(bank_pass,pass)==1){
                    clear();
                    b1.entry();
                    b1.CA();
                    string file1,file2,account_num,account_pass;
                    int amount=0;
                    ofstream o1,o2;
                    clear();
                    b1.entry();
                    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Number and Pssword :\t\t";
                    fflush(stdin);
                    getline(cin,file1);
                    cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Number :\t\t";
                    fflush(stdin);
                    getline(cin,account_num);
                    cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Password :\t\t";
                    fflush(stdin);
                    getline(cin,account_pass);
                    o1.open(file1,ios::out);
                    o1<<account_num<<endl<<account_pass;
                    o1.close();
                    clear();
                    b1.entry();
                    cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Balance :\t\t";
                    fflush(stdin);
                    getline(cin,file2);
                    o2.open(file2,ios::out);
                    o2<<amount;
                    o2.close();

                }
                else{
                    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tWRONG PASSWORD , PLEASE ENTER A VALID PASSWORD";
                }
            }
            else if(choice2 == 2){
                ifstream o1;
                string account_num,account_pass;
                string ac_num,ac_pass;
                string file1,file3;
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account To open :\t\t";
                fflush(stdin);
                getline(cin,file3);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Number and Pssword :\t\t";
                fflush(stdin);
                getline(cin,file1);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Number :\t\t";
                fflush(stdin);
                getline(cin,account_num);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Password :\t\t";
                fflush(stdin);
                getline(cin,account_pass);
                o1.open(file1,ios::in);
                getline(o1,ac_num);
                getline(o1,ac_pass);
                if(is_string_equal(ac_num,account_num) && is_string_equal(ac_pass,account_pass) == 1){
                    clear();
                    b1.entry();
                    b1.VA(file3);
                }
                else if(is_string_equal(ac_num,account_num) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR NUMBER IS NOT MATCHING WITH YOUR ACCOUNT NUMBER";
                }
                else if(is_string_equal(ac_pass,account_pass) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD IS NOT MATCHING WITH YOUR ACCOUNT PASSWORD";
                }
                else{
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR ENTERED ACCOUNT NUMBER AND ACCOUNT PASSWORD IS NOT MATCHING";
                }


            }
            else if(choice2 == 3){
                ifstream o1,o2;
                string account_num,account_pass;
                string ac_num,ac_pass;
                string amount;
                string file1,file3,file2;
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account To open :\t\t";
                fflush(stdin);
                getline(cin,file3);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Number and Pssword :\t\t";
                fflush(stdin);
                getline(cin,file1);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Number :\t\t";
                fflush(stdin);
                getline(cin,account_num);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Password :\t\t";
                fflush(stdin);
                getline(cin,account_pass);
                o1.open(file1,ios::in);
                getline(o1,ac_num);
                getline(o1,ac_pass);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the name of Your Account File of Balance :\t\t";
                getline(cin,file2);
                o2.open(file2,ios::in);
                getline(o2,amount);
                o2.close();
                if(is_string_equal(ac_num,account_num) && is_string_equal(ac_pass,account_pass) == 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tBalance in Your Account is :\t\t"<<amount<<" RUPEES";
                }
                else if(is_string_equal(ac_num,account_num) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR NUMBER IS NOT MATCHING WITH YOUR ACCOUNT NUMBER";
                }
                else if(is_string_equal(ac_pass,account_pass) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD IS NOT MATCHING WITH YOUR ACCOUNT PASSWORD";
                }
                else{
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR ENTERED ACCOUNT NUMBER AND ACCOUNT PASSWORD IS NOT MATCHING";
                }
            }
            else if(choice2 == 4){
                ifstream o1,o2;
                string account_num,account_pass;
                string ac_num,ac_pass;
                string amount,amount2;
                string file1,file3,file2;
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account To open :\t\t";
                fflush(stdin);
                getline(cin,file3);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Number and Pssword :\t\t";
                fflush(stdin);
                getline(cin,file1);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Number :\t\t";
                fflush(stdin);
                getline(cin,account_num);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Password :\t\t";
                fflush(stdin);
                getline(cin,account_pass);
                o1.open(file1,ios::in);
                getline(o1,ac_num);
                getline(o1,ac_pass);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the name of Your Account File of Balance :\t\t";
                getline(cin,file2);
                o2.open(file2,ios::in);
                getline(o2,amount);
                o2.close();
                if(is_string_equal(ac_num,account_num) && is_string_equal(ac_pass,account_pass) == 1){
                    //cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tBalance in Your Account is :\t\t"<<amount<<" RUPEES";
                    ofstream o4;
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tEnter the Amount to deposite into your bank :\t\t";
                    getline(cin,amount2);
                    o4.open(file2,ios::out);
                    int a1=stoi(amount);
                    int a2=stoi(amount2);
                    a2=a2+a1;
                    string amount3 = to_string(a2);
                    o4<<amount3;
                    o2.close();
                    clear();
                    b1.entry();
                    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t "<<amount2<<" RUPEES are added in Your Account Succefully"; 
                }
                else if(is_string_equal(ac_num,account_num) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR NUMBER IS NOT MATCHING WITH YOUR ACCOUNT NUMBER";
                }
                else if(is_string_equal(ac_pass,account_pass) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD IS NOT MATCHING WITH YOUR ACCOUNT PASSWORD";
                }
                else{
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR ENTERED ACCOUNT NUMBER AND ACCOUNT PASSWORD IS NOT MATCHING";
                }
            }
            else if(choice2 == 5){
                ifstream o1,o2;
                string account_num,account_pass;
                string ac_num,ac_pass;
                string amount,amount2;
                string file1,file3,file2;
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account To open :\t\t";
                fflush(stdin);
                getline(cin,file3);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the Name of Your Account , which holds Your Account Number and Pssword :\t\t";
                fflush(stdin);
                getline(cin,file1);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Number :\t\t";
                fflush(stdin);
                getline(cin,account_num);
                cout<<"\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Account Password :\t\t";
                fflush(stdin);
                getline(cin,account_pass);
                o1.open(file1,ios::in);
                getline(o1,ac_num);
                getline(o1,ac_pass);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\t\t\t\t\t\tEnter the name of Your Account File of Balance :\t\t";
                getline(cin,file2);
                o2.open(file2,ios::in);
                getline(o2,amount);
                o2.close();
                if(is_string_equal(ac_num,account_num) && is_string_equal(ac_pass,account_pass) == 1){
                    //cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tBalance in Your Account is :\t\t"<<amount<<" RUPEES";
                    ofstream o4;
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tEnter the Amount to withdrawl from  your bank :\t\t";
                    getline(cin,amount2);
                    o4.open(file2,ios::out);
                    string am2;
                    int am1=stoi(amount);
                    int am3=stoi(amount2);
                    if(am3>am1){
                        cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tInSuffeceint Amount of Blance in Your Account , hence you can't withdrawl the money";
                    }
                    else{
                        am1=am1-am3;
                        o4<<am1;
                        o4.close();
                        clear();
                        b1.entry();
                        cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t "<<am3<<" RUPEES has been withdrawl from your account succefully ";
                    }

                }
                else if(is_string_equal(ac_num,account_num) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR NUMBER IS NOT MATCHING WITH YOUR ACCOUNT NUMBER";
                }
                else if(is_string_equal(ac_pass,account_pass) != 1){
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR PASSWORD IS NOT MATCHING WITH YOUR ACCOUNT PASSWORD";
                }
                else{
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\tYOUR ENTERED ACCOUNT NUMBER AND ACCOUNT PASSWORD IS NOT MATCHING";
                }
            }
            else if(choice2 == 6){
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the bank password to see the customer list :\t\t";
                string pass;
                fflush(stdin);
                getline(cin,pass);
                if(is_string_equal(pass,bank_pass) == 1){
                    ifstream o1;
                    clear();
                    b1.entry();
                    cout<<"\n\n\n\n\n\t\t\t\t\t\t\t\t\tNames of the customer in our bank are :\n\n";
                    cout<<"\n\t\t\t\t\t================================================================================================\n\n\n\n";
                    o1.open("names_customer_list.txt",ios::in);
                    string names;
                    while(getline(o1,names)){
                        cout<<"\n\t\t\t\t\t\t\t\t\t\t"<<names;
                    }
                    o1.close();
                }
            }
            else if(choice2 == 7){
                string file1,file2,file3;
                string delete_name;
                ifstream o1;
                int x=0;
                string names[100];
                o1.open("names_customer_list.txt",ios::in);
                clear();
                b1.entry();
                cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tEnter the Name of your file to delete :\t\t";
                fflush(stdin);
                getline(cin,file1);
                cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter the name of your file , of account password and number to delete :\t\t";
                getline(cin,file2);
                cout<<"\n\n\n\n\t\t\t\t\t\t\tEnter the name of your file , of amount balance to delete :\t\t";
                getline(cin,file3);
                while(getline(o1,delete_name)){
                    if(!is_string_equal(delete_name,file1)){
                        names[x]=delete_name;
                        x++;
                    }
                }
                o1.close();
                ofstream o2;
                o2.open("names_customer_list.txt",ios::out);
                for(int y=0;y<x;y++){
                    o2<<names[y]<<endl;
                }
                o2.close();
            }
            else{
                exit(1);
            }
            





        }
        else{
            exit(1);
        }
    }
    return 0;
}
