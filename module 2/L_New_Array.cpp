// #include<bits/stdc++.h>
// using namespace std;

// vector<int> v(int n, vector<int>& A, vector<int>& B) 
// {
//     vector<int> C;
    
//     C.insert(C.end(), B.begin(), B.end());
//     C.insert(C.end(), A.begin(), A.end());
    
//     return C;
// }

// int main() 
// {
//     int n;
//     cin >> n;
    
//     vector<int> A(n);
    
//     for (int i = 0; i < n; ++i) 
//     {
//         cin >> A[i];
//     }
    
//     vector<int> B(n);
//     for (int i = 0; i < n; ++i) 
//     {
//         cin >> B[i];
//     }
    
//     vector<int> C = v(n, A, B);
    
//     for (int i = 0; i < C.size(); ++i) 
//     {
//         cout << C[i] << " ";
//     }
    
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;

vector<int> v(int n, vector<int>& A,vector<int>& B)

{
    vector<int> C ;

    C.insert (C.end(),B.begin(),B.end());
    C.insert (C.end(),A.begin(),A.end());

    return C;


}

int main()
{
    int n ;
    cin>>n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin>> A[i];
    }

    vector<int> B(n);

    for (int i = 0; i < n; i++)
    {
        cin>> B[i];
    }
    


    vector<int> C= v(n,A,B);

    for (int i = 0; i < C.size(); i++)
    {
        cout << C[i] << " ";
    }
    

    return 0;
}