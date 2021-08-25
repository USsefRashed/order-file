#include<iostream>
#include<cmath>
using namespace std;
class rectangle
{
    public:

        double length=0.0;
        double width=0.0;
            void getDimensions()
            {
                try{
                cout<<"Enter the length\n";cin>>length;
                if((!(double)length)||(length==0.0)){throw "length must be more than 0\n";}
                }catch(const char* msg)
                {
                    do{
                    cout<<msg<<endl;

                    cout<<"Renter the length"<<endl;
                    cin>>length;
                    }while(length==0.0);
                }
                try{
                cout<<"Enter the width\n";cin>>width;
                if(width==0.0){throw "width must be more than 0\n";}
                }catch(const char* msg)
                {
                    do{
                    cout<<msg<<endl;
                    cout<<"Renter the width"<<endl;
                    cin>>width;
                    }while(width==0.0);
                }
            }
            
};
class square
{
    public:
    double length;
        void getDimensions()
        {
            try{
                cout<<"Enter the length\n";
                cin>>length;
                if(length==0.0){throw "length must be more than 0\n";}
                }
            catch(const char* msg)
                {
                do
                {
                cout<<msg<<endl;
                cout<<"Renter the length"<<endl;
                cin>>length;
                }while(length==0.0);
                }
        }            
          
            
};
class shape:public square,rectangle
{
    private:
        char ans;
    public:
        void Decideshape()
            {
                cout<<"Rectangle----press---->('r')\nSquare----press---->('s')";cin>>ans;
            }
        void area()
            {
                if(ans=='s')
                    {
                        square s;s.getDimensions();
                        cout<< s.length<<"^2"<<" = "<<s.length*s.length<<"squareed unit"<<endl;
                    }
                    else if(ans=='r')
                        {
                            rectangle r;
                            r.getDimensions();
                            cout<<r.length<<" * "<<r.width<<" = "<<r.length*r.width<<endl;
                        }
                            else{cout<<"sorry invalid value\n";}
            }

};