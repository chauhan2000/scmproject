#include <iostream>

using namespace std;

class simpleinterest
{
private:
    int p;
    float r;
    int t;
public:
    simpleinterest(int p1,int r1,int t1)
    {
	    //enter the given values
       // <<"Enter principal amount, rate of interest, time period.\n";
        //>>p>>r>>t;
        p=p1;
        r=r1;
        t=t1;

    }
    void calculate()
    {
        float c;
        c=(p*r*t)/100;
   cout<<"it's sajal";//Formula for si is given above
     cout<<"The simple interest is "<<c<<" after a period of "<<t<<" years";
    }
};
int main()
{
    int l,m,n;
    cout<<"Enter principal, rate, time period.\n";
    cin>>l>>m>>n; // commenting by the owner(Rachit) now taking values from the user
    //simpleinterest object;  //calling of default const
    simpleinterest object(l,m,n);  //calling of default const
    object.calculate();
    return 0;
}
