#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int **allocMatrix(int r, int c)
{
    int **m;
    m = new int*[r];
    for(int i = 0 ; i < r ; i++)
        m[i] = new int[c]; 
    return m;
}

void inputMatrix(int **m, int r, int c)
{
        for(int i = 0 ; i < r ; i++)
                for(int j = 0 ; j < c ; j++)
                    {
                        cout<<"Enter ["<<i<<"]["<<j<<"] th element ";
                        cin >> m[i][j];
                    }
}

void displayMatrix(int ** m, int r, int c)
{
        for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                    cout << setw(5)<< m[i][j];
                cout<<endl;
            }
}


int  **cofactor(int  **m, int index, int s)  // function to extarct the minor of m[0][index]
{
    int **c = allocMatrix((s-1),(s-1)); //space allocation for minor matrix

    int  ci=0,cj=0;  //  indices for the minor matrix c
    int  i,j;      // indices for orginal martix m

    // copying suitable eles from m to c excluding 0th row & (index) cloumn
    for(i=1;i<s;i++)
    {
        cj=0;
        for(j=0;j<s;j++)
        {
            if(j!=index)
                c[ci][cj++]=m[i][j];
        }
        ci++;
    }
    displayMatrix(c,(s-1),(s-1));
    return c;

}

int matrixDet(int **m, int n)
{
    if(n==1)
        return m[0][0];
    else if(n==2)
        return((m[0][0]*m[1][1])-(m[0][1]*m[1][0]));
    else
    {
        int res=0, i=0;  // row is always fixed

        for(int j=0;j<n;j++)
        {
            int **cofMat=cofactor(m,j,n);  // function to extarct the minor of m[0][j]
            res += (pow(-1,(i+j)) * m[0][j] * matrixDet(cofMat,(n-1)));
            //  deallocMatrix(cofMat,(n-1));
            cout<<" [0]["<<j<<"] res = "<<res<<endl;
        }
        return res;
    }
}
        

int main(void)
{
    
        int r,c;
        cout << "Enter size of matrix (rows,cols):\n";
        cin>>r>>c;

        int **mat1 = allocMatrix(r,c); //space allocation for matrix

        inputMatrix(mat1,r,c); // readung the elements of the matrix
        cout << "Displaying the Matrix:\n";
        displayMatrix(mat1,r,c);

       if(r==c)
         cout<<" Finding Determinant :: \n "<<matrixDet(mat1,r)<<endl;

       //  deallocMatrix(cofMat,(n-1));

     int  a[2][3]={{1,2,3},{4,5,6}};

     int  **b=(int **)a;
     //cout<<b[0][2]<<endl;

        return 0;
}