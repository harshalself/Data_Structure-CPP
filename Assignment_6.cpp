// NAME : HARSHAL PATIL
// ROLL NO : 44

// Assignment 6 : Linked List Operations

#include <iostream>
using namespace std;
class Node
{
public:
   int data;
   Node *link;
};

class Linkedlist
{
   Node *head = NULL;
   Node *tail = NULL;

public:
   Node *getnode()
   {
      Node *newnode;
      newnode = new Node;
      cout << "Enter the data : " << endl;
      cin >> newnode->data;
      newnode->link = NULL;
      cout << newnode->data;
      return (newnode);
   }
   void append(Node *newnode)
   {
      if (head == NULL)
      {
         head = newnode;
         tail = newnode;
      }
      else
      {
         tail->link = newnode;
         tail = newnode;
      }
   }
   void insert(Node *newnode)
   {
      int pos;
      cout << "Enter the position to insert : " << endl;
      cin >> pos;
      if (pos == 1)
      {
         newnode->link = head;
         head = newnode;
      }
      else
      {
         Node *temp = head;
         int i = 1;
         while (i != pos - 1)
         {
            temp = temp->link;
            i++;
         }
         newnode->link = temp->link;
         temp->link = newnode;
      }
   }
   void deleten()
   {
      int pos;
      cout << "Enter the position to delete : " << endl;
      cin >> pos;
      Node *temp = head;
      if (pos == 1)
      {
         head = head->link;
         delete temp;
      }
      else
      {
         temp = head;
         Node *t;

         int i = 1;
         while (i != pos - 1)
         {
            temp = temp->link;
            i++;
         }
         t = temp->link;

         temp->link = t->link;
         delete t;
      }
   }
   void display()
   {
      Node *temp = head;
      while (temp != NULL)
      {
         cout << temp->data;
         temp = temp->link;
      }
      cout << endl;
   }
};
int main()
{
   Linkedlist l;
   Node *temp;
   int i = 1;
   while (i != 4)
   {
      temp = l.getnode();
      l.append(temp);
      i++;
   }
   l.display();
   Node *newn;
   newn = l.getnode();
   l.insert(newn);
   l.display();

   l.deleten();
   l.display();
}
*/

#include <iostream>
#include <string>
#include <ctime>

using namespace std;

class Node
{
public:
   string name;
   int date;
   int month;
   Node *link;
};

class LinkedList
{
private:
   Node *head = NULL;
   Node *tail = NULL;

public:
   Node *getnode()
   {
      int numberOfStudent;
      Node *newnode = new Node;

      cout << "Enter the name: " << endl;
      cin >> newnode->name;

      cout << "Enter the date: " << endl;
      cin >> newnode->date;

      cout << "Enter the month: " << endl;
      cin >> newnode->month;

      newnode->link = NULL;
      return newnode;
   }

   void append(Node *newnode)
   {
      if (head == NULL)
      {
         head = newnode;
         tail = newnode;
      }
      else
      {
         tail->link = newnode;
         tail = newnode;
      }
   }

   void display()
   {
      Node *temp = head;
      while (temp != NULL)
      {
         cout << temp->name << " - " << temp->date << "/" << temp->month << endl;
         temp = temp->link;
      }
      cout << endl;
   }

   void deletion()
   {
      string name;
      cout << "Enter the name to delete: " << endl;
      cin >> name;

      Node *temp = head;
      Node *prev = NULL;
      while (temp != NULL && temp->name != name)
      {
         prev = temp;
         temp = temp->link;
      }

      if (temp == NULL)
      {
         cout << "Name not found." << endl;
      }
      else if (temp == head)
      {
         head = head->link;
         delete temp;
      }
      else
      {
         prev->link = temp->link;
         delete temp;
      }
   }

   void birthday()
   {
      time_t t = time(0);
      tm *now = localtime(&t);
      int c_day = now->tm_mday;
      int c_month = now->tm_mon + 1;

      Node *temp = head;
      while (temp != NULL)
      {
         if (temp->date == c_day && temp->month == c_month)
         {
            cout << "Happy birthday " << temp->name << "!" << endl;
         }
         temp = temp->link;
      }
      cout << endl;
   }
};

int main()
{
   LinkedList l;
   Node *temp;
   int numberOfStudent;
   int choice;
   bool repeat = true;
   while (repeat)
   {
      cout << "Enter the choice:\n1. Insert name and birthday of new student\n2. Delete a student entry\n3. Display a happy birthday message for whom today (based on system date) is birthday\n4. Display the list of students with their birthdays\n5. Exit" << endl;
      cin >> choice;

      switch (choice)
      {
      case 1:
         cout << "Enter the number of students : " << endl;
         cin >> numberOfStudent;
         for (int i = 0; i < numberOfStudent; i++)
         {
            temp = l.getnode();
            l.append(temp);
         }
         break;
      case 2:
         l.deletion();
         break;
      case 3:
         l.birthday();
         break;
      case 4:
         l.display();
         break;
      case 5:
         repeat = false;
         break;
      default:
         cout << "Invalid choice." << endl;
         break;
      }
   }

   return 0;
}

/*
Enter the choice:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display a happy birthday message for whom today (based on system date) is birthday
4. Display the list of students with their birthdays
5. Exit
1
Enter the number of students :
2
Enter the name:
aditya
Enter the date:
19
Enter the month:
1
Enter the name:
pankaj
Enter the date:
2
Enter the month:
3
Enter the choice:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display a happy birthday message for whom today (based on system date) is birthday
4. Display the list of students with their birthdays
5. Exit
2
Enter the name to delete:
aditya
Enter the choice:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display a happy birthday message for whom today (based on system date) is birthday
4. Display the list of students with their birthdays
5. Exit
4
pankaj - 2/3

Enter the choice:
1. Insert name and birthday of new student
2. Delete a student entry
3. Display a happy birthday message for whom today (based on system date) is birthday
4. Display the list of students with their birthdays
5. Exit

*/