#include<iostream>
#include<math.h>

using namespace std;
class Cube
{
    private:
    int side;
    public:
    
    friend istream& operator >>(istream& i, Cube& d);
    friend ostream& operator <<(ostream& o, Cube& c);
};
istream& operator>>(istream& i, Cube& d){
    cout<<"Enter the Side Of the cube";
    i>>d.side;
}
ostream& operator<<(ostream& o, Cube& c){
    o<<pow(c.side,3);
    
}
int main()
{
    Cube C1;
    cin>>C1;
    cout<<C1;
    return 0;
}