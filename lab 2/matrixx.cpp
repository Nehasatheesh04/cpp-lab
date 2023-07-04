#include<iostream>
using namespace std;

class Matrix
{
    private:
    int **p;
    int rows, columns;

    public:
    Matrix()
    {
        rows = 0;
        columns = 0;
    }
    Matrix(int r, int c)
    {
        rows = r;
        columns = c;

        p = new int*[rows];
        
        for(int i = 0; i < rows; i++)
        {
            p[i] = new int[columns];
        }
    }

    void fillMatrix();
    void printMatrix();
    Matrix operator+(Matrix);
    Matrix operator*(Matrix);   
};

void Matrix::fillMatrix()
{
    int value;
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout<<"Enter the element for row "<< i <<" column "<< j <<": ";
            cin>>value;
            p[i][j] = value;
        }
    }
}

void Matrix::printMatrix()
{
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            cout << p[i][j] << " ";
        }
        cout << "\n";
    }
}

Matrix Matrix::operator+(Matrix m2)
{
    Matrix m3(rows, columns);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            m3.p[i][j] = p[i][j] + m2.p[i][j];
        }
    }
    return m3;
}

Matrix Matrix::operator*(Matrix m2)
{
    Matrix m4(rows, m2.columns);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < m2.columns; j++)
        {
            m4.p[i][j] = 0;
        }
    }

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < m2.columns; j++)
        {
            for(int k = 0; k < columns; k++)
            {
                m4.p[i][j] += p[i][k] * m2.p[k][j];
            }
        }
    }
    return m4;
}

int main()
{
    int rows1, rows2, columns1, columns2;
    char status;
    int choice;
    
    cout<<"********* MATRICES **********"<<"\n";
    cout<<"MATRIX 1"<<"\n";
    cout<<"Enter no. of rows preferred= ";
    cin>>rows1;
    cout<<"Enter no. of columns preferred= ";
    cin>>columns1;
    Matrix M1(rows1, columns1);
    M1.fillMatrix();

    cout<<"MATRIX 2"<<"\n";
    cout<<"Enter no. of rows preferred= ";
    cin>>rows2;
    cout<<"Enter no. of columns preferred= ";
    cin>>columns2;
    Matrix M2(rows2, columns2);
    M2.fillMatrix();

    cout<<"Matrix 1: "<<"\n";
    M1.printMatrix();
    cout<<"\n";

    cout<<"Matrix 2: "<<"\n";
    M2.printMatrix();
    cout<<"\n";

    do
    {
        cout<<"******** MATRIX OPERATIONS ***********"<<"\n";
        cout<<"1.Matrix Addition"<<"\n";
        cout<<"2.Matrix Multiplication"<<"\n";
        
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(rows1==rows2 && columns1==columns2)
                {
                    Matrix M3(rows1, columns1);
                    M3=M1+M2;
                    cout<<"The sum of the two matrices: "<<"\n";
                    M3.printMatrix();
                }
                else
                {
                    cout<<"Addition cannot be performed on these two matrices";
                }
                break; 

            case 2:
                if(rows2==columns1)
                {
                    Matrix M4(rows1, columns2);
                    M4=M1*M2;
                    cout<<"The product of the two matrices: "<<"\n";
                    M4.printMatrix();
                }
                else
                {
                    cout<<"Multiplication cannot be performed on these two matrices";
                }
                break;
        }

        cout<<"Do you want to continue?(y/n) ";
        cin>>status;

    } while (status=='y' || status=='Y');
    
    cout<<"Thank you!"<<"\n";
    cout<<"Exiting....."<<"\n";
    return 0;

}