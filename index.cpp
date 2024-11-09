#include <iostream>
#include <string>
using namespace std;

// Define a structure to store each question and its options
struct Question {
    string questionText;        // The question text
    string options[4];          // Array to hold the answer options (a, b, c, d)
    char correctAnswer;         // Correct answer (a, b, c, d)
};

int main() {
    // Array of 20 questions, options, and correct answers using the Question struct
    Question quiz[20] = {
        {"What is the capital of France?", {"Berlin", "Madrid", "Paris", "Rome"}, 'c'},
        {"Which planet is known as the Red Planet?", {"Venus", "Earth", "Mars", "Jupiter"}, 'c'},
        {"What is the largest ocean on Earth?", {"Atlantic", "Indian", "Arctic", "Pacific"}, 'd'},
        {"Which is the smallest country in the world?", {"Monaco", "Vatican City", "San Marino", "Liechtenstein"}, 'b'},
        {"Who invented the telephone?", {"Alexander Graham Bell", "Thomas Edison", "Nikola Tesla", "Albert Einstein"}, 'a'},
        {"How many continents are there on Earth?", {"5", "6", "7", "8"}, 'c'},
        {"What is the tallest mountain in the world?", {"K2", "Mount Everest", "Kangchenjunga", "Mount Fuji"}, 'b'},
        {"What is the longest river in the world?", {"Amazon", "Nile", "Yangtze", "Mississippi"}, 'b'},
        {"Which animal is known as the king of the jungle?", {"Lion", "Tiger", "Elephant", "Bear"}, 'a'},
        {"What is the most widely spoken language in the world?", {"English", "Mandarin", "Spanish", "Hindi"}, 'b'},
        {"Which country is famous for the pyramids?", {"Egypt", "Mexico", "China", "India"}, 'a'},
        {"Who wrote the play 'Romeo and Juliet'?", {"William Shakespeare", "Charles Dickens", "Jane Austen", "Mark Twain"}, 'a'},
        {"What is the largest organ in the human body?", {"Heart", "Lungs", "Liver", "Skin"}, 'd'},
        {"Which country is known as the Land of the Rising Sun?", {"South Korea", "China", "Japan", "Thailand"}, 'c'},
        {"What is the main ingredient in guacamole?", {"Avocado", "Tomato", "Onion", "Garlic"}, 'a'},
        {"Who painted the Mona Lisa?", {"Pablo Picasso", "Vincent van Gogh", "Leonardo da Vinci", "Claude Monet"}, 'c'},
        {"Which planet is closest to the Sun?", {"Venus", "Earth", "Mercury", "Mars"}, 'c'},
        {"How many hours are in a day?", {"12", "18", "24", "48"}, 'c'},
        {"What is the currency of Japan?", {"Yen", "Dollar", "Euro", "Pound"}, 'a'},
        {"Which country is home to the Great Barrier Reef?", {"Australia", "New Zealand", "United States", "Canada"}, 'a'}
    };

    int score = 0;
    char userAnswer;

    // Loop through the quiz and display each question
    for (int i = 0; i < 20; ++i) {
        // Display the question and its options
        cout << "Question " << (i + 1) << ": " << quiz[i].questionText << endl;
        cout << "a) " << quiz[i].options[0] << endl;
        cout << "b) " << quiz[i].options[1] << endl;
        cout << "c) " << quiz[i].options[2] << endl;
        cout << "d) " << quiz[i].options[3] << endl;

        // Get the user's answer
        cout << "Your answer: ";
        cin >> userAnswer;

        // Check if the user's answer is correct
        if (userAnswer == quiz[i].correctAnswer) {
            score++;
            cout << "Correct!" << endl;
        } else {
            cout << "Incorrect. The correct answer is " << quiz[i].correctAnswer << "." << endl;
        }
        cout << endl;  // Add a line break between questions
    }

    // Display the final score
    cout << "Your final score is: " << score << " out of 20." << endl;

    return 0;
}