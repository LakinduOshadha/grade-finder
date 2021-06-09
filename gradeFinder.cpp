// @author Lakindu Oshadha (lakinduoshadha98@gmail.com)

#include<iostream>
using namespace std;

int main(){
    // Initializing of the variables
    int m;  //m = marks
    string name;    // name = name of the student
    string g;   //g =  grade of the Computer Programming

    //Getting user input
    cout <<"Enter the name: "; cin>> name;
    cout <<"Enter mark for computer Programming: "; cin>> m;

    //checking whether the entered marks are valid or not
    if (m > 100 || m < 0){
            cout << "ERROR : Entered mark is invalid.!" << endl;//printing error message for invalid marks
    } else {
            if(m >= 85) g = "A+";
            else if(m >= 80) g = "A";
            else if(m>=75) g = "A-";
            else if(m>=70) g ="B+";
            else if(m>=65) g = "B";
            else if(m>=60) g = "B-";
            else if(m>=55) g = "C+";
            else if(m>=50) g = "C";
            else g = "E";

            //Printing the name and the grade
            cout << name << "\t-\t" << g << endl;
    }
    return 0;
}

