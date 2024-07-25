//Preprocessor directives
#include <iostream>
#include <iomanip>
using namespace std;

//Function prototypes
void judgesScores();

int main() {

        char answer;

        do {

                //Calls judgesScores function to calculate the average of input numbers
                judgesScores();
                cout << endl;

                cout << "Do you want to calculate again? (Y/N) ";
                cin >> answer;
                cout << endl;

        } while (answer == 'y' || answer == 'Y');

        return 0;
}

void judgesScores() {

        double maximum = INT_MIN;
        double minimum = INT_MAX;
        double number;
        double average;
        double sum = 0;

        //Loop takes user input to sum up scores and store minimum and maximum value
        for (int i = 1; i <= 9; i++) {
                cout << "Enter judge score number " << i << ": ";
                cin >> number;

                sum += number;

                if (number > maximum) {
                        maximum = number;
                }
                if (number < minimum) {
                        minimum = number;
                }
        }

        //Calculates avergae
        average = (sum - (maximum + minimum)) / 7;

        cout << endl;
        cout << fixed << setprecision(1);
        cout << "Final score is: " << average << endl;
}

