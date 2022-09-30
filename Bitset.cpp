#include <iostream>
#include<bitset>
using namespace std;
int main()
{
    bitset<8> data;
    cout<<data<<endl;
    cout<<data.set(4)<<endl;  //bitset
    cout<<data.reset()<<endl;  //bit reset
    cout<<data.flip(2)<<endl;  //bit flip
    cout<<data.flip(2)<<endl;  //onece again bit flip this time bit position is normal
    cout<<(data>>=1)<<endl;  //bit right shifted


     bitset<4> data1(10);
     cout<<data1<<endl;
     cout<<(data1<<=2)<<endl;  //bit left shifted
     cout<<(data1>>=1)<<endl;  //bit right shifted
     cout<<(~data1)<<endl;    //bit not operator

}
