#include<iostream>
#include<conio.h>
#include<iomanip>
#include<fstream>
using namespace std;
class movie
{
public:
char title[20];
void get_title()
{
 cout<<"                                                       \n";
 cout<<"                                             MOVIE REVIEW                 \n";
 cout<<"enter the title of movie:";
 cin.getline(title,20);
}
};
class director
{
public:
     int n1;
     float arr1[26];
     std::size_t pos;
 std::string str3;
   string data;
    string str1;
    string num;
    string ans1;
    char op;

    director()
    {
      arr1[1]=5.5;
      arr1[2]=4.5;
      arr1[3]=7.2;
      arr1[4]=9.1;
      arr1[5]=6.7;
      arr1[6]=3.5;
      arr1[7]=4.5;
      arr1[8]=7.3;
      arr1[9]=9.2;
      arr1[10]=6.7;
      arr1[11]=3.5;
      arr1[12]=6.5;
      arr1[13]=7;
      arr1[14]=9;
      arr1[15]=6.7;
      arr1[16]=3.5;
      arr1[17]=8.5;
      arr1[18]=6.8;
      arr1[19]=8.2;
      arr1[20]=6.7;
      arr1[21]=3.5;
      arr1[22]=7.5;
      arr1[23]=7.2;
      arr1[24]=3.7;
      arr1[25]=6.7;
    }
    void operator =(director r1)
    {
      if(num=="01") n1=1;
      else if(num=="02") n1=2;
      else if(num=="03") n1=3;
      else if(num=="04") n1=4;
      else if(num=="05") n1=5;
      else if(num=="06") n1=6;
      else if(num=="07") n1=7;
      else if(num=="08") n1=8;
      else if(num=="09") n1=9;
      else if(num=="10") n1=10;
      else if(num=="11") n1=11;
      else if(num=="12") n1=12;
      else if(num=="13") n1=13;
      else if(num=="14") n1=14;
      else if(num=="15") n1=15;
      else if(num=="16") n1=16;
      else if(num=="17") n1=17;
      else if(num=="18") n1=18;
      else if(num=="19") n1=19;
      else if(num=="20") n1=20;
      else if(num=="21") n1=21;
      else if(num=="22") n1=22;
      else if(num=="23") n1=23;
      else if(num=="24") n1=24;
      else if(num=="25") n1=25;
    }

    void get_director()
    {

     ifstream infille;
   infille.open("director.dat");
   cout<<"\nthe name of the directors are:\n";
while(infille.eof()!=1)
 {
getline(infille,data);
size_t found = data.find(".");
if(found!=string::npos)
cout<<data<<endl;
 }
 infille.close();
   ifstream infile;
   infile.open("director.dat");
    cout<<"\nEnter director no.";
    getline(cin,num);
   // open a file in read mode.
   cout << "Reading from the file" << endl;
cout<<"\n";

while(infile.eof()!=1)
 {
getline(infile,data);
size_t found = data.find(num);
if(found!=string::npos)
{
cout<<data<<endl;       //final output to be stored in string
ans1=data;
 }
 }
infile.close();
}
};
 class producer
 {

public:
    int n2;
    float arr2[26];
     std::size_t pos;
 std::string str3;
   string data;
    string str1;
    string num;
    string ans2;
    char op;
    producer()
    {
      arr2[1]=4.8;
      arr2[2]=4.5;
      arr2[3]=7.8;
      arr2[4]=5.8;
      arr2[5]=6.7;
      arr2[6]=3.5;
      arr2[7]=4.5;
      arr2[8]=7.6;
      arr2[9]=6.3;
      arr2[10]=6.7;
      arr2[11]=3.5;
      arr2[12]=4.5;
      arr2[13]=7.5;
      arr2[14]=9.2;
      arr2[15]=6.7;
      arr2[16]=6.5;
      arr2[17]=4.5;
      arr2[18]=7.6;
      arr2[19]=9.3;
      arr2[20]=6.7;
      arr2[21]=5.5;
      arr2[22]=4.5;
      arr2[23]=7.5;
      arr2[24]=9.2;
      arr2[25]=6.7;
    }
    void operator =(producer r1)
    {
      if(num=="01") n2=1;
      else if(num=="02") n2=2;
      else if(num=="03") n2=3;
      else if(num=="04") n2=4;
      else if(num=="05") n2=5;
      else if(num=="06") n2=6;
      else if(num=="07") n2=7;
      else if(num=="08") n2=8;
      else if(num=="09") n2=9;
      else if(num=="10") n2=10;
      else if(num=="11") n2=11;
      else if(num=="12") n2=12;
      else if(num=="13") n2=13;
      else if(num=="14") n2=14;
      else if(num=="15") n2=15;
      else if(num=="16") n2=16;
      else if(num=="17") n2=17;
      else if(num=="18") n2=18;
      else if(num=="19") n2=19;
      else if(num=="20") n2=20;
      else if(num=="21") n2=21;
      else if(num=="22") n2=22;
      else if(num=="23") n2=23;
      else if(num=="24") n2=24;
      else if(num=="25") n2=25;
    }


    void get_producer()
    {
         ifstream infille;
   infille.open("producer.dat");
   cout<<"\nthe name of the producers are:\n";
while(infille.eof()!=1)
 {
getline(infille,data);
size_t found = data.find(".");
if(found!=string::npos)
cout<<data<<endl;
 }
 infille.close();
   ifstream infile;
   infile.open("producer.dat");
    cout<<"\nEnter producer no.";
    getline(cin,num);

   // open a file in read mode.
   cout << "Reading from the file" << endl;
cout<<"\n";

while(infile.eof()!=1)
 {
getline(infile,data);
size_t found = data.find(num);
if(found!=string::npos)
{
cout<<data<<endl;       //final output to be stored in string
ans2=data;
 }
 }
infile.close();

}

 };
 class actor
 {

public:
     int n3;
     std::size_t pos;
 std::string str3;
   string data;
    string str1;
    string num;
    string ans3;
    float arr3[26];
    char op;


    actor()
    {
      arr3[1]=6.5;
      arr3[2]=4.5;
      arr3[3]=7.4;
      arr3[4]=9.1;
      arr3[5]=6.7;
      arr3[6]=6.5;
      arr3[7]=4.5;
      arr3[8]=7.4;
      arr3[9]=8.2;
      arr3[10]=6.7;
      arr3[11]=3.5;
      arr3[12]=4.5;
      arr3[13]=7.4;
      arr3[14]=9.2;
      arr3[15]=6.7;
      arr3[16]=3.5;
      arr3[17]=4.5;
      arr3[18]=7.7;
      arr3[19]=9.2;
      arr3[20]=6.7;
      arr3[21]=3.5;
      arr3[22]=4.5;
      arr3[23]=7.3;
      arr3[24]=8.3;
      arr3[25]=6.7;
    }
    void operator =(actor r1)
    {
      if(num=="01") n3=1;
      else if(num=="02") n3=2;
      else if(num=="03") n3=3;
      else if(num=="04") n3=4;
      else if(num=="05") n3=5;
      else if(num=="06") n3=6;
      else if(num=="07") n3=7;
      else if(num=="08") n3=8;
      else if(num=="09") n3=9;
      else if(num=="10") n3=10;
      else if(num=="11") n3=11;
      else if(num=="12") n3=12;
      else if(num=="13") n3=13;
      else if(num=="14") n3=14;
      else if(num=="15") n3=15;
      else if(num=="16") n3=16;
      else if(num=="17") n3=17;
      else if(num=="18") n3=18;
      else if(num=="19") n3=19;
      else if(num=="20") n3=20;
      else if(num=="21") n3=21;
      else if(num=="22") n3=22;
      else if(num=="23") n3=23;
      else if(num=="24") n3=24;
      else if(num=="25") n3=25;
    }

    void get_actor()
    {
         ifstream infille;
   infille.open("actor.dat");
   cout<<"\nthe name of the actors are:\n";
while(infille.eof()!=1)
 {
getline(infille,data);
size_t found = data.find(".");
if(found!=string::npos)
cout<<data<<endl;
 }
 infille.close();
   ifstream infile;
   infile.open("actor.dat");
    cout<<"\nEnter actor no.";
    getline(cin,num);
   // open a file in read mode.
   cout << "Reading from the file" << endl;
cout<<"\n";

while(infile.eof()!=1)
 {
getline(infile,data);
size_t found = data.find(num);
if(found!=string::npos)
{
cout<<data<<endl;       //final output to be stored in string
ans3=data;
 }
 }
infile.close();

}
};
 class actress
 {

public:
     int n;
     std::size_t pos;
 std::string str3;
   string data;
    string str1;
    string num;
    string ans4;
    float arr[26];
    char op;
    actress()
    {
      arr[1]=8.5;
      arr[2]=4.5;
      arr[3]=7.7;
      arr[4]=8.3;
      arr[5]=6.7;
      arr[6]=3.5;
      arr[7]=4.5;
      arr[8]=7.6;
      arr[9]=6.8;
      arr[10]=6.7;
      arr[11]=6.5;
      arr[12]=4.5;
      arr[13]=7.4;
      arr[14]=9.3;
      arr[15]=6.7;
      arr[16]=3.5;
      arr[17]=4.5;
      arr[18]=7.1;
      arr[19]=9.3;
      arr[20]=6.7;
      arr[21]=3.5;
      arr[22]=4.5;
      arr[23]=7.5;
      arr[24]=9.2;
      arr[25]=6.7;
    }
    void operator =(actress r1)
    {
      if(num=="01") n=1;
      else if(num=="02") n=2;
      else if(num=="03") n=3;
      else if(num=="04") n=4;
      else if(num=="05") n=5;
      else if(num=="06") n=6;
      else if(num=="07") n=7;
      else if(num=="08") n=8;
      else if(num=="09") n=9;
      else if(num=="10") n=10;
      else if(num=="11") n=11;
      else if(num=="12") n=12;
      else if(num=="13") n=13;
      else if(num=="14") n=14;
      else if(num=="15") n=15;
      else if(num=="16") n=16;
      else if(num=="17") n=17;
      else if(num=="18") n=18;
      else if(num=="19") n=19;
      else if(num=="20") n=20;
      else if(num=="21") n=21;
      else if(num=="22") n=22;
      else if(num=="23") n=23;
      else if(num=="24") n=24;
      else if(num=="25") n=25;
    }

    void get_actress()
    {
     ifstream infille;
   infille.open("actress.dat");
   cout<<"\nthe name of the actress are:\n";
while(infille.eof()!=1)
 {
getline(infille,data);
size_t found = data.find(".");
if(found!=string::npos)
cout<<data<<endl;
 }
 infille.close();
   ifstream infile;
   infile.open("actress.dat");
    cout<<"\nEnter actress no.";
    getline(cin,num);


   // open a file in read mode.
   cout << "Reading from the file" << endl;
cout<<"\n";

while(infile.eof()!=1)
 {
getline(infile,data);
size_t found = data.find(num);
if(found!=string::npos)
{
cout<<data<<endl;       //final output to be stored in string
ans4=data;
}
 }
infile.close();

}
 };
 class result:public movie,public director,public producer,public actor,public actress
 {
public:
   double d,p,a,ac,res;
    float calculation()
    {
        res=((arr1[n1]+arr2[n2]+arr3[n3]+arr[n])/4);
       return res;
}

    void display()
    {

       cout<<endl<<"The Title of the movie = "<<title;
       cout<<endl<<"The director of the movie = "<<ans1<<" having rating ="<<arr1[n1];
       cout<<endl<<"The producer of the movie = "<<ans2<<" having rating ="<<arr2[n2];
       cout<<endl<<"The actor of the movie = "<<ans3<<" having rating ="<<arr3[n3];
       cout<<endl<<"The actress of the movie = "<<ans4<<" having rating ="<<arr[n];

     if(res<5)
     {
	 cout<<"\nREVIEW="<<res;
	 	 cout<<"\nMovie is flop !!!!!!!";}
   else if(res>4 && res<7)
     {	 cout<<"\nREVIEW="<<res;
	  cout<<"\nMovie is hit !!!!!!!";}
   else
   {
   cout<<"\nREVIEW="<<res;
      cout<<"\nMovie is SuperHit!!!";}


    }
 };
int main()
{
result r1;
r1.get_title();
r1.get_director();
r1.get_producer();
r1.get_actor();
r1.get_actress();
r1=r1;
r1.calculation();
r1.display();
getch();
return 0;
}
