#include<iostream>
using namespace std;


int main()
{
    cout<<"Interger pointers...."<<endl;
    // initializing pointer variables
    int *p3=NULL; int *p4=(int *)2004;
	cout<<"NULL pointer assignment value "<<p3<<endl;
	//cout<<(*p4)<<endl;

	int i=5,j=7;
	int *p1=&i,*p2=&j;
	//difference of two pointer variables
	cout<<" p1= "<<p1<<" p2= "<<p2<<" (p2-p1)= "<<(p2-p1)<<endl;
	//comparison between two pointer variables
	cout<<"p1<=p2 is "<<(p1<=p2)<<", p1==p2 is "<<(p1==p2)<<endl;
    // inc/dec of pointers; adding constant value
	cout<<"sizeof(int)="<<sizeof(int)<<" (++p1)= "<<(++p1)<<" (--p2)=  "<<(--p2)<<"  (p1+=2)= "<<(p1+=2)<<"   "<<endl;

	cout<<"Float pointers...."<<endl;
	float f1=2.3, f2=4.5;
	float *pf1=&f1, *pf2=&f2;
    // inc/dec of pointers; adding constant value
	cout<<"sizeof(float)="<<sizeof(float)<<" pf1= "<<pf1<<" (++pf1)= "<<(++pf1)<<"  pf2=  "<<pf2<<" (pf2+=2)= "<<(pf2+=2)<<endl;
    //incompatible assignments
    pf1=(float *)p1;

    // sizeof various pointer variable types
    cout<<"sizeof(int *)= "<<sizeof(int *)<<"   sizeof(float *)= "<<sizeof(float *)<<"   sizeof(char *)= "<<sizeof(char *)<<"   sizeof(float **)= "<<sizeof(float **)<<endl;

    // multiple indirections
    int x=5;  int *px1=&x;  int * *px2=&px1;  int ** *px3=&px2;
    cout<<"x= "<<x<<" *px1= "<<*px1<<" **px2= "<<**px2<<" ***px3= "<<***px3<<endl;


    // constants & pointers
    int  y=10;
    const  int  *pc1=&y;  cout<<"y= "<<y<<" pc1= "<<pc1<<" y++ is "<<++y<<" ++pc1 is "<<++pc1<<endl; //" ++(*pc1) is "<<++(*pc1)<<endl;
    int  const  *pc2=&y;  cout<<"y= "<<y<<" pc2= "<<pc2<<" y++ is "<<++y<<" ++pc2 is "<<++pc2<<endl;
    int  * const pc3=&y;  cout<<"y= "<<y<<" pc3= "<<pc3<<" y++ is "<<++y<<" ++(*pc3) is "<<++(*pc3)<<endl; // " ++pc3 is "<<++pc3
    const int * const pc4=&y;  cout<<"y= "<<y<<" pc4= "<<pc4<<" y++ is "<<++y<<endl;  //" ++(*pc4) is "<<++(*pc4)<<" ++pc3 is "<<++pc3


    // pointers & arrays
    int  a[4]={2,4,6,8};
    cout<<" a= "<<a<<" &a= "<<&a<<" a+1 "<<a+1;  //<<" a++ "<<++a<<endl;


    int  b[2][3]={{2,4,6},{3,5,9}};
    cout<<" b= "<<b<<" &b= "<<&b<<" b+1 "<<b+1;  //<<" b++ "<<++b<<endl;
    return 0;
}