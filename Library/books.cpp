#include "books.h"

QString Books::getAuthor() const
{
    return author;
}

QString Books::getBarcode() const
{
    return barcode;
}

QString Books::getCategory() const
{
    return category;
}

QString Books::getTitle() const
{
    return title;
}

Books::Books(QString a, QString b, QString c, QString t, QObject *parent)
    :author(a),barcode(b),category(c),title(t), QObject{parent}
{}


// Copy constructor
Books::Books(const Books &other)
    : QObject(other.parent()), author(other.getAuthor()), barcode(other.getBarcode()), category(other.getCategory()), title(other.getTitle())
{}

// Move constructor
Books::Books(Books &&other)
    : QObject(other.parent()), author(std::move(other.getAuthor())), barcode(std::move(other.getBarcode())), category(std::move(other.getCategory())), title(std::move(other.getTitle()))
{
}

// Copy assignment operator
Books& Books::operator=(const Books &other)
{
    if (this != &other) {
        QObject::setParent(other.parent());
        author = other.getAuthor();
        barcode = other.getBarcode();
        category = other.getCategory();
        title = other.getTitle();
    }
    return *this;
}

// Move assignment operator
Books& Books::operator=(Books &&other)
{
    if (this != &other) {
        QObject::setParent(other.parent());
        author = std::move(other.getAuthor());
        barcode = std::move(other.getBarcode());
        category = std::move(other.getAuthor());
        title = std::move(other.getTitle());

    }
    return *this;
}
