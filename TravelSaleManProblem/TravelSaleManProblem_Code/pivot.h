#ifndef PIVOT_H
#define PIVOT_H

#include <QString>
#include <QBrush>
#include <QPen>

class pivot
{
public:
    pivot();
    QVector<QVector<int>> adj_matrix =
    {
        { 0, 0, 3, 0, 0, 11 },
        { 0, 0, 8, 13, 0, 14 },
        { 3, 8, 0, 0, 7, 0 },
        { 0, 13, 0, 0, 33, 0 },
        { 0, 0, 7, 33, 0, 18 },
        { 11, 14, 0, 0, 18, 0 }
    };
};

#endif // PIVOT_H
