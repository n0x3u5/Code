package nox.niit.books;

class SoftwareBook extends Book {

	private String swVer;
	private String swName;
	
	SoftwareBook() {
		super();
		this.swVer = "";
		this.swName = "";
	}

	String getSwVer() {
		return swVer;
	}

	void setSwVer(String swVer) {
		this.swVer = swVer;
	}

	String getSwName() {
		return swName;
	}

	void setSwName(String swName) {
		this.swName = swName;
	}
	
}
