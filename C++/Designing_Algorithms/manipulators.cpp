// C++ manipulators
#include<iostream> 
#include<iomanip>
using namespace std; 

int main() 
{ 
   float x=0.1;
   float y=1.0;
   float z=1234.0;
   int a=15, b=20;

   cout<< x << " " << y <<" "<< z <<endl;
   cout<< fixed << x <<" "<< y <<" "<< z <<endl;
   cout<< scientific << x <<" "<< y <<" "<< z <<endl;
   cout<< setprecision(20) << x <<" "<<endl;
   cout<< setw(8) << setfill('*') <<34<<48<<endl;
   cout<< setw(8) << 34<< setw(8) <<48<<endl;
   cout<< setw(8) << setfill(' ')<<right<<34<<56<<endl;
   cout<< setbase(8) << a << " " << b<< " " << 3.4<<endl;
    return 0; 
} 