#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int fact=1;
    if(n==1|| n==0){
        fact=1;
    }else{
        for(int i=2; i<=n;i++){
            fact= i * fact;
    }
    }
    cout<<"The sum of "<<n<<" is: "<<fact<<endl;
    
    return 0;
}
