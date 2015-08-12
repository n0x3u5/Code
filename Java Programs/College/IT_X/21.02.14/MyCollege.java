import java.util.*;
class College
{
	int collegeCode;
	String affiliatedTo;
	College(int collegeCode, String affiliatedTo)
	{
		this.collegeCode=collegeCode;
		this.affiliatedTo=affiliatedTo;
	}
	void display()
	{
		System.out.println("The college code is "+collegeCode+".");
		System.out.println("The college is affiliated to "+affiliatedTo+".");
	}
}
class Faculty extends College
{
	String name, dept;
	int experience;
	Faculty(String name, String dept, int experience, int collegeCode, String affiliatedTo)
	{
		super(collegeCode, affiliatedTo);
		this.name=name;
		this.dept=dept;
		this.experience=experience;
	}
	void display()
	{
		super.display();
		System.out.println("The faculty's name is "+name+".");
		System.out.println("The faculty belongs to "+dept+" Department.");
		System.out.println("The faculty has "+experience+" years of experience.");
	}
}
class FullTime extends Faculty
{
	String nameOfCommittee;
	FullTime(String nameOfCommittee, String name, String dept, int experience, int collegeCode, String affiliatedTo)
	{
		super(name, dept, experience, collegeCode, affiliatedTo);
		this.nameOfCommittee=nameOfCommittee;
	}
	void display()
	{
		super.display();
		System.out.println("This full time staff belongs to "+nameOfCommittee+" Committee.");
	}
}
class Student extends College
{
	String name;
	int roll;
	Student(String name, int roll, int collegeCode, String affiliatedTo)
	{
		super(collegeCode, affiliatedTo);
		this.name=name;
		this.roll=roll;
	}
	void display()
	{
		super.display();
		System.out.println("The name of the student is "+name+".");
		System.out.println("The roll number of the student is "+roll+".");
	}
}
class Staff extends College
{
	String name;
	char grade;
	Staff(String name, char grade, int collegeCode, String affiliatedTo)
	{
		super(collegeCode, affiliatedTo);
		this.name=name;
		this.grade=grade;
	}
	void display()
	{
		super.display();
		System.out.println("The name of the staff is "+name+".");
		System.out.println("The designated grade of the staff is "+grade+".");
	}
}
class PartTime extends Faculty
{
	int workingHours;
	PartTime(int workingHours, String name, String dept, int experience, int collegeCode, String affiliatedTo)
	{
		super(name, dept, experience, collegeCode, affiliatedTo);
		this.workingHours=workingHours;
	}
	void display()
	{
		super.display();
		System.out.println("This part time staff works for "+workingHours+" hours per day.");
	}
}
class MyCollege
{
	public static void main (String []args)
	{
		Scanner inp=new Scanner(System.in);
		Scanner str=new Scanner(System.in);
		/*while(true)
		{
			System.out.println("Press\n[1] To create an entry for a new College.\n[2] To create a record for a new student.\n[3] To create records for a new faculty member.\n[4] To create records for a new staff member.\n[5] To exit.\nEnter choice: ");
			int ch = inp.nextInt();
			switch(ch)
			{
				case 1:
				{
					System.out.println("Enter the code of the college: ");
					int collegeCode=inp.nextInt();
					System.out.println("Enter the college's affiliation: ");
					String affiliatedTo=str.readLine();
					College col = new College(collegeCode, affiliatedTo);
					break;
				}
				case 2:
				{
				
				}
				case 3:
				{
				
				}
				case 4:
				{
				
				}
				case 5:
				{
				
				}
			}
		}*/
		Student stu = new Student("Nakshatra Mukhopadhyay", 34, 169, "West Bengal University of Technology");
		FullTime ful = new FullTime("Java Teachers", "Amitava Mandal", "Information Technology", 7, 169, "West Bengal University of Technology");
		PartTime par = new PartTime(8, "Subhash Basak", "Computer Science and Engineering", 3, 169, "West Bengal University of Technology");
		Staff sta = new Staff("Jayanta Basu", 'A', 169, "West Bengal University of Technology");
		College col = new College(169, "West Bengal University of Technology");
		Faculty fac = new Faculty("Anindita Sarkar", "Information Technology", 5, 169, "West Bengal University of Technology");
		System.out.println("\n===============================================================================\nOFFICIAL ACADEMY OF TECHNOLOGY PERSONNEL MANAGEMENT DATABASE\n===============================================================================\n");
		col.display();
		System.out.println("\n===============================================================================\n");
		stu.display();
		System.out.println("\n===============================================================================\n");
		fac.display();
		System.out.println("\n===============================================================================\n");
		ful.display();
		System.out.println("\n===============================================================================\n");
		par.display();
		System.out.println("\n===============================================================================\n");
		sta.display();
		System.out.println("\n===============================================================================\n");
	}
}