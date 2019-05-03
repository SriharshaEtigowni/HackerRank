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
        // Write your constructor here
          Student(string fn, string ln, int i, vector<int> score): Person(fn,ln,i),testScores(score){   }

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate(){
            int average = 0,i=0;
            for(;i<testScores.size();i++){
                average += testScores[i];
            }
            average /= testScores.size();

            if((average <= 100) && (average >= 90)){
                return 'O';
            }else if ((average < 90) && (average >= 80)) {
              return 'E';
            } else if ((average < 80) && (average >= 70)) {
              return 'A';
            } else if ((average < 70) && (average >= 55)) {
              return 'P';
            } else if ((average < 55) && (average >= 40)) {
              return 'D';
            } else if (average < 40) {
              return 'T';
            }
            return 'Z';
        }
};

int main() {
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