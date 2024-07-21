#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
    string Question_Text;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    int Correct_Answer;
    int Question_Score;

public:
    // Setter Function
    void setValues(string, string,
        string, string,
        string, int, int);

    // Function to ask questions
    void askQuestion();
};

// Driver code
int main()
{
    cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
        << endl;
    cout << "\nPress Enter to start "
        << "the quiz... " << endl;

    // Input
    cin.get();

    string Name;
    int Age;

    // Input the details
    cout << "What is your name?"
        << endl;
    cin >> Name;
    cout << endl;

    cout << "How old are you?"
        << endl;
    cin >> Age;
    cout << endl;

    string Respond;
    cout << "Are you ready to take"
        << " the quiz " << Name
        << "? yes/no" << endl;
    cin >> Respond;

    if (Respond == "yes") {
        cout << endl;
        cout << "Good Luck!" << endl;
    }
    else {
        cout << "Okay Good Bye!" << endl;
        return 0;
    }

    // Objects of Question Class
    Question q1;
    Question q2;
    Question q3;
    Question q4;
    Question q5;
    Question q6;
    Question q7;
    Question q8;
    Question q9;
    Question q10;

    // 3 is the position of
    // correct answer
    q1.setValues("Question : ", "Answer 1",
        "Answer 2", "Answer 3",
        "Answer 4", 3, 10);
    q2.setValues("Question : ", "Answer 1",
        "Answer 2", "Answer 3",
        "Answer 4", 3, 10);
    q3.setValues("Question : ", "Answer 1",
        "Answer 2", "Answer 3",