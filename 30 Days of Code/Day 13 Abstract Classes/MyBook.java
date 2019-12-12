import java.util.*;

abstract class Book {
	String title;
	String author;

	Book(String title, String author) {
		this.title = title;
		this.author = author;
	}

	abstract void display();
}

class MyBook extends Book {
	Integer price;

	MyBook(String title, String author, Integer price) {
		super(title, author);
		this.price = price;
	}

	void display() {
		System.out.println("Title: " + this.title);
		System.out.println("Author: " + this.author);
		System.out.println("Price: " + this.price);
	}

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		String title = input.nextLine();
		String author = input.nextLine();
		int price = input.nextInt();

		Book book = new MyBook(title, author, price);
		book.display();
	}
}