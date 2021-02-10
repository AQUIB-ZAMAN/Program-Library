#include<iostream>
using namespace std;

int main(void)
{ 
	int  r,c;

   ////////////// CASE II (r =? & c = ?)  //////////////
	cout<<"Enter #rows, #cols : ";
	cin>>r>>c;
	
	// int **x=new int[r*c]; // DOESN'T WORK

    // Dy allocation doen in two steps
	// dyn allocating the array of row ptrs
	int **a = new int*[r];  //A

	// dyn allocating the rows one by one 
	// and binding each of them to the respective row pts
	for(int k=0;k<r;k++)
		a[k]=new int[c];     // B

	for(int i=0;i<r;i++)
		for(int j=0;j<c;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>a[i][j];
			cout<<"Value entered : "<<a[i][j]<<endl;
		}

   // dyn deallocation of each row one by one
   for(int i=0;i<r;i++)
   	  delete [] a[i];

   // dyn deallocation of the array of row ptrs
   delete [] a;
   ///////////////////////////////////////////////

   ////////////// CASE III (r known c = ?)  //////////////

    const int R=2;  // fixed known
    cout<<"Enter #cols : ";
	cin>>c;
	
	// static allocation of the array of row ptrs
	int *b[R];
 
    // dyn allocating the rows one by one 
	// and binding each of them to the respective row pts
	for(int k=0;k<R;k++)
		b[k]=new int[c];  

    for(int i=0;i<R;i++)
		for(int j=0;j<c;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>b[i][j];
			cout<<"Value entered : "<<b[i][j]<<endl;
		}

   // dyn deallocation of each row one by one
   for(int i=0;i<R;i++)
   	  delete [] b[i];   
   	////////////////////////////////////////////////////

    ////////////// CASE IV (r = ? c is known)  //////////////

    const int C=2;  // fixed, known
    cout<<"Enter #rows : ";
	cin>>r;
	
	// dyn allocation of the array of row ptrs 
	// pointing to fixed (C) sized rows
	// d is a ptr var capable of pointing to 1-D int arrays of size EXACTLY 'C'
	int (*d)[C] = new int[r][C]; // here rows are physically contigious

    for(int i=0;i<r;i++)
		for(int j=0;j<C;j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>d[i][j];
			cout<<"Value entered : "<<d[i][j]<<endl;
		}

   // dyn deallocation of the array of row ptrs
    delete  [] d;
    ///////////////////////////////////////////////////////

     ////////////// CASE V (r known c = ? varies in each row) //////////////

    const int S=2;  // fixed known
	
	// static allocation of the array of row ptrs
	int *e[S];
 
    // dyn allocating the rows one by one 
	// and binding each of them to the respective row pts
	for(int k=0;k<S;k++)
		{
			cout<<"Enter #cols in ["<<k<<"th] row :";
			cin>>c;
			e[k]=new int[c+1]; // one extra ele to store # cols
			e[k][0]=c;  // storing the #cols in the k-th row
		}

		
    for(int i=0;i<S;i++)
		for(int j=0;j<e[i][0];j++)
		{
			cout<<"a["<<i<<"]["<<j<<"] = ";
			cin>>e[i][j+1];
			cout<<"Value entered : "<<e[i][j+1]<<endl;
		}

   // dyn deallocation of each row one by one
   for(int i=0;i<S;i++)
   	  delete [] e[i];   
   	/////////////////////////////////////////////////////

}
