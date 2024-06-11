#ifndef BOOKS_H
#define BOOKS_H

#include <QObject>

class Books : public QObject
{
    Q_OBJECT
    QString author;
    QString  barcode;
    QString category;
    QString title;
public:
    explicit Books(QString a,QString b,QString c, QString t,QObject *parent = nullptr);

    Books(const Books &other);
    Books(Books &&other);
    Books& operator=(const Books &other);
    Books& operator=(Books &&other);

    QString getAuthor() const;
    QString getBarcode() const;
    QString getCategory() const;
    QString getTitle() const;

signals:
};

#endif // BOOKS_H
