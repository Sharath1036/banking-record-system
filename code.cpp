#include<conio.h>
#include<iostream>
#include<fstream>
#include<cstdlib> 
#include<windows.h>
using std::cout; 
using std::cin;
using std::endl;
using std::fstream; 
usingstd::ofstream; using
std::ifstream; using std::ios;
class account_query
{
private:
char account_number[20]; char
firstName[10]; char lastName[10];
float total_Balance; public:
void read_data(); void
show_data(); void write_rec();
void read_rec(); void
search_rec(); void edit_rec();
void delete_rec();
};
void account_query::read_data()
{
system("cls");
system("color b"); cout<<"=================================\n"<<endl;
cout<<"***Acount Information System***\n"<<endl;
cout<<"=================================\n\n"<<endl; cout<<"***Add
Acount Information***\n"<<endl; cout<<"\n\n\tEnter Account Number : ";
cin>>account_number;
cout<<"\tEnter First Name : ";
cin>>firstName;
cout<<"\tEnter Last Name : ";
cin>>lastName;
cout<<"\tEnter Balance : "; cin>>total_Balance;
cout<<"\n\n\tWait few Seconds....."; Sleep(800);
cout<<"\n\n\tData Add Successfully...."; Sleep(800);
cout<<"\t\t\tPress Any Key\n\n";
getch();
system("Cls"); cout<<endl;
}
void account_query::show_data()
{
Subject: OOPL SE/SEM-III Page No.
system("Color c"); cout<<"\n-------------------------------\n\n"<<endl;
Sleep(400);
cout<<"Account Number: "<<account_number<<endl; Sleep(400);
cout<<"First Name: "<<firstName<<endl; Sleep(400);
cout<<"Last Name: "<<lastName<<endl; Sleep(400);
cout<<"Current Balance: Rs. "<<total_Balance<<endl; Sleep(400);
cout<<"\n-------------------------------\n\n"<<endl;
Sleep(600);
cout<<"\nPress any key for next..."<<endl;
getch(); cout<<"\n\n";
}
void account_query::write_rec()
{
ofstream outfile;
outfile.open("record.bank", ios::binary|ios::app);
read_data();
outfile.write(reinterpret_cast<char *>(this), sizeof(*this));
outfile.close();
}
void account_query::read_rec()
{
ifstream infile;
infile.open("record.bank", ios::binary);
if(!infile)
{
cout<<"Error in Opening! File Not Found!!"<<endl;
return;
}
system("cls"); cout<<"\n\n****Data
fromfile****\n\n"<<endl; while(!infile.eof())
{
if(infile.read(reinterpret_cast<char*>(this), sizeof(*this))>0)
{
show_data();
}
}
infile.close();
}
void account_query::search_rec()
{ int n;
ifstream infile;
Subject: OOPL SE/SEM-III Page No.
infile.open("record.bank", ios::binary);
system("color f"); if(!infile)
{
cout<<"\nError in opening! File Not Found!!"<<endl;
return;
}
infile.seekg(0,ios::end); int count =
infile.tellg()/sizeof(*this);
Sleep(500);
cout<<"\n There are "<<count<<" record in the file"; Sleep(500);
cout<<"\n Enter Record Number to Search: ";
cin>>n;
infile.seekg((n-1)*sizeof(*this)); infile.read(reinterpret_cast<char*>(this),
sizeof(*this));
show_data();
}
void account_query::edit_rec()
{ int n;
fstream iofile;
iofile.open("record.bank", ios::in|ios::binary);
system("color f"); if(!iofile)
{
cout<<"\nError in opening! File Not Found!!"<<endl;
return;
}
iofile.seekg(0, ios::end); int count = iofile.tellg()/sizeof(*this); Sleep(500);
cout<<"\n\n There are "<<count<<" record in the file"; Sleep(500); cout<<"\n
Enter Record Number to edit: "; cin>>n; iofile.seekg((n-1)*sizeof(*this));
iofile.read(reinterpret_cast<char*>(this), sizeof(*this)); cout<<"Record "<<n<<"
has following data"<<endl;show_data();
iofile.close();
iofile.open("record.bank", ios::out|ios::in|ios::binary); iofile.seekp((n-
1)*sizeof(*this)); cout<<"\nEnter data to Modify "<<endl; read_data();
iofile.write(reinterpret_cast<char*>(this), sizeof(*this));
}
void account_query::delete_rec()
{ int n;
ifstream infile;
Subject: OOPL SE/SEM-III Page No.
infile.open("record.bank", ios::binary);
system("color f");
if(!infile)
{
cout<<"\nError in opening! File Not Found!!"<<endl;
return;
}
infile.seekg(0,ios::end); 
int count =
infile.tellg()/sizeof(*this);
Sleep(500);
cout<<"\n\n There are "<<count<<" record in the file";
Sleep(500);
cout<<"\n Enter Record Number to Delete: ";
cin>>n;
fstream tmpfile;
tmpfile.open("tmpfile.bank", ios::out|ios::binary);
infile.seekg(0); for(int i=0; i<count;
i++)
{ infile.read(reinterpret_cast<char*>(this),sizeof(*this));
if(i==(n-1))continue;
tmpfile.write(reinterpret_cast<char*>(this), sizeof(*this));
}
infile.close(); tmpfile.close();
remove("record.bank");
rename("tmpfile.bank", "record.bank");
cout<<"\n\nWait few Seconds.....\n\n";
Sleep(800);
cout<<"\n\nRecord Delete Successfully....\n\n\n";
getch();
}
int main()
{
account_query A;
int choice; while(true)
{
system("cls");
system("color a");
cout<<"=================================\n"<<endl; cout<<"***Acount
Information System***\n"<<endl;
Subject: OOPL SE/SEM-III Page No.
cout<<"=================================\n\n"<<endl; cout<<"Select one option
below \n";
Sleep(400);
cout<<"\n\t1: Add record to file";
Sleep(400);
cout<<"\n\t2: Show record from file";
Sleep(400);
cout<<"\n\t3: Search Record from file";
Sleep(400);
cout<<"\n\t4: Update Record";
Sleep(400);
cout<<"\n\t5: Delete Record";
Sleep(400);
cout<<"\n\t6: Quit"; Sleep(400);
cout<<"\n\nEnter your choice: ";
cin>>choice; switch(choice)
{
case 1:
A.write_rec();
break;
case 2:
A.read_rec();
break;
case 3:
A.search_rec();
break;
case 4:
A.edit_rec();
break;
case 5:
A.delete_rec();
break;
case 6:
system("cls");
system("color d");
cout<<"=================================\n"<<endl;
cout<<"***Acount Information System***\n"<<endl;
cout<<"=================================\n\n"<<endl;
cout<<"\n\nTHANK ";
Sleep(400);
cout<<"YOU "; Sleep(400);
Subject: OOPL SE/SEM-III Page No.
cout<<"FOR ";
Sleep(400); cout<<"USING ";
Sleep(400);
cout<<"THIS "; Sleep(400);
cout<<"SOFTWARE\n\n";
Sleep(600);
cout<<"\n================================="<<endl;
Sleep(400);
cout<<"\nDEVELOPER DETAILS:\n";
Sleep(400);
cout<<"\n=================================\n"<<endl;
cout<<"\n\n\t\tThis software made by : ";
Sleep(500);
cout<<"Srushti ";
Sleep(500);
cout<<"Surabhi"<<endl;
cout<<"\n\t\tSubmitted to : ";
Sleep(500);
cout<<"\n\n\t\t\t\tPress any key to exit...";
Sleep(500);
getch();
exit(0);
break;
default:
cout<<"\n\nERROR!!!! Wrong Choice...\n\n";
Sleep(400);
cout<<"\n\nPress any key.... and enter corret choice: ";
getch();
main();
}
}
system("pause");
return 0;
}
