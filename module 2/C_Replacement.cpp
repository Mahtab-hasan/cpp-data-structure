#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;

    vector<int> A(n);

    for (int i = 0; i < n; i++)
    {
        cin>> A[i];
    }


    for (int i = 0; i < n; i++)
    {
        if(A[i] > 0)
        {
            A[i] = 1;
        }
        else if (A[i] < 0)
        {
            A[i] = 2;
        }
    
       
        
    }
     for (const auto& x : A)
        {
            cout << x << " ";
        }

    cout << endl;
    
    
    return 0;
}


// #include <iostream>
// #include <vector>

// int main() {
//     int N;
//     std::cin >> N;

//     std::vector<int> A(N);

//     for (int i = 0; i < N; ++i) 
// {
//         std::cin >> A[i];
//     }

// //     // Perform the replacement
// //     for (int i = 0; i < N; ++i) 
//          {
// //         if (A[i] > 0) 
//          {
// //             A[i] = 1; 
// //         } 
//          else if (A[i] < 0) 
//          {
// //             A[i] = 2;
//             }
//     }

//     for (const auto& num : A) 
//      {
//         std::cout << num << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() 
// {
//     int n;
//     cin >> n;

//     vector<int> A(n);

//     for (int i = 0; i < n; ++i) 
//     {
//         cin >> A[i];
//     }

//     for (int i = 0; i < n; ++i) 
//     {

//         if (A[i] > 0) 
//         {
//             A[i] = 1;
//         } 
//         else if (A[i] < 0) 
//         {
//             A[i] = 2;
//         }
//     }

//     for (const auto& x : A) 
//     {
//         cout << x << " ";
//     }

//     cout << endl;

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     vector<int> A(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> A[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (A[i] > 0)
//         {
//             A[i] = 1;
//         }
//         else if (A[i] < 0)
//         {
//             A[i] = 2;
//         }

//         // Problematic section: Nested inside the first for loop
//         for (const auto& x : A)
//         {
//             cout << x << " ";
//         }
//     }

//     cout << endl;

//     return 0;
// }
