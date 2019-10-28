#include <iostream>
#include <vector>

using namespace std;


class Person{
  protected:
    string firstName;
    string lastName;
    int id;
  public:
    Person(string firstName, string lastName, int identification){
      this->firstName = firstName;
      this->lastName = lastName;
      this->id = identification;
    }
    void printPerson(){
      cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
    }
  
};

class Student :  public Person{
  private:
    vector<int> testScores;  
  public:
        /*  
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        
        Student(string firstName, string lastName, int id, vector<int> scores):Person(firstName, lastName, id)
        {
          this -> firstName = firstName;
          this -> lastName = lastName;
          this -> id = id;
          this -> testScores = scores;
        }

        /*  
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        char calculate()
        {
            vector<int>::iterator itr;
            double value = 0;
            char c;
            for(itr = testScores.begin() ; itr != testScores.end() ; itr++)
            {
              value += *itr;
            }
            value = value/testScores.size();

            if(value>=90&&value<=100)
            {
               c = 'O';
            }
            else if(value>=80&&value<90)
            {
              c = 'E';
            }
            else if(value>=70&&value<80)
            {
              c = 'A';
            }
            else if(value>=55&&value<70)
            {
              c = 'P';
            }
            else if(value>=40&&value<55)
            {
              c = 'D';
            }
            else if(value>=0&&value<40)
            {
              c = 'T';
            }
            return c;
        }
};

int main() {

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  #endif
  
  string firstName;
  string lastName;
  int id;
  int numScores;
  cin >> firstName >> lastName >> id >> numScores;
  vector<int> scores;
  for(int i = 0; i < numScores; i++){
    int tmpScore;
    cin >> tmpScore;
    scores.push_back(tmpScore);
  }
  
  Student* s = new Student(firstName, lastName, id, scores);
  s->printPerson();
  cout << "Grade: " << s->calculate() << "\n";
  return 0;
}