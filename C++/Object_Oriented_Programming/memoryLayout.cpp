#include<iostream>
using namespace std;

int   gx=5;
static int   gsx=10;

void funcNested(int lx_fn)
	    {
	    	cout<<" funcNested...  "<<"lx_fn = "<<lx_fn<<"  gsx= "<<gsx<<endl;
	    }

void func(int lx_f)
	{
		static int lsx_f=3;
		int *pf=&lx_f;

		cout<<" func...  "<<"lx_f = "<<lx_f<<"  lsx_f= "<<lsx_f<<"  gsx= "<<gsx<<endl;
		pf=(int *)malloc(sizeof(int));
        funcNested(lx_f);
        
	}

int main()
{ 
	int  lx_m=1;
	static int  lsx_m=2;
	int *pm=&lx_m;

    cout<<" main...  "<<"lx_m = "<<lx_m<<"  lsx_m= "<<lsx_m<<"  gsx= "<<gsx<<endl;
    pm=(int *)malloc(sizeof(int));
    func(lx_m);	

    int a[3];

    cout<<" a= "<<a<<" &a= "<<&a<<" (a+1)= "<<(a+1)<<endl;

    int b[2][4];

    cout<<" b= "<<b<<" &b= "<<&b<<" (b+1)= "<<(b+1)<<endl;
    return 1;
}