#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m;
    cin >> n;
    vector<int>num(n);
    for(int i=0;i<n;i++){
        cin >> num[i];
    }
    cin >> m;
    vector<int>target(m);
    for(int i=0;i<m;i++){
        cin >> target[i];
    }
    int countFront = 0;
    int countBack = 0;
    for(auto i = target.begin();i<=target.end();i++){
        for(int j=0;j<num.size();j++){
            if(num[j]==*i){break;}
            else{countFront++;}
        }

        for(int k=num.size()-1;k>=0;k--){
            if(num[k]==*i){break;}
            else{countBack++;}
        }
    }
    std::cout << countFront << " " << countBack << endl;
}
