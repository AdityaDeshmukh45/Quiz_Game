#include <iostream>
using namespace std;

int Quiz_function()
{
    cout << "--------Welcome To The Game of Quiz---------" << endl;
    cout << "-----Pease follow the instructions-----" << endl;
    cout << "Step 1: Quiz contains Total 10 Questions" << endl;
    cout << "Step 2: Each Question carries 1 mark" << endl;
    cout << "Step 3: There will be 4 options for each Question" << endl;
    cout << "Step 4: Choose from options a,b,c and d" << endl;
    cout << "Step 4: There will be no negative marking" << endl;
    cout << "Step 5: If you score >=7 , you will pass the Quiz" << endl;
    cout << "Step 6: Enter s or S to start the game" << endl;

    char c;
    cin >> c;
    int score = 0;
    if (c == 's' || c == 'S')
    {
        char ans;
        cout << "------Quiz Started------" << endl;
        cout << "Q.1)What is the chemical symbol for water?" << endl;
        cout << "a)H2O2  b)H2O3  c)H2O  d)None" << endl;
        cin >> ans;
        if (ans == 'c' || ans == 'C')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.2)What is the capital of Australia?" << endl;
        cout << "a)Melbourne  b)Canberra  c)Perth  d)Sydney" << endl;
        cin >> ans;
        if (ans == 'b' || ans == 'B')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.3)What is the currency of Japan?" << endl;
        cout << "a)Dong  b)Yen  c)Yuan  d)Dollar" << endl;
        cin >> ans;
        if (ans == 'b' || ans == 'B')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.4)Who is the author of the Harry Potter book series?" << endl;
        cout << "a)Harold Pinter  b)Stan Lee  c)George Eliot  d)J.K.Rowling" << endl;
        cin >> ans;
        if (ans == 'd' || ans == 'D')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.5)Which city is referred as the Silicon Valley of India due to its IT industry?" << endl;
        cout << "a)Mumbai  b)Delhi  c)Banglore  d)Gurgaon" << endl;
        cin >> ans;
        if (ans == 'c' || ans == 'C')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.6)In which country would you find the Great Barrier Reef?" << endl;
        cout << "a)Brazil  b)Indonesia  c)Australia  d)Vietnam" << endl;
        cin >> ans;
        if (ans == 'c' || ans == 'C')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.7)Which of the following programming language is not Object Oriented?" << endl;
        cout << "a)C  b)C++  c)Java  d)Python" << endl;
        cin >> ans;
        if (ans == 'a' || ans == 'A')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.8)Which of the following is not a mammal" << endl;
        cout << "a)Blue Whale  b)Monkey  c)Human  d)Snake" << endl;
        cin >> ans;
        if (ans == 'd' || ans == 'D')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.9)where did India's Chandrayan-3 landed on Moon?" << endl;
        cout << "a)North pole  b)Aristarchus Plateau  c)South pole  d)Tycho Crater" << endl;
        cin >> ans;
        if (ans == 'c' || ans == 'C')
            score += 1;
        else
        {
            score += 0;
        }
        cout << "Q.10)Which is the largest organ in Human body?" << endl;
        cout << "a)Liver  b)Kidney  c)Stomach  d)Lung" << endl;
        cin >> ans;
        if (ans == 'a' || ans == 'A')
            score += 1;
        else
        {
            score += 0;
        }
    }

    else
    {
        cout << "You have entered wrong value ,please enter valid value" << endl;
    }

    return score;
}
void Result_function(int result)
{
    cout << "Your score : " << result << endl;
    char again;
    int res;
    if (result >= 7)
    {
        cout << "Hurray!!! You have Succesfully passed the Quiz " << endl;
        cout << "Do you want to play Quiz again?" << endl;
        cout << "Enter y for Yes n for No" << endl;
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            res = Quiz_function();
            Result_function(res);
        }
        else
        {
            cout << "Thank you for playing" << endl;
        }
    }
    else
    {
        cout << "Better luck next time..." << endl;
        cout << "Do you want to play Quiz again?" << endl;
        cout << "Enter y for Yes n for No" << endl;
        cin >> again;
        if (again == 'y' || again == 'Y')
        {
            res = Quiz_function();
            Result_function(res);
        }
        else
        {
            cout << "Thank you for playing" << endl;
        }
    }
}
int main()
{
    int result = Quiz_function();
    Result_function(result);
}
