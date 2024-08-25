#include "include/list.h"

void List::print_menu() {
    int choice;

    cout << "****************************" << endl;
    cout << "*  1 - Print list.         *" << endl;
    cout << "*  2 - Add to list.        *" << endl;
    cout << "*  3 - Delete from list.   *" << endl;
    cout << "*  4 - Quit.               *" << endl; 
    cout << "****************************" << endl;
    cout << " Enter your choice and press Return/Enter" << endl;

    cin >> choice;

    if(choice == 4) {
        exit(0);
    }else if(choice == 3){
        delete_item();
    }else if(choice == 2){
        add_item();
    }else if(choice == 1) {
        print_list();
    } else{
        cout << "Sorry choise hasn't been implemented." << endl;
    }
}

void List::add_item() {
    cout << "\n\n\n\n";
    cout << "###  Add Item ###\n";
    cout << "Type in an item and press enter: \n";

    string item;
    cin >> item;
    
    list.push_back(item);

    cout << "Successfully added an item to the list \n\n\n\n\n";
    cin.clear();

    print_menu();
}

void List::delete_item() {
    cout << "###  Delete Item  ###\n";
    cout << "Select an item index number to delete\n";

    if(list.size()) {
        for(unsigned i = 0; i < list.size();i++) {
            cout << i << ": " << list[i] << endl;
        }
    }else {
        cout << "No items in the list or to delete.\n";
    }
    print_menu();
}

void List::print_list() {
    cout << "\n\n\n\n\n";
    cout << "###  Printing List  ###\n";
    
    for(unsigned int list_index = 0; list_index < list.size(); list_index++) {
        cout << " * " <<  list[list_index] << endl;
    }
    cout << "   M - Menu \n";
    char choice;
    cin >> choice;

    if(choice == 'M' || choice == 'm' ) {
        print_menu();
    }else {
        cout << "Invalid Choice. Quiting..\n";
    }
}