#include <iostream> 
using namespace std; 

int main() { 
    int ans = 0; 
    for(int i = 1; i <= 30; i++) { 
        int son = 1; 
        int dau = i; 
        int grandSon = i*(i*(i+1)/2); 
        ans+=son+dau+grandSon; 
    } 
    
    cout << ans << '\n'; 
}