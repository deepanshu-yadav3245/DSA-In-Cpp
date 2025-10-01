//  For Loop :--

#include <iostream>  
using namespace std;  
int main() {  
         for(int i=1; i<=5;  i++) {      
            cout << i <<"\n";      
          }       
    }  
    
// gota statement 
#include <iostream>  
using namespace std;  
int main()  
{  
ineligible:    
         cout<<"You are not eligible to vote!\n";    
      cout<<"Enter your age:\n";    
      int age;  
      cin>>age;  
      if (age < 18){    
              goto ineligible;    
      }    
      else    
      {    
              cout<<"You are eligible to vote!";     
      }         
}  