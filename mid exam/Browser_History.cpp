#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> addresses;
    string address;
    while (cin >> address && address!= "end")
    {  
        addresses.push_back(address);
        
    }
    int Q;
    cin>>Q;
    string visit_add,visit_web;
    auto cur = addresses.begin();
    while (Q--)
    {
        cin>>visit_add;
        if (visit_add =="visit")
        {
            cin>>visit_web;
            bool found =false;
            for(auto it = addresses.begin();it !=addresses.end();it++)
            {
                if(*it == visit_web)
                {
                    cur=it;
                    found=true;
                    break;
                }

            }
            if (found)
            {
                cout<<*cur<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        else if(visit_add =="next")
        {
            if(cur !=addresses.end())
            {
                ++cur;
            }
            if(cur!= addresses.end())
            {
                cout<<*cur <<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
                --cur;
            }
        }
        else if(visit_add=="prev")
        {
            if(cur!= addresses.begin())
            {
                cur--;
                cout<<*cur<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;;
            }
        }
    }
    
    
    return 0;
}