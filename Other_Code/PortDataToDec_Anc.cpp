#include <bits/stdc++.h>
using namespace std;

#define DATASIZE 100

string s[DATASIZE];


int main()
{
    cout<<"This program is inteded to transform the data of distances between each pair of anchors from the port into the decimal representation."<<endl;
    cout<<"Please input the port data."<<endl;
    for(int i=0; i<DATASIZE;i++)
    {
        //cin>>s[i];
        getline(cin,s[i]);
    }
    for(int i=0;i<DATASIZE;i++)
    {
        string temp;
        temp=s[i].substr(15,8);
        int tempnum;
        tempnum=std::stoi(temp);
        //cout<<temp<<endl;
        //cout<<tempnum<<endl;
        int x = stoi(temp, nullptr, 16);
        cout << x <<endl;
    }
    cout<<endl;
    for(int i=0;i<DATASIZE;i++)
    {
        string temp;
        temp=s[i].substr(24,8);
        int tempnum;
        tempnum=std::stoi(temp);
        //cout<<temp<<endl;
        //cout<<tempnum<<endl;
        int x = stoi(temp, nullptr, 16);
        cout << x <<endl;
    }
    cout<<endl;
    for(int i=0;i<DATASIZE;i++)
    {
        string temp;
        temp=s[i].substr(33,8);
        int tempnum;
        tempnum=std::stoi(temp);
        //cout<<temp<<endl;
        //cout<<tempnum<<endl;
        int x = stoi(temp, nullptr, 16);
        cout << x <<endl;
    }
    cout<<"Done."<<endl;
    return 0;
}