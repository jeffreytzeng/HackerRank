#include <numeric>

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        Student(string first, string last, int id, vector<int> scores):
            Person(first, last, id)
        {
            testScores.assign(scores.begin(), scores.end());
        }

        char calculate()
		{
            int total = std::accumulate(testScores.begin(), testScores.end(), 0);
            int average = total / testScores.size();
            char score = 'T';

            if (average > 100) {
                cout <<"Score can't over 100!";
            } else if (90 <= average) {
                score = 'O';
            } else if (80 <= average) {
                score = 'E';
            } else if (70 <= average) {
                score = 'A';
            } else if (55 <= average) {
                score = 'P';
            } else if (40 <= average) {
                score = 'D';
            }
            return score;
        }
};