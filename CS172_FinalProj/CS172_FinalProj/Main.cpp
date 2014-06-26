#include "Root.h"
#include "Pythagorean.h"
#include "Quadratic.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

int main(){

	cout << "Welcome to MyAlgebraHelper" << endl << endl;
	cout << "This program will calculate and aid you in understanding basic algebra knowledge" << endl;
	cout << "You will be given the opportunity to enter in 3 questions for each of the following subjects:" << endl;
	cout << "Quadratic Formula" << endl << "Pythagorean Theorem" << endl << "Root numbers" << endl << endl;

	for (int i = 0; i < 3; i++){
		double a, b, c, discriminant;
		cout << "Looking at your equation enter a (first coefficient), b (second coefficient) , c (third coefficient) : ";
		cin >> a >> b >> c;


		Quadratic equation(a, b, c);
		discriminant = equation.getDiscriminant();

		if (discriminant < 0)
		{
			cout << "This equation contains no roots" << endl;
		}
		else if (discriminant == 0)
		{
			cout << "The root is " << equation.getRoot1() << endl;
		}
		else
		{
			cout << "The roots are " << equation.getRoot1() << " and "
				<< equation.getRoot2() << endl;
			i++;
		}

	}
	int choice = 1;
	cout << "Would you like to see how this process works? Type (1) for a written explanation or (2) to move on to the next subject" << endl;
	cin >> choice;

	if (choice == 1){
		ifstream input;
		input.open("Quadraticlesson.txt");

		if (input.fail()){
			cout << "Lesson failed to open" << endl;
			cout << "Exiting Program" << endl;
			return 0;
		}
		string lesson;
		while (!input.eof()){
			getline(input, lesson);
			cout << lesson << endl;
		}
		input.close();
		cout << "Lesson Completed" << endl;
		cout << "Onto the next subject!" << endl << endl;
	}
	else{
		cout << "Moving on then!" << endl << endl;
	}

	for (int i = 0; i < 3; i++){
		double a, b, hypotenuse;
		cout << "Looking at your triangle, give the two shorter sides to find the hypotenuse" << endl;
		cin >> a >> b;

		Pythagorean equation(a, b);
		hypotenuse = equation.getHypotenuse();

		cout << "The hypotenuse is: " << hypotenuse << endl;
		i++;
	}

	int choice1 = 1;
	cout << "Would you like to see how this process works? Type (1) for a written explanation or (2) to move on to the next subject" << endl;
	cin >> choice;
	if (choice == 1){
		ifstream input;
		input.open("Pythagoreanlesson.txt");

		if (input.fail()){
			cout << "Lesson failed to open" << endl;
			cout << "Exiting Program" << endl;
			return 0;
		}
		string lesson;
		while (!input.eof()){
			getline(input, lesson);
			cout << lesson << endl;
		}
		input.close();
		cout << "Lesson Completed" << endl;
		cout << "Onto the next subject!" << endl << endl;
	}
	else{
		cout << "Moving on then!" << endl << endl;
	}

	for (int i = 0; i < 3; i++){
		int a, root;
		cout << "Enter in your perfect square: " << endl;
		cin >> a;

		Root equation(a);
		root = equation.getRoot();

		cout << "The root is: " << root << endl;
		i++;
	}

	int choice2 = 1;
	cout << "Would you like to see how this process works? Type (1) for a written explanation or (2) to move on to the next subject" << endl;
	cin >> choice;

	if (choice == 1){
		ifstream input;
		input.open("Rootlesson.txt");

		if (input.fail()){
			cout << "Lesson failed to open" << endl;
			cout << "Exiting Program" << endl;
			return 0;
		}
		string lesson;
		while (!input.eof()){
			getline(input, lesson);
			cout << lesson << endl;
		}
		input.close();
		cout << "Lesson Completed" << endl;
		cout << "MyAlgebraHelper is now closing" << endl;
 	}
	else{
		cout << "MyAlgebraHelper is now closing" << endl << endl;
	}
	return 0;
}
