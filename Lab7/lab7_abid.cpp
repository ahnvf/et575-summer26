/*
Ahnaf Abid
June 3, 2026
Lab 7: Control Flow
*/

#include<iostream>

using namespace std;

int main (){

    cout<<"\n ---- Example 1: Bool variable"<<endl;
    // BOol variable to check if a number is positive
    // Declare variables
    int n;
    bool checkpositive; // Bool value are 0(false) or 1(true)

    // Collect number
    cout<<"Enter a number: ";
    cin>>n;

    // Check if a number is positive
    checkpositive = n > 0;

    // Print results
    cout<<"Is number " <<n<<" positive? "<<checkpositive<<endl;
    
    // Update checkpositive
    checkpositive = '%';
    // For a bool value that is not 0 or 1, the return is always 1

    cout<<"Updated checkpositive = "<<checkpositive<<endl;
    
    cout<<"\n ----- Example 2: If statement"<<endl;
    // Check if n is zero
    int c = 10;
    if(n==0){
        cout<<"n is zero!";
        c += 20;
    }

    cout<<"\t Value of c = "<<c<<endl;

    cout<<"\n ---- Example 3: if-else statement"<<endl;
    // if-else behaves as a ON/OFF switch
    // Check if a number is even or odd. Even numbers are divisible by 2, meaning that when the number is divded by 2, the remainder is 0.
    if(n%2 == 0){
        cout<<n<<" is an EVEN number"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }

    cout<<"\n ---- Example 4: "<<endl;
    /*
    -   Ultraviolet: less than 379 nm and greater than or equal to 10 nm
    -   Blue: 380 nm to 520 nm
    -   Green: 521 nm to 590 nm
    -   Red: 591 nm to 740 nm
    -   Infrared: more than 841 nm
    -   Any wavelength less than 10 nm is undefined.
    */
   // Declare variables
   int wavelength = 0;
   string emittedlight = "";

   //Update wavelength
   cout<<"Enter a wavelength (nm): ";
   cin>>wavelength;

   // Multiway
    if(wavelength<379 && wavelength>=10) {emittedlight = "ULTRAVIOLET";}
    else if(wavelength<520 && wavelength>=380) {emittedlight = "BLUE";}
    else if(wavelength<590 && wavelength>=521) {emittedlight = "GREEN";}
    else if(wavelength<740 && wavelength>=591) {emittedlight = "RED";}
    else if(wavelength>=741) {emittedlight = "INFRARED";}
    else {emittedlight = "UNDEFINED";}

    // Print result
    cout<<wavelength<<" nm emits "<<emittedlight<<" light"<<endl;

    cout<<"\n ----- Example 5: Conditional operator -----"<<endl;
    // Conditional operator: three operands --> condition ? expression1 (true) : expression2 (false)
    /*
    Example 3)
    if(n%2 == 0){
        cout<<n<<" is an EVEN number"<<endl;
    }
    else{
        cout<<n<<" is an ODD number"<<endl;
    }
    */

    cout<<n<<(n%2 == 0 ? " is an EVEN number" : " is an ODD number")<<endl;

    cout<<"\n ----- Example 6 -----"<<endl;
    // Check if n is greater than 10. If n is greater than 10, set the max value to n.
    int max = 10;
    bool checkmax = false;
    // if-else
    if(n>max){checkmax = true;}
    else{checkmax = false;}

    // Condition operands to check if n is greater than max.
    checkmax = n>max ? true : false;

    // Print result
    cout<<"Is n greater than 10? = "<<checkmax<<endl;

    cout<<"\n ----- Example 7: Nested conditional statement -----"<<endl;
    // Check if a number, n, is positive (even or odd), negative (even or odd), or zero
    // Multiway statement
   /*
    if(n>0 && n%2 ==0){
        cout<<"postive and even number"<<endl;
    }
    else if(n>0 && n%2 !=0){
        cout<<"positive and odd number"<<endl;
    }
    else if(n<0 && n%2==0 ){
        cout<<"negative and even number"<<endl;
    }
    else if(n<0 && n%2 !=0){
        cout<<"negative and odd number"<<endl;
    }
    else{
        cout<<"zero"<<endl;
    }
    */

    if(n>0){
        if(n%2==0)
            cout<<"positive and even number"<<endl;
        else
            cout<<"positive and odd number"<<endl;
    }
    else if(n<0){
        if(n%2==0)
            cout<<"negative and even number"<<endl;
        else
            cout<<"negative and odd number"<<endl;
    }
    else{
        cout<<"zero"<<endl;
    }

    cout<<"\n ----- LAB EXERCISE -----"<<endl;
    // declare variables
    float weight = 0;
    float shippingcost = 0;

    // Collect the weight
    cout<<"Enter the weight of the package (lbs): ";
    cin>>weight;

    // Determine shipping cost using multiway if-else
    if(weight <= 0){
        shippingcost = 0;
    }
    else if(weight <= 2){
        shippingcost = 5.00;
    }
    else if(weight <= 5){
        shippingcost = 8.20;
    }
    else if(weight <= 10){
        shippingcost = 10.25;
    }
    else{
        shippingcost = 12.50;
    }

    // Print result
    cout<<"A package of weight "<<weight<<" costs $"<<shippingcost<<endl;

    return 0;
}