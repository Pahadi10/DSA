// Write a function to print counting from 1 to N
    
    #include <iostream>
    using namespace std;


    void printCounting(int n){
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }

    }

    int main()
    {
        int n;
    cout<<"Give N: ";
    cin>>n;
    cout<<endl;
    printCounting(n);

    }