class Student extends Person{
	private int[] testScores;

    public Student(String first, String last, int id, int[] scores) {
        super(first, last, id);
        this.testScores = scores;
    }

    public char calculate() {
        int total = 0;
        for (int i = 0; i < testScores.length; i++) {
            total += testScores[i];
        }

        int average = total / testScores.length;
        char score = 'T';

        if (average > 100) {
            System.out.println("Score can't over 100!");
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
}