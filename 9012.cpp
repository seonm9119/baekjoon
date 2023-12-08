#include <iostream>
using namespace std;

bool validVPS(){

    int cnt=0;
    string parentness;
    cin >> parentness;

    for(int i=0; i<parentness.size(); i++){
        if(parentness[i]=='(') cnt++;
        else if(!cnt) return false;
        else cnt--;
    }
    
    return (!cnt) ? true : false;
}

int main(){

    int t;
    cin >> t;
    
    while(t--){
        
        bool vps = validVPS();
        cout << ((vps==true) ? "YES" : "NO") << "\n";

    }

    return 0;
}