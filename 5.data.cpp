#include<iostream>
#include<cstdio>
using namespace std;
class date
{
    int day,month,year;
    public:
    date(char *d);
    date(int d,int m,int y);
   
    void show();
};
date::date(char *d)
{
    sscanf(d, "%d%*c%d%*c%d", &month, &day, &year);
}
date::date(int m,int d,int y)
{
    day=d;
    month=m;
    year=y;
}
 void date::show()
{
    cout<<month<<"/"<<day<<"/"<<year<<"\n"; 
}
int main()
{
    date ob(10,25,2003),ob1("10/25/2003");
    ob.show();
    ob1.show();
}
