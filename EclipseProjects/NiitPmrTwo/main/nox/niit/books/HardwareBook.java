package nox.niit.books;

class HardwareBook extends Book {

	private String hwCat;
	private String hwPub;
	
	HardwareBook() {
		super();
		this.hwCat = "";
		this.hwPub = "";
	}

	String getHwCat() {
		return hwCat;
	}

	void setHwCat(String hwCat) {
		this.hwCat = hwCat;
	}

	String getHwPub() {
		return hwPub;
	}

	void setHwPub(String hwPub) {
		this.hwPub = hwPub;
	}
	
}
