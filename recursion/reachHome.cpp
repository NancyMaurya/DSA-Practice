#include<iostream>
using namespace std;

void reachHome(int src, int dest)
{
    if(src==dest)
    {
        cout<<"reached home ";
        return;
    }

    src++;
    reachHome(src, dest);

}
int main()
{
    int src=1;
    int dest=10;

    reachHome(src, dest);
}