/*In this challenge, write a program that takes in three arguments, a start temperature (in Celsius), 
an end temperature (in Celsius) and a step size. Print out a table that goes from the start 
temperature to the end temperature, in steps of the step size; you do not actually need to print 
the final end temperature if the step size does not exactly match. You should perform input 
validation: do not accept start temperatures less than a lower limit (which your code should 
specify as a constant) or higher than an upper limit (which your code should also specify). You 
should not allow a step size greater than the difference in temperatures. 

SAMPLE RUN:
  Please give in a lower limit, limit >= 0: 10
  Please give in a higher limit, 10 > limit <= 50000: 20
  Please give in a step, 0 < step <= 10: 4

  Celsius         Fahrenheit
  -------         ----------
  10.000000       50.000000
  14.000000       57.200000
  18.000000       64.400000
  
*/

#include <iostream>

using namespace std;

double convertCtoF(double);
double convertFtoC(double);
int header();
int footer();

int main(){
  double l,
      u,
      s;
         
  char choice;
  int y = 0;
      
  header();
  
    // ask for lower limit
    cout << "Please enter a lower limit, limit >= 0: ";
    cin >> l;
    cout << l << endl;
    //ask for higher limit
    cout << "Please enter a higher limit, limit <= 50000: ";
    cin >> u;
    cout << u << endl;
    //ask for step
    cout << "Please enter a step, 0 < step <= 10: ";
    cin >> s;
    cout << s << endl;
    
    if (y==0){
        // ask which conversion the user wants to do
        cout << "Which conversion would you like to do?" << endl
              << "(C)elsius to Fahrenheit"
              << " or (F)ahrenheit to Celsius?:" << endl;
        cin >> choice;
        cout << choice << endl;
        
        //convert function
        if (choice == 'C' || choice == 'c'){
            cout << "CELSIUS     FAHRENHEIT" << endl
                 << "-------     ----------" << endl;
            while (l<=u){
            	   cout << l << "         " << convertCtoF(l) << endl;
                 l += s;
            }
            y=1;
            
        } else if (choice == 'F' || choice == 'f'){
            cout << "FAHRENHEIT     CELSIUS" << endl
                 << "----------     -------" << endl;
            while (l<=u){
            	   cout << l << "         " << convertFtoC(l) << endl;
                 l += s;
            }
            y=1;
            
        } else {
            cout << "please enter a valid character";
            y=0;
        }
            return y;
    } else if(y==1){
    	char c;
    	cout << "Would you like to run the program again?" << endl
    		<< "Please enter (Y)es or (N)o" << endl;
    	cin >> c;
    	if (c == 'Y' || c == 'y'){
    		return y=0;
    	} else {
    		return y=2;
    	}
    } else 
  footer();
  
}

int header(){
  cout << "HELLO AND WELCOME TO THE CONVERSION PROGRAM!!" << endl
       << "---------------------------------------------" << endl;
  return 0;
}

double convertCtoF(double x){
  //Multiply by 9, then divide by 5, then add 32
  double a = x*9;
  double b = a/5;
  double c = b+32;
  return c;
}

double convertFtoC(double x){
  //Deduct 32, then multiply by 5, then divide by 9
  double a = x-32;
  double b = a*5;
  double c = b/9;
  return c;
}

int footer(){
  cout << "-------------------------------------------" << endl
       <<"THANK YOU FOR USING THE CONVERSION PROGRAM!!" << endl;
  return 0;
}

