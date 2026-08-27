#include<iostream>
// #include<array>
// #include<vector>
// #include<deque>
// #include<list>
// #include<stack>
// #include<queue>
// #include<set>
#include<map>

using namespace std;

int main()
{
    //=====================================ARRAY==================================
    // array <int , 6> a={1,2,3,4,5,6};
    // int size=a.size();

    // for(int i=0;i<size;i++)
    // {
    //     cout<<a[i];
    //     cout<<endl;
    // }

    // cout<<"element at 2nd index "<<a.at(2)<<endl;
    // cout<<"empty or not "<<a.empty()<<endl;
    // cout<<"first element->"<<a.front()<<endl;
    // cout<<"last element->"<<a.back()<<endl;

    //===============================VECTOR=======================================

    // vector <int> v;
    // vector <int> a(5,1);   //size=5, initialize by=1, by default by 0
    // vector<int>last(a);    //last() function to copy all the elements of a in last
    // cout<<"Size ->"<<v.capacity()<<endl;

    // v.push_back(1);
    // cout<<"capacity ->"<<v.capacity()<<endl;

    // v.push_back(2);
    // cout<<"capacity ->"<<v.capacity()<<endl;

    // v.push_back(3);
    // cout<<"capacity ->"<<v.capacity()<<endl;

    // v.push_back(4);
    // cout<<"capacity ->"<<v.capacity()<<endl;

    // cout<<"size"<<v.size()<<endl;

    // cout<<"element at 2nd index "<<v.at(2)<<endl;

    // front and back same operations as array

    // cout<<"before pop"<<endl;
    // for(int i:v)
    // cout<<i<<" ";
    // cout<<endl;

    // v.pop_back();
    // cout<<"after pop"<<endl;
    // for(int i:v)
    // cout<<i<<" ";

    // //clear doesnt remove the capacity only removes th size
    // cout<<"before clear-"<<v.size()<<endl;
    // v.clear();
    // cout<<"after clear-"<<v.size()<<endl;

    // =======================================deque===========================

    // deque <int> d;

    // d.push_back(1);
    // d.push_front(2);

    // for(int i:d)
    // cout<<i<<endl;

    // d.pop_back();  removes the element which is on the back--same with pop_front
    // for(int i:d)
    // cout<<i<<endl;

    // cout<<"print first index element "<<d.at(1)<<endl;

    // cout<<d.front()<<endl;
    // cout<<d.back()<<endl;

    // cout<<"empty or not "<<d.empty()<<endl;

    // cout<<"before erase "<<d.size()<<endl;
    // d.erase(d.begin(), d.begin()+1);
    // cout<<"after erasing "<<d.size()<<endl;

// ======================================list=========================================

// list <int> l;

// list <int> n(5, 100);    //copies the list l into n with 5 100's
// for(int i:n)
// cout<<i<<endl;

// l.push_back(1);
// l.push_front(2);

// for(int i:l)
// cout<<i<<endl;

// cout<<"before erase "<<l.size()<<endl;
// l.erase(l.begin());       //will remove 2
// cout<<"after erasing "<<l.size()<<endl;

// ====================================================STACK==================================

// stack <string> s;

// s.push("nancy");
// s.push("Prakriti");
// s.push("Rudraksh");

// cout<<"top element-"<<s.top()<<endl;
// s.pop();
// cout<<"now top element after poping-"<<s.top()<<endl;

// cout<<"size of stack "<<s.size()<<endl;
// cout<<"is it empty?"<<s.empty()<<endl;

// ==================================================queue================================

// queue <string> q;

// q.push("Nancy");
// q.push("Rudraksh");
// q.push("Prakriti");

// cout<<"size before pop "<<q.size()<<endl;
// cout<<"first element->"<<q.front()<<endl;
// q.pop();
// cout<<"first element->"<<q.front()<<endl;
// cout<<"size after pop "<<q.size()<<endl;

// ==============================PRIORITY QUEUE========================================

// priority_queue <int> maxi;   //to create max queue

// priority_queue <int , vector<int>, greater<int>> mini;

// maxi.push(1);
// maxi.push(2);
// maxi.push(3);
// maxi.push(4);

// int n=maxi.size();
// for(int i=0; i<n; i++)
// {
//     cout<<maxi.top()<<" ";
//     maxi.pop();
// }
// cout<<endl;

// mini.push(1);
// mini.push(2);
// mini.push(3);
// mini.push(4);

// int m=mini.size();
// for(int i=0; i<m; i++)
// {
//     cout<<mini.top()<<" ";
//     mini.pop();
// }
// cout<<endl;

// cout<<"khali h kya ??"<<mini.empty();

// ============================================SET====================================

// Always in sorted order
// Dont add duplicate elements
// modification is not allowed
// set is slower than unordered set
// elements are random while fwtching in unorderde set
// insert, erase, find, count ki time complexity=O(log n) hoti h
// size, begin, empty, end ki O(1) hoti h

// set <int> s;     
// s.insert(6);
// s.insert(4);
// s.insert(8);
// s.insert(1);
// s.insert(0);

// for(auto i: s)
// cout<<i<<" ";
// cout<<endl;

// s.erase(s.begin());
// for(auto i: s)
// cout<<i<<" ";
// cout<<endl;

// set <int>::iterator it=s.begin();
// it++;
// s.erase(it);
// for(auto i: s)
// cout<<i<<" ";
// cout<<endl;

// cout<<"4 is present or not->?"<<s.count(4)<<endl;
// cout<<"5 is present or not->?"<<s.count(5)<<endl;

// set <int>::iterator itr=s.find(5);
// for(auto it=itr; it!=s.end(); it++)
// cout<<*it<<" ";
// cout<<endl;

// ===========================================MAP===================================

// key value pairs
// every key is unique
// erase, insert, find, count--->O(log n) 
map <int, string> m;
m[1]="Nancy";
m[2]="Maurya";
m[20]="Udaipur";
m.insert({5, "Rajasthan"});

cout<<"before erase"<<endl;
for(auto i: m)
cout<<i.first<<" "<<i.second<<endl;

cout<<"finding 20 "<<m.count(20)<<endl;

m.erase(20);
cout<<"after erase"<<endl;
for(auto i: m)
cout<<i.first<<" "<<i.second<<endl;

auto it=m.find(2);
for(auto i=it; i!=m.end(); i++)
cout<<(*i).first<<endl;







}