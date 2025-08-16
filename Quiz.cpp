#include <iostream>
using namespace std;

int main() {
    const int Q = 5;  

   string questions[Q] = {
    "1. What is the capital of Maharashtra?",
    "2. What is the capital of Rajasthan?",
    "3. What is the capital of Tamil Nadu?",
    "4. What is the capital of West Bengal?",
    "5. What is the capital of Gujarat?"
};

string options[Q][4] = {
    {"A) Mumbai", "B) Pune", "C) Nagpur", "D) Udaipur"},
    {"A) Jaipur", "B) Udaipur", "C) Jodhpur", "D) Kota"},
    {"A) Nagpur", "B) Pune", "C) Coimbatore", "D) Chennai"},
    {"A) Nagpur", "B) Kolkata", "C)Udaipur ", "D) Pune"},
    {"A) Rajkot", "B) Surat", "C) Gandhinagar", "D) Ahmedabad"}
};


    char answers[Q] = {'A', 'A', 'D', 'B', 'C'}; 

    int score = 0;
    char userAns;

    cout << "\n";
    cout << "   Welcome to Quiz Game \n";
    cout << "\n\n";

    for (int i = 0; i < Q; i++) {
        cout << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << options[i][j] << endl;
        }

        cout << "Your answer (A/B/C/D): ";
        cin >> userAns;
        userAns = toupper(userAns);

        if (userAns == answers[i]) {
            cout << "Correct!\n\n";
            score++;
        } else {
            cout << "Wrong! Correct answer: " << answers[i] << "\n\n";
        }
    }

    cout << "\n";
    cout << "Quiz Finished!\n";
    cout << "Your Score: " << score << " / " << Q << endl;

    if (score == Q) cout << "Excellent! Perfect Score!\n";
    else if (score >= 3) cout << "Good Job!\n";
    else cout << "Better luck next time!\n";

    return 0;
}
