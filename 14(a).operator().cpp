#include<iostream>
using namespace std;
class loc {
    loc( ){}
    int longitude,latitude;
    public:
    loc (int lg,int lt){
        longitude=lg;
        latitude=lt;
    }
    void show()
    {
        cout<<longitude<<" "<<latitude<<"\n";
    }
    loc operator+(loc op2)
    {
        loc temp;
        temp.longitude=op2.longitude+longitude;
        temp.latitude=op2.latitude+latitude;
        return temp;
    }
    loc operator()(int i,int j)
    {
        longitude=i;
        latitude=j;
        return *this;
    }
};
int main()
{
    loc ob(10,20);
    loc ob1(1,1);
    ob.show();
    ob1(4,5);
    ob1.show();
    ob=ob+ob1(10,25);
    ob.show();
    return 0;
    
}
