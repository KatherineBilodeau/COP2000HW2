// Katherine Bilodeau COP2000 HW 2
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
 const float pi = 3.14 ;
 float room_length;
 float room_width;
 float room_radius;
 
 int room_choice;

 float area_square_room;
 float area_rectangle_room;
 float area_round_room;


    cout << "Haverly's Room Calculator: " << endl;
        cout << "1.) Square Room " << endl;
        cout << "2.) Rectangular Room " << endl;
        cout << "3.) Round Room " << endl;
        cout << "4.) Quit " << endl;
        cout << "Please enter a menu item (1-4). " << endl;
            cin >> room_choice;


int choice = 0;
switch (room_choice)

 {
    // Square Room Calculation
        case 1:
        cout << "What is the length of the room? " << endl;
        cin >> room_length;
        area_square_room = room_length*room_length;
        cout << "The area of the square room is: " << setprecision (2) << fixed << area_square_room << endl;
            break;

     // Rectangle Room Calculation
        case 2:
        cout << "What is the length of the room? " << endl;
        cin >> room_length;
        cout << "What is the width of the room? " << endl;
        cin >> room_width;
        area_rectangle_room = room_length*room_width;
        cout << "The area of the rectangular room is: " << setprecision (2) << fixed << area_rectangle_room << endl;
            break;

    //Round Room Calculation
        case 3:
        cout << "What is the radius of the room? " << endl;
        cin >> room_radius;
        area_round_room = pi*room_radius*room_radius;
        cout << "The area of the round room is: " << setprecision (2) << fixed << area_round_room << endl;
            break;

    // Quit Calculation
        case 4:
        cout << "Thank you for using Haverly's Room Calculator. " << endl;
            break;

    // Invalid choice
    default:
    cout << "The number entered is invalid. " << endl;
    cout << "Please restart the program and try again. " << endl;
 
 }

 return 0;

}




