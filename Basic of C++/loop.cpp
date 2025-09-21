//  For Loop :--

#include <iostream>  
using namespace std;  
int main() {  
         for(int i=1; i<=5;  i++) {      
            cout << i <<"\n";      
          }       
    }   


// While loop :---
#include <iostream>
using namespace std;

int main(){
    int n = 10;
    int count = 1;

    while(count <= n){
        cout << count << endl;
        count++;
    }
    return 0;
}




// do-while loop :-
#include <iostream>  
using namespace std;  
int main() {  
     int i = 1;    
          do{    
              cout<<i<<"\n";    
              i++;    
          } while (i <= 10) ;    
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