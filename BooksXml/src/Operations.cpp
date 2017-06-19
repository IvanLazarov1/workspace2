#include "Operations.h"

using namespace std;

Operations::Operations() {
	// Auto-generated constructor stub

}

Operations::~Operations() {
	// Auto-generated destructor stub
}

Operations operation;

void Operations::readFromXmlFile() {

	pugi::xml_document doc;

	if (!doc.load_file("books.xml")) {
		cerr << "No such file";
	}

	pugi::xml_node books = doc.child("catalog");

	vector<BookStore> bookVector;

	for (pugi::xml_node book = books.first_child(); book;
			book = book.next_sibling("book")) {

		BookStore book1;

		book1.setAuthor(book.child("author").text().as_string());
		book1.setTitle(book.child("title").text().as_string());
		book1.setGenre(book.child("genre").text().as_string());
		book1.setPrice(book.child("price").text().as_double());
		book1.setPublishDate(book.child("publish_date").text().as_string());
		book1.setDescription(book.child("description").text().as_string());

		bookVector.push_back(book1);

		//We found a "Panel" -- print it's attributes
		for (pugi::xml_attribute attr = book.first_attribute(); attr; attr =
				attr.next_attribute()) {


			cout << "\nBook : " << attr.name() << " = " << attr.value() << endl;
		}


		//Now print all elements and attributes of current "Panel"
		for (pugi::xml_node child = book.first_child(); child;
				child = child.next_sibling()) {

			cout << child.name() << " : " << child.text().as_string() << endl; // get element name

		}
	}

	double sum = 0;

	for (size_t i = 0; i < bookVector.size(); i++) {

		sum += bookVector.at(i).getPrice();

	}
	cout << endl;

	cout << "Sum of books in vector : " << sum << endl;

	cout << endl;

}

void Operations::modify() {

	//modify
	pugi::xml_document doc1;
	if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
			pugi::parse_default | pugi::parse_comments)) {
		cerr << "Error";
	} else {
		cout << "its ok";
	}

	// tag::node[]
	pugi::xml_node node = doc1.child("node");

	// change node name
	cout << node.set_name("NewName");
	cout << ", new node name: " << node.name() << endl;

	// change comment text
	cout << doc1.last_child().set_value("useless comment");
	cout << ", new comment text: " << doc1.last_child().value() << endl;

	// we can't change value of the element or name of the comment
	cout << node.set_value("1") << ", " << doc1.last_child().set_name("2")
			<< endl;
	// end::node[]

	cout << endl;

	// tag::attr[]
	pugi::xml_attribute attr = node.attribute("id");

	// change attribute name/value
	cout << attr.set_name("key") << ", " << attr.set_value("345");
	cout << ", new attribute: " << attr.name() << "=" << attr.value() << endl;

	// we can use numbers or booleans
	attr.set_value(1.234);
	cout << "new attribute value: " << attr.value() << endl;

	// we can also use assignment operators for more concise code
	attr = true;
	cout << "final attribute value: " << attr.value() << endl;
	// end::attr[]

	doc1.save_file("doc1_file.xml");
	doc1.print(cout);

	cout << endl;

}

void Operations::WriteNewXmlFile() {

	// add new attributes and nodes
	pugi::xml_document doc2;

	// tag::code[]
	// add node with some name
	pugi::xml_node node2 = doc2.append_child("Students");
	node2.append_attribute("xmlns") = "http://www.w3.org/TR/html4/";

	// add description node with text child.
	pugi::xml_node singleStudent = node2.append_child("Student");
	singleStudent.append_attribute("id") = "1";

	pugi::xml_node studentFirstName = singleStudent.append_child("First name");
	studentFirstName.append_child(pugi::node_pcdata).set_value("Student first name");

	pugi::xml_node studentLastName = singleStudent.append_child("Last name");
	studentLastName.append_child(pugi::node_pcdata).set_value("Student last name");

	pugi::xml_node studentGender = singleStudent.append_child("Gender");
	studentGender.append_child(pugi::node_pcdata).set_value("Student gender");

	pugi::xml_node studentTel = singleStudent.append_child("Telephone");
	studentTel.append_child(pugi::node_pcdata).set_value("0888654789");

	pugi::xml_node studentEmail = singleStudent.append_child("Email");
	studentEmail.append_child(pugi::node_pcdata).set_value("email@abv.bg");

	pugi::xml_node studentBirthDate = singleStudent.append_child("Birth date");
	studentBirthDate.append_child(pugi::node_pcdata).set_value("Student birth date");

	pugi::xml_node studentCourse = singleStudent.append_child("Course");
	studentCourse.append_child(pugi::node_pcdata).set_value("Student course");

	pugi::xml_node studentSpecialty = singleStudent.append_child("Specialty");
	studentSpecialty.append_child(pugi::node_pcdata).set_value("Student specialty");

	pugi::xml_node studentFacultyNumber = singleStudent.append_child("Faculty number");
	studentFacultyNumber.append_child(pugi::node_pcdata).set_value("Student faculty number");

	pugi::xml_node studentExams = singleStudent.append_child("Exams");

	pugi::xml_node studentExam = studentExams.append_child("Exam");
	pugi::xml_node studentExam1 = studentExams.append_child("Exam");
	pugi::xml_node studentExam2 = studentExams.append_child("Exam");

	studentExam.append_attribute("Name") = "Himiq";
	studentExam.append_attribute("Teacher") = "Teacher name";
	studentExam.append_attribute("Grades") = "5";
	studentExam.append_child(pugi::node_pcdata).set_value("Exam description");

	studentExam1.append_attribute("Name") = "Biologiq";
	studentExam1.append_attribute("Teacher") = "Teacher name";
	studentExam1.append_attribute("Grades") = "6";
	studentExam1.append_child(pugi::node_pcdata).set_value("Exam description");

	studentExam2.append_attribute("Name") = "Fizika";
	studentExam2.append_attribute("Teacher") = "Teacher name";
	studentExam2.append_attribute("Grades") = "4";
	studentExam2.append_child(pugi::node_pcdata).set_value("Exam description");

	doc2.save_file("students.xml");
	doc2.print(cout);

}

void Operations::readFromXmlFileWriteToTxtFile() {

	pugi::xml_document doc;
	string bookName;

	if (!doc.load_file("books.xml")) {
		cerr << "No such file" << endl;
	} else {
		cout << "File found" << endl;
	}

	pugi::xml_node books = doc.child("catalog");

	vector<BookStore> bookVector;

	for (pugi::xml_node book = books.child("book"); book;
			book = book.next_sibling("book")) {

		BookStore book1;

		book1.setAuthor(book.child("author").text().as_string());
		book1.setTitle(book.child("title").text().as_string());
		book1.setGenre(book.child("genre").text().as_string());
		book1.setPrice(book.child("price").text().as_double());
		book1.setPublishDate(book.child("publish_date").text().as_string());
		book1.setDescription(book.child("description").text().as_string());

		bookVector.push_back(book1);
	}

	ofstream outClientFile("books.txt", ios::out);

	string author;
	string title;
	string genre;
	double price;
	string publish_date;
	string description;

	for (size_t i = 0; i < bookVector.size(); i++) {

		author = bookVector.at(i).getAuthor();
		title = bookVector.at(i).getTitle();
		genre = bookVector.at(i).getGenre();
		price = bookVector.at(i).getPrice();
		publish_date = bookVector.at(i).getPublishDate();
		description = bookVector.at(i).getDescription();

		outClientFile << setw(9) << "Author : "<< left << setw(22) << author << setw(8)
						<< "Title : "<< left << setw(25) << title << setw(5)
						<< "Genre : " << left << setw(16) << genre << setw(5)
						<< "Price : " << setw(15) << price << setw(15) << endl;

	}

}

void Operations::searchInXmlByAttrValue() {

//	http://pugixml.org/docs/samples/traverse_iter.cpp

	pugi::xml_document doc;

	if (!doc.load_file("books.xml")) {
		cerr << "No such file" << endl;
	} else {
		cout << "File found" << endl;
	}

	pugi::xml_node books = doc.child("catalog");

	for (pugi::xml_node book = books.child("book"); book;
			book = book.next_sibling()) {

		cout << books.find_child_by_attribute("book", "id", "bk104").text().as_string();

	}

}

void Operations::readBooksTitle() {

	pugi::xml_document doc;
	string bookName;

		if (!doc.load_file("books.xml")) {
			cerr << "No such file";
		} else {
			cout << "File found";
		}
		pugi::xml_node books = doc.child("catalog");

	for (pugi::xml_node book = books.child("book"); book; book = book.next_sibling()) {
			cout << book.child("title").text().as_string() << endl;
	//		cout << book.child("title").attribute("id").value() << endl;

		}
}
