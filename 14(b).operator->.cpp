#include<iostream>
using namespace std;
class loc {
   public:
   int a;
   loc *operator->()
   {
       return this;
   }
    
};
int main()
{
    loc ob;
    ob->a=10;
    cout<<ob.a<<" "<<ob->a;
    return 0;
}
