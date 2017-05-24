/*
 * Operations.cpp
 *
 *  Created on: May 24, 2017
 *      Author: asdf
 */

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
		string bookName;

		if (!doc.load_file("books.xml")){
			cerr << "No such file";
		} else {
			cout << "File found";
		}


		pugi::xml_node books = doc.child("catalog");

		cout << "/////////////"
				<< books.child("book").child("title").text().as_string();

		cout << books.name() << endl;

		vector<BookStore> bookVector;

		for (pugi::xml_node book = books.first_child(); book;
				book = book.next_sibling()) {

			BookStore book1;

			book1.setAuthor(books.child("book").child("author").text().as_string());
			book1.setTitle(books.child("book").child("title").text().as_string());
			book1.setGenre(books.child("book").child("genre").text().as_string());
			book1.setPrice(books.child("book").child("price").text().as_double());
			book1.setPublishDate(
					books.child("book").child("publish_date").text().as_string());
			book1.setDescription(
					books.child("book").child("description").text().as_string());
			bookVector.push_back(book1);

			//We found a "Panel" -- print it's attributes
			for (pugi::xml_attribute attr = book.first_attribute(); attr; attr =
					attr.next_attribute()) {
				cout << " " << attr.name() << " = " << attr.value() << endl;

				string attrName = attr.name();
				if (!attrName.compare("name")) {
					bookName = attr.value();
				}
			}
			cout << endl;

			cout << "Book : " << bookName << endl;
			//Now print all elements and attributes of current "Panel"
			for (pugi::xml_node child = book.first_child(); child;
					child = child.next_sibling()) {

				cout << child.name() << " : " << child.text().as_string() << endl; // get element name

				// iterate through all attributes
				for (pugi::xml_attribute attr = child.first_attribute(); attr;
						attr = attr.next_attribute()) {

					cout << "  " << attr.name() << " = " << attr.value() << endl;
				}
				cout << endl;
			}
		}
		cout << endl;

		double sum = 0;

		for (size_t i = 0; i < bookVector.size(); i++) {

			sum += bookVector.at(i).getPrice();

		}

		for (pugi::xml_node book = books.child("book"); book;
				book = book.next_sibling()) {

			cout << book.child("title").text().as_string() << endl;
			cout << book.child("book").child("title").attribute("id").value()
					<< endl;

		}

	//	books.set_name("aasfddg");
	//	cout << books.name();

		for (pugi::xml_node book = books.child("book"); book;
				book = book.next_sibling()) {

			cout
					<< book.find_child_by_attribute("title", "id", "123").text().as_string();
		}
		cout << endl;

		cout << "Sum of books in vector : " << sum << endl;

		cout << endl;

}

void Operations::modify() {

	//modify
		pugi::xml_document doc1;
		if (!doc1.load_string("<node id='123'>text</node><!-- comment -->",
				pugi::parse_default | pugi::parse_comments)){
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

		pugi::xml_node studentName = singleStudent.append_child("Name");
		studentName.append_child(pugi::node_pcdata).set_value("Student name");

		pugi::xml_node StudentTel = singleStudent.append_child("Telphone");
		StudentTel.append_child(pugi::node_pcdata).set_value("0987654");

		pugi::xml_node StudentEmail = singleStudent.append_child("Email");
		StudentEmail.append_child(pugi::node_pcdata).set_value("qwe@abv.bg");

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

		doc2.save_file("doc2_file.xml");
		doc2.print(cout);

}
