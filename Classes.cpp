//Hugo Izquierdo
//This is a program to create a music trivia game which can be played by 2 people

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class Question
{
    public:
    Question(){};
    void setQuestion(string q)
        { question = q;}
    void setAnswer1(string ans1)
        { answer1 = ans1;}
    void setAnswer2(string ans2)
        { answer2 = ans2;}
    void setAnswer3(string ans3)
        { answer3 = ans3;}
    void setAnswer4(string ans4)
        { answer4 = ans4;}
    void setcorrectAnswer(string corr)
        {correctAnswer = corr;}
    string getQuestion()
        {return question;}
    string getAnswer1()
        {return answer1;}
    string getAnswer2()
        {return answer2;}
    string getAnswer3()
        {return answer3;}
    string getAnswer4()
        {return answer4;}
    string getAnswer()
        {return correctAnswer;}
    void displayQuestion();
 
    private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    string correctAnswer;
};

int main()
{
    cout << "Welcome to Music Trivia Night! This is a game for two players who will compete to answer the most questions correctly.\n";
    cout << "The rules of the game are as follows: \n" << "-There are a total of 10 questions, of which each player will answer five. \n";
    cout << "- With each question, there will be four possible answer choices to choose from. \n";
    cout << "- Points will be added for every correct answer, and tallied to see who wins at the end. \n";
    cout << "- Please enter the digit (1-4) that corresponds with your answer choice:\n";
    cout << "\n Let the game begin! \n\n";

    ifstream trivia;
    int player1score = 0, player2score = 0;
    string answer;
    string quest, opt1, opt2, opt3, opt4, correct;

    trivia.open("Trivia.txt");

    Question game[10];
        for (int index=0; index<10; index++)
        {
            if (index%2 == 0)
            {
                cout << "\nQuestion for Player 1: \n ";
                getline(trivia, quest);
                getline(trivia, opt1);
                getline(trivia, opt2);
                getline(trivia, opt3);
                getline(trivia, opt4);
                getline(trivia, correct);
                game[index].setQuestion(quest);
                game[index].setAnswer1(opt1);
                game[index].setAnswer2(opt2);
                game[index].setAnswer3(opt3);
                game[index].setAnswer4(opt4);
                game[index].setcorrectAnswer(correct);

                cout << game[index].getQuestion() << endl;
                cout << "1. " << game[index].getAnswer1() << endl;
                cout << "2. " << game[index].getAnswer2() << endl;
                cout << "3. " << game[index].getAnswer3() << endl;
                cout << "4. " << game[index].getAnswer4() << endl;
                cin >> answer;
                    if (game[index].getAnswer() == answer)
                    {
                    cout << "\nYour answer is correct! \n";
                    player1score++;
                    }
                    else cout << "That answer is....incorrect.\n";
                    
            }
            else if(index%2 == 1)
            {
                cout << "\nQuestion for Player 2: \n";
                getline(trivia, quest);
                getline(trivia, opt1);
                getline(trivia, opt2);
                getline(trivia, opt3);
                getline(trivia, opt4);
                getline(trivia, correct);
                game[index].setQuestion(quest);
                game[index].setAnswer1(opt1);
                game[index].setAnswer2(opt2);
                game[index].setAnswer3(opt3);
                game[index].setAnswer4(opt4);
                game[index].setcorrectAnswer(correct);

                cout << game[index].getQuestion() << endl;
                cout << "1. " << game[index].getAnswer1() << endl;
                cout << "2. " << game[index].getAnswer2() << endl;
                cout << "3. " << game[index].getAnswer3() << endl;
                cout << "4. " << game[index].getAnswer4() << endl;
                cin >> answer;
                    if (game[index].getAnswer() == answer)
                    {
                    cout << "\nYour answer is correct! \n";
                    player2score++;
                    }
                    else cout << "That answer is....incorrect.\n";
            }
        }
        trivia.close();
        cout << "\nPlayer 1 scored: " << player1score << " points." << endl;
        cout << "Player 2 scored: " << player2score << " points.\n\n" << endl;
        
        if (player1score > player2score)
            cout << "Player 1 is the winner!" << endl;
        else if (player1score < player2score)
            cout << "Player 2 is the winner!" << endl;
        else if (player1score == player2score)
            cout << "It's a tie! Play again!";
    return 0;
}
