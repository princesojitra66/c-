#include <iostream>
using namespace std;
int main()
{
    int marks;
    char grade = 'A';
    char grade1 = 'B';
    char grade2 = 'C';
    char grade3 = 'D';
    
    cout << " enter your marks :- ";
    cin >> marks;
    (marks>0 && marks<100)?  
    (marks <= 100 && marks >= 85) ? cout << "your grade is A ."
    : (marks < 85 && marks >= 75) ? cout << "Your grade is B ."
    : (marks < 75 && marks >= 65) ? cout << "Your grade is C ."
    : (marks < 65 && marks >= 50) ? cout << "Your grade is D ."
                                  : cout << "Your grade is F ."
    :
    cout << "invalid marks ";

    switch (grade1,grade2,grade3,grade)
    {
    case 'A':
        cout<<"Excellent work!  ";
        break;
        case 'B':
          cout<<"Well done. ";
        break;
         case 'C':
          cout<<"Good job.  ";
        break;
         case 'D':
          cout<<"You passed,but you could do better.  ";
        break;
    default:
        cout << "Sorry you failed  ";
        break;
    }


    if(marks<100 && marks>0){
        if (marks <= 100 && marks >= 50)
        {
            cout << "Congratulations! you are eligible for the next level.";
        }
        else
        {
            cout << "Please try again next time. " << endl;
        }
    }else{
        cout<<"invalid marks ";
    }
}
