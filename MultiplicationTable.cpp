#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0){
        cout<<0;
    }else{
        cout<<"Multiplication of table "<<n<<endl;
        for(int i=1; i<=10;i++){
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;;
    }
    }
    
    
    return 0;
}
