package nox.niit.books;

class Book {
	
	private String authorName;
	private String title;
	private double price;
	private int pages;
	
	Book() {
		super();
		this.authorName = "";
		this.title = "";
		this.price = 0.00;
		this.pages = 0;
	}

	String getAuthorName() {
		return authorName;
	}

	void setAuthorName(String authorName) {
		this.authorName = authorName;
	}

	String getTitle() {
		return title;
	}

	void setTitle(String title) {
		this.title = title;
	}

	double getPrice() {
		return price;
	}

	void setPrice(double price) {
		if (price >= 0) {
			this.price = price;
		}
	}

	int getPages() {
		return pages;
	}

	void setPages(int pages) {
		if (pages >= 0) {
			this.pages = pages;
		}
	}
	
}
