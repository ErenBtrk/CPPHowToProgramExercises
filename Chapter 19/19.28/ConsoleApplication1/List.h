// Fig. 19.5: List.h
// List class-template definition.
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include "ListNode.h" // ListNode class definition

template<typename NODETYPE>std::ostream& operator<<(std::ostream& output, const List<NODETYPE>& list);

template<typename NODETYPE>
class List {
    friend std::ostream& operator<< <NODETYPE> (std::ostream& output, const List<NODETYPE>& list);
public:
   // destructor
   ~List() {
      if (!isEmpty()) { // List is not empty
         std::cout << "Destroying nodes ...\n";

         ListNode<NODETYPE>* currentPtr{firstPtr};
         ListNode<NODETYPE>* tempPtr{nullptr};

         while (currentPtr != nullptr) { // delete remaining nodes
            tempPtr = currentPtr;
            currentPtr = currentPtr->nextPtr;  
            delete tempPtr;
         } 
      } 

      std::cout << "All nodes destroyed\n\n";
   } 

   // insert node at front of list
   void insertAtFront(const NODETYPE& value) {
      ListNode<NODETYPE>* newPtr{getNewNode(value)}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
      } 
      else { // List is not empty
         newPtr->nextPtr = firstPtr; // point new node to old 1st node
         firstPtr = newPtr; // aim firstPtr at new node
      } 
   } 

   // insert node at back of list
   void insertAtBack( NODETYPE value) {
      ListNode<NODETYPE>* newPtr{getNewNode(value)}; // new node

      if (isEmpty()) { // List is empty
         firstPtr = lastPtr = newPtr; // new list has only one node
      } 
      else { // List is not empty
         lastPtr->nextPtr = newPtr; // update previous last node
         lastPtr = newPtr; // new last node
      } 
   } 

   // delete node from front of list
   bool removeFromFront(NODETYPE& value) {
      if (isEmpty()) { // List is empty
         return false; // delete unsuccessful
      } 
      else {
         ListNode<NODETYPE>* tempPtr{firstPtr}; // hold item to delete

         if (firstPtr == lastPtr) {
            firstPtr = lastPtr = nullptr; // no nodes remain after removal
         } 
         else {
            firstPtr = firstPtr->nextPtr; // point to previous 2nd node
         } 

         value = tempPtr->data; // return data being removed
         delete tempPtr; // reclaim previous front node
         return true; // delete successful
      } 
   } 

   // delete node from back of list

   bool removeFromBack(NODETYPE& value) {
      if (isEmpty()) { // List is empty
         return false; // delete unsuccessful
      } 
      else {
         ListNode<NODETYPE>* tempPtr{lastPtr}; // hold item to delete

         if (firstPtr == lastPtr) { // List has one element
            firstPtr = lastPtr = nullptr; // no nodes remain after removal
         }
         else {
            ListNode<NODETYPE>* currentPtr{firstPtr};

            // locate second-to-last element            
            while (currentPtr->nextPtr != lastPtr) {   
               currentPtr = currentPtr->nextPtr; // move to next node
            }

            lastPtr = currentPtr; // remove last node
            currentPtr->nextPtr = nullptr; // this is now the last node
         } 

         value = tempPtr->data; // return value from old last node
         delete tempPtr; // reclaim former last node
         return true; // delete successful
      } 
   } 

   // is List empty?

   bool isEmpty() const {
      return firstPtr == nullptr; 
   } 

   // display contents of List
   void print() const {
      if (isEmpty()) { // List is empty
         std::cout << "The list is empty\n\n";
         return;
      } 

      ListNode<NODETYPE>* currentPtr{firstPtr};

      std::cout << "The list is: ";

      while (currentPtr != nullptr) { // get element data
         std::cout << currentPtr->data << " -> ";
         currentPtr = currentPtr->nextPtr;
      } 

      std::cout << "\n\n";
   } 

   bool search(const NODETYPE& value)
   {
       if (firstPtr == nullptr)
       {
           return false;
       }
       else
       {
           ListNode<NODETYPE>* iter = firstPtr;
           while (iter != nullptr)
           {
               if (iter->data == value)
               {
                   return true;
               }
               iter = iter->nextPtr;
           }
           return false;
       }
   }

   bool removeElement(const NODETYPE& value)
   {
       if (firstPtr == nullptr)
       {
           return false;
       }
       else if (firstPtr->nextPtr == nullptr)
       {
           if (firstPtr->data == value)
           {
               ListNode<NODETYPE>* temp = firstPtr;
               firstPtr = nullptr;
               lastPtr = nullptr;
               delete temp;
               return true;
           }
           else
           {
               return false;
           }
       }
      
       else
       {
           if (firstPtr->data == value)
           {
               ListNode<NODETYPE>* temp = firstPtr;
               firstPtr = firstPtr->nextPtr;
               delete temp;
               return true;
           }
           else
           {
               return false;
           }
           ListNode<NODETYPE>* iter = firstPtr;
           
           while (iter->nextPtr->data != value && iter->nextPtr != nullptr)
           {
               iter = iter->nextPtr;
           }
           if (iter->nextPtr->data == value)
           {
               ListNode<NODETYPE>* temp = iter->nextPtr;
               iter->nextPtr = iter->nextPtr->nextPtr;
               delete temp;
               return true;
           }
           else
           {
               return false;
           }
       }
   }

private:
   ListNode<NODETYPE>* firstPtr{nullptr}; // pointer to first node
   ListNode<NODETYPE>* lastPtr{nullptr}; // pointer to last node  


   // utility function to allocate new node
   ListNode<NODETYPE>* getNewNode(const NODETYPE& value) {
      return new ListNode<NODETYPE>{value};
   } 
}; 

template<typename NODETYPE>
std::ostream& operator<<(std::ostream& output, const List<NODETYPE>& list)
{
    if (list.isEmpty()) { // List is empty
        output << "The list is empty\n\n";
        return output;
    }

    ListNode<NODETYPE>* currentPtr{ list.firstPtr };

    output << "The list is: ";

    while (currentPtr != nullptr) { // get element data
        std::cout << currentPtr->data << ' ';
        currentPtr = currentPtr->nextPtr;
    }

    output << "\n\n";
    return output;
}

#endif

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
