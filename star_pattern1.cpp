// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main() {
    
    // number of rows
    int rows;
    cin>>rows;
    
    // Outer Loop
    for(int i=1;i<=rows;i++){
        
        // Decide the number of columns
        int col=rows;
        
        if(i%2 == 0){
            col = rows-1;
        }
        
        // Inner Loop
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        
        // New Line
        cout<<endl;
    }

    return 0;
}
