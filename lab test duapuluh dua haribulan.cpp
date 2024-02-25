//preprocessor directives
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    //Declaration of variables
        int choice;
        double radius, length, width, area;
        double const PI = 3.41;

    //Prompt the user choose the shape to calculate the area
    cout<< "Choose a shape to calculate its area:" <<endl;
    cout<< "1. Circle" <<endl;
    cout<< "2.Rectangle" <<endl;
    cout<< "Enter your choice (1 or 2): ";
    cin >> choice;


    if (choice == 1 )
    {
        cout<< "Enter the radius of the circle: ";
        cin>>radius;

        
        area = PI * radius * radius;
        cout<<"Area of the circle is:" <<area << endl;
    } 
    else if (choice == 2 ) {
        cout << "Enter the length and width of the rectangle: ";
         cout << "Enter the length of the rectangle: ";
        cin >> length;
        cout << "Enter the width if the rectangle: ";
        cin >> width;

    if ((length > 0 ) && (width > 0 ))
        cout<< "Invalid input. ;height and width cannot be negative." <<endl;

        area = length * width; //calculate area of rectangle
        cout << "Area of the rectangle is: " << area<<endl;
    } // the user in has to input the correct choice
    else    
        cout << "Invalid choice. Please enter 1 or 2." <<endl;
    //end of if
    
    return 0;
}//end of the main function
