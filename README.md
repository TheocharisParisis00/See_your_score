
# C++ Multiple-Choice Quiz Program

This is a simple C++ program that runs a multiple-choice quiz. It asks the user 20 general knowledge questions, presents four possible answers for each question, and then checks the user's input to determine if it's correct. After all the questions are answered, the program displays the user's total score.

The program uses C++ features such as arrays, `struct`, loops, and conditional statements to create a user-friendly console-based quiz experience.

## Features

- 20 general knowledge questions with 4 multiple-choice options each.
- Tracks user answers and checks them against the correct answer.
- Provides feedback on whether the user answered correctly or incorrectly.
- Displays a final score after all questions are answered.

## How to Use

1. **Clone the Repository**:
   - Clone this repository to your local machine using the following command:
     ```bash
     git clone https://github.com/your-username/quiz-program.git
     ```

2. **Compile the Program**:
   - Open your terminal and navigate to the project folder. Then compile the C++ program using the following command:
     ```bash
     g++ -std=c++11 index.cpp -o index

     ```

3. **Run the Program**:
   - Once compiled, you can run the program with the command:
     ```bash
     ./index
     ```

4. **Answer the Questions**:
   - The program will prompt you with 20 multiple-choice questions. Enter your answer as one of the following: `a`, `b`, `c`, or `d`.

5. **View Your Score**:
   - After answering all the questions, the program will display your score out of 20.

## Code Explanation

The program consists of the following key components:

- **Struct for Storing Questions**:
  - A `struct` named `Question` is used to store the question text, possible answer options, and the correct answer.
  
- **Array of Questions**:
  - An array `quiz[]` of type `Question` stores all 20 questions, their options, and the correct answer for each.

- **User Interaction**:
  - The program displays each question, prompts the user to input their answer, and checks if the answer is correct.

- **Final Score**:
  - After completing all questions, the program outputs the user's final score.

## Example

Here's an example of how the program runs:

```
Question 1: What is the capital of France?
a) Berlin
b) Madrid
c) Paris
d) Rome
Your answer: c
Correct!

Question 2: Which planet is known as the Red Planet?
a) Venus
b) Earth
c) Mars
d) Jupiter
Your answer: c
Correct!

...

Your final score is: 20 out of 20.
```

## Contributing

If you'd like to contribute to this project, feel free to fork this repository, make changes, and submit a pull request.

- Bug reports and feature requests are always welcome!

## License

This project is open-source and available under the [MIT License](LICENSE).
