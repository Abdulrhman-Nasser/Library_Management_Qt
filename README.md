### README for Library Management System

---

# Library Management System

## Overview
This project is a Library Management System developed using Qt. It provides a user-friendly interface for managing a library's book database, with distinct functionalities for admin and guest users. The system includes features like login authentication, category-based book search, book addition and deletion, and more.

## Features
- **Login Page:**
  - Authentication for two types of accounts: Admin and Guest.
  - Option to save the last entered username and password for convenience.
  - Ability to delete the last saved login details or load them for quick sign-in.

- **Admin Tab:**
  - Search the library database by book category: Fantasy, Kids, Religious, and Romance.
  - Display all books in a category or search for a specific book by name and category.
  - Add new books to the database with details (Title, Category, Barcode, Author).
  - Delete books from the database using the barcode.
  - Clear the ListWidget to clean up the view.
  - Sign out.

- **Guest Tab:**
  - Search the library database by book category: Fantasy, Kids, Religious, and Romance.
  - Display all books in a category or search for a specific book by name and category.
  - Clear the ListWidget to clean up the view.
  - Sign out or exit the program.

## Components
- Qt-based GUI application
- Login page with user authentication
- Admin and Guest tabs with distinct functionalities
- Database integration for book management

## Setup and Installation
1. **Software Setup:**
   - Install Qt and set up the development environment.
   - Clone this repository:
     ```bash
     git clone https://github.com/Abdulrhman-Nasser/Library_Management_Qt.git
     ```
   - Open the Qt project file in Qt Creator.
   - Configure the database settings in the code to match your database configuration.
   - Build and run the project.

## Usage
1. Launch the Qt application.
2. On the login page, enter your username and password.
   - Admin: Access the admin functionalities.
   - Guest: Access the guest functionalities.
3. **Admin Tab:**
   - Use the search functionality to find books by category or specific book details.
   - Add new books to the database using the provided form.
   - Delete books using their barcode.
   - Clear the ListWidget to clean up the view.
   - Sign out when done.
4. **Guest Tab:**
   - Use the search functionality to find books by category or specific book details.
   - Clear the ListWidget to clean up the view.
   - Sign out or exit the program when done.



## Contributing
Contributions are welcome! Please open an issue or submit a pull request for any improvements or bug fixes.


Let me know if you need any further details or modifications!
