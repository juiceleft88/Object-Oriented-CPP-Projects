#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

class Question
{
    public:
    Question();
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
    void setcorrectAnswer(int corr)
        {correctAnswer = corr;}
    string getQuestion()
        {return q;}
    string getAnswer1()
        {return answer1;}
    string getAnswer2()
        {return answer2;}
    string getAnswer3()
        {return answer3;}
    string getAnswer4()
        {return answer4;}
    int getAnswer()
        {return correctAnswer;}
 

    private:
    string question;
    string answer1;
    string answer2;
    string answer3;
    string answer4;
    int correctAnswer;

};

Question::Question()
{

}

void Question::displayQuestion()
{
    string input;

    fstream nameFile;
    nameFile.open("Trivia.txt", ios::in);
    if (nameFile)
    {
        for (int j = 0; j <10; j++)
        {
        for (int i=0; (i+5)<6; i++)
        {
            getline(nameFile, input);
            cout << input << endl;
        }
        }

        nameFile.close();
    }
    else
    {
        cout << "Error: cannot open file" << endl;
    }

}



int main()
{
    cout << "Welcome to Trivia Night! This is a game for two players who will compete to answer the most questions correctly.\n";
    cout << "The rules of the game are as follows: \n" << "-There are a total of 10 questions, of which each player will answer five. \n";
    cout << "-With each question, there will be four possible answer choices to choose from. \n";
    cout << "-Points will be added for every correct answer, and tallied to see who wins at the end. \n";
    cout << "\n Let the game begin! \n";

    Question game;
    game.displayQuestion();


    return 0;
}
