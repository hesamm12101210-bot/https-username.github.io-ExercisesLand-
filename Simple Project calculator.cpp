#include <iostream> 
using namespace std;

int main()
{
//____________________________________
                       // Calculator
//____________________________________

    /*Variables*/	
  
    double num1, num2;
      
     char Operator;
  
//____________________________________.1
  //loop & objects
         
      while(true)

{
        cout <<":";
         cin   >>num1;
        
        cout <<":";
         cin   >>Operator;
        
        cout <<":";
         cin  >>num2;

        
   //__________________________________.2  
  //Conditions
  
           
       if (Operator == '+')
           cout <<num1+num2;
              cout <<endl;
               
               
       if (Operator == '-')
           cout <<num1-num2; 
               cout <<endl;
                
                
       if (Operator == '*')
           cout <<num1*num2;
               cout <<endl;
               
                
       if (Operator == '/')
           cout <<num1/num2;
               cout <<endl;
                
       if (Operator != '+' && Operator != '-' &&                      Operator != '*' && Operator != '/' )
    
       if (cin.fail())
{
    cout << "Error!!!" << endl;

    cin.clear();          
    cin.ignore(1000,'\n'); 

    continue;         
}
              
}

                      
//____________________________________.3
    //Please note! (×) = (*) (÷) = (/)

	return 0;
}
