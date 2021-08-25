#include<iostream>
#include"shpes.h"
using namespace std;
        // double length=0.0;
        // double width=0.0;
        //     void getDimensions()
        //     {
        //         try{
        //         cout<<"Enter the width\n";cin>>width;
        //         if((!(double)width)||(width==0.0)){throw "width must be more than 0\n";}
        //         }catch(const char* msg)
        //         {
        //             cout<<msg<<endl;
        //             do{
        //             cout<<msg<<endl;
        //             cin>>width;
        //             }while(width==0.0);
        //         }
        //     }
int main()
{
// int x,y;
// cout<<"Enter";
// cin>>x>>y;
// try{
//     if(y==0)
//     {
//         throw " thats not funny";
//     }
// else{cout<<x/y;}
// }
// catch(const char*msg)
// {
//     do{
//     cout<<msg<<endl;
//     cin>>y;
//     }while(y==0);
//     cout<<x/y;

// }
shape sh;
sh.Decideshape();
sh.area();
}