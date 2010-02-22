#include "com_trolltech_qt_core_builtin0.h"
#include <PythonQtConversion.h>
#include <PythonQtMethodInfo.h>
#include <PythonQtSignalReceiver.h>
#include <QDate>
#include <QStringList>
#include <QTextDocument>
#include <QVariant>
#include <qbitarray.h>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qline.h>
#include <qlist.h>
#include <qlocale.h>
#include <qmatrix.h>
#include <qpair.h>
#include <qpoint.h>
#include <qrect.h>
#include <qregexp.h>
#include <qsize.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qtransform.h>
#include <qurl.h>

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray()
{ 
return new QBitArray(); }

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray(const QBitArray&  other)
{ 
return new QBitArray(other); }

QBitArray* PythonQtWrapper_QBitArray::new_QBitArray(int  size, bool  val)
{ 
return new QBitArray(size, val); }

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->count());
}

int  PythonQtWrapper_QBitArray::count(QBitArray* theWrappedObject, bool  on) const
{
  return ( theWrappedObject->count(on));
}

QBitArray*  PythonQtWrapper_QBitArray::operator_assign(QBitArray* theWrappedObject, const QBitArray&  other)
{
  return &( (*theWrappedObject)= other);
}

void PythonQtWrapper_QBitArray::truncate(QBitArray* theWrappedObject, int  pos)
{
  ( theWrappedObject->truncate(pos));
}

bool  PythonQtWrapper_QBitArray::at(QBitArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->at(i));
}

void PythonQtWrapper_QBitArray::clearBit(QBitArray* theWrappedObject, int  i)
{
  ( theWrappedObject->clearBit(i));
}

void PythonQtWrapper_QBitArray::resize(QBitArray* theWrappedObject, int  size)
{
  ( theWrappedObject->resize(size));
}

bool  PythonQtWrapper_QBitArray::isNull(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QBitArray::testBit(QBitArray* theWrappedObject, int  i) const
{
  return ( theWrappedObject->testBit(i));
}

bool  PythonQtWrapper_QBitArray::operator_equal(QBitArray* theWrappedObject, const QBitArray&  a) const
{
  return ( (*theWrappedObject)== a);
}

QBitArray  PythonQtWrapper_QBitArray::__negate__(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->operator~());
}

QBitArray*  PythonQtWrapper_QBitArray::__ior__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)|= arg__1);
}

QBitArray*  PythonQtWrapper_QBitArray::__iand__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)&= arg__1);
}

void PythonQtWrapper_QBitArray::clear(QBitArray* theWrappedObject)
{
  ( theWrappedObject->clear());
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i)
{
  ( theWrappedObject->setBit(i));
}

QBitArray*  PythonQtWrapper_QBitArray::__ixor__(QBitArray* theWrappedObject, const QBitArray&  arg__1)
{
  return &( (*theWrappedObject)^= arg__1);
}

int  PythonQtWrapper_QBitArray::size(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  first, int  last)
{
  ( theWrappedObject->fill(val, first, last));
}

bool  PythonQtWrapper_QBitArray::fill(QBitArray* theWrappedObject, bool  val, int  size)
{
  return ( theWrappedObject->fill(val, size));
}

bool  PythonQtWrapper_QBitArray::isEmpty(QBitArray* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

void PythonQtWrapper_QBitArray::setBit(QBitArray* theWrappedObject, int  i, bool  val)
{
  ( theWrappedObject->setBit(i, val));
}

bool  PythonQtWrapper_QBitArray::toggleBit(QBitArray* theWrappedObject, int  i)
{
  return ( theWrappedObject->toggleBit(i));
}

QBitArray  PythonQtWrapper_QBitArray::__xor__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)^ arg__2);
}

QBitArray  PythonQtWrapper_QBitArray::__and__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)& arg__2);
}

QBitArray  PythonQtWrapper_QBitArray::__or__(QBitArray* theWrappedObject, const QBitArray&  arg__2)
{
  return ( (*theWrappedObject)| arg__2);
}

void PythonQtWrapper_QBitArray::writeTo(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QBitArray::readFrom(QBitArray* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QDate* PythonQtWrapper_QDate::new_QDate()
{ 
return new QDate(); }

QDate* PythonQtWrapper_QDate::new_QDate(int  y, int  m, int  d)
{ 
return new QDate(y, m, d); }

bool  PythonQtWrapper_QDate::operator_equal(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)== other);
}

bool  PythonQtWrapper_QDate::operator_less(QDate* theWrappedObject, const QDate&  other) const
{
  return ( (*theWrappedObject)< other);
}

int  PythonQtWrapper_QDate::year(QDate* theWrappedObject) const
{
  return ( theWrappedObject->year());
}

int  PythonQtWrapper_QDate::day(QDate* theWrappedObject) const
{
  return ( theWrappedObject->day());
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, const QString&  format)
{
  return (QDate::fromString(s, format));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDate::fromString(s, f));
}

QDate  PythonQtWrapper_QDate::addDays(QDate* theWrappedObject, int  days) const
{
  return ( theWrappedObject->addDays(days));
}

int  PythonQtWrapper_QDate::dayOfYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfYear());
}

QString  PythonQtWrapper_QDate::static_QDate_shortDayName(int  weekday)
{
  return (QDate::shortDayName(weekday));
}

bool  PythonQtWrapper_QDate::setDate(QDate* theWrappedObject, int  year, int  month, int  date)
{
  return ( theWrappedObject->setDate(year, month, date));
}

QDate  PythonQtWrapper_QDate::addYears(QDate* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDate  PythonQtWrapper_QDate::addMonths(QDate* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

int  PythonQtWrapper_QDate::weekNumber(QDate* theWrappedObject, int*  yearNum) const
{
  return ( theWrappedObject->weekNumber(yearNum));
}

QString  PythonQtWrapper_QDate::static_QDate_shortMonthName(int  month)
{
  return (QDate::shortMonthName(month));
}

QDate  PythonQtWrapper_QDate::static_QDate_fromJulianDay(int  jd)
{
  return (QDate::fromJulianDay(jd));
}

int  PythonQtWrapper_QDate::daysInYear(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInYear());
}

QDate  PythonQtWrapper_QDate::static_QDate_currentDate()
{
  return (QDate::currentDate());
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString  PythonQtWrapper_QDate::toString(QDate* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QDate::static_QDate_longDayName(int  weekday)
{
  return (QDate::longDayName(weekday));
}

int  PythonQtWrapper_QDate::toJulianDay(QDate* theWrappedObject) const
{
  return ( theWrappedObject->toJulianDay());
}

uint  PythonQtWrapper_QDate::static_QDate_gregorianToJulian(int  y, int  m, int  d)
{
  return (QDate::gregorianToJulian(y, m, d));
}

int  PythonQtWrapper_QDate::daysInMonth(QDate* theWrappedObject) const
{
  return ( theWrappedObject->daysInMonth());
}

int  PythonQtWrapper_QDate::daysTo(QDate* theWrappedObject, const QDate&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

int  PythonQtWrapper_QDate::month(QDate* theWrappedObject) const
{
  return ( theWrappedObject->month());
}

int  PythonQtWrapper_QDate::dayOfWeek(QDate* theWrappedObject) const
{
  return ( theWrappedObject->dayOfWeek());
}

bool  PythonQtWrapper_QDate::static_QDate_isLeapYear(int  year)
{
  return (QDate::isLeapYear(year));
}

QString  PythonQtWrapper_QDate::static_QDate_longMonthName(int  month)
{
  return (QDate::longMonthName(month));
}

bool  PythonQtWrapper_QDate::isNull(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

bool  PythonQtWrapper_QDate::static_QDate_isValid(int  y, int  m, int  d)
{
  return (QDate::isValid(y, m, d));
}

bool  PythonQtWrapper_QDate::isValid(QDate* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QDate::writeTo(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QDate::readFrom(QDate* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QDateTime* PythonQtWrapper_QDateTime::new_QDateTime()
{ 
return new QDateTime(); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1)
{ 
return new QDateTime(arg__1); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDate&  arg__1, const QTime&  arg__2, Qt::TimeSpec  spec)
{ 
return new QDateTime(arg__1, arg__2, spec); }

QDateTime* PythonQtWrapper_QDateTime::new_QDateTime(const QDateTime&  other)
{ 
return new QDateTime(other); }

bool  PythonQtWrapper_QDateTime::operator_less(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)< other);
}

bool  PythonQtWrapper_QDateTime::operator_equal(QDateTime* theWrappedObject, const QDateTime&  other) const
{
  return ( (*theWrappedObject)== other);
}

QDateTime  PythonQtWrapper_QDateTime::toUTC(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toUTC());
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, const QString&  format)
{
  return (QDateTime::fromString(s, format));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QDateTime::fromString(s, f));
}

int  PythonQtWrapper_QDateTime::secsTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
  return ( theWrappedObject->secsTo(arg__1));
}

QDateTime  PythonQtWrapper_QDateTime::addDays(QDateTime* theWrappedObject, int  days) const
{
  return ( theWrappedObject->addDays(days));
}

void PythonQtWrapper_QDateTime::setUtcOffset(QDateTime* theWrappedObject, int  seconds)
{
  ( theWrappedObject->setUtcOffset(seconds));
}

int  PythonQtWrapper_QDateTime::daysTo(QDateTime* theWrappedObject, const QDateTime&  arg__1) const
{
  return ( theWrappedObject->daysTo(arg__1));
}

QDate  PythonQtWrapper_QDateTime::date(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->date());
}

QDateTime  PythonQtWrapper_QDateTime::addYears(QDateTime* theWrappedObject, int  years) const
{
  return ( theWrappedObject->addYears(years));
}

QDateTime  PythonQtWrapper_QDateTime::addMonths(QDateTime* theWrappedObject, int  months) const
{
  return ( theWrappedObject->addMonths(months));
}

QTime  PythonQtWrapper_QDateTime::time(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->time());
}

QDateTime  PythonQtWrapper_QDateTime::addSecs(QDateTime* theWrappedObject, int  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

QString  PythonQtWrapper_QDateTime::toString(QDateTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

void PythonQtWrapper_QDateTime::setTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec)
{
  ( theWrappedObject->setTimeSpec(spec));
}

Qt::TimeSpec  PythonQtWrapper_QDateTime::timeSpec(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->timeSpec());
}

void PythonQtWrapper_QDateTime::setTime(QDateTime* theWrappedObject, const QTime&  time)
{
  ( theWrappedObject->setTime(time));
}

int  PythonQtWrapper_QDateTime::utcOffset(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->utcOffset());
}

void PythonQtWrapper_QDateTime::setDate(QDateTime* theWrappedObject, const QDate&  date)
{
  ( theWrappedObject->setDate(date));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_currentDateTime()
{
  return (QDateTime::currentDateTime());
}

bool  PythonQtWrapper_QDateTime::isNull(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QDateTime::setTime_t(QDateTime* theWrappedObject, uint  secsSince1Jan1970UTC)
{
  ( theWrappedObject->setTime_t(secsSince1Jan1970UTC));
}

QDateTime  PythonQtWrapper_QDateTime::addMSecs(QDateTime* theWrappedObject, qint64  msecs) const
{
  return ( theWrappedObject->addMSecs(msecs));
}

QDateTime  PythonQtWrapper_QDateTime::toLocalTime(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toLocalTime());
}

bool  PythonQtWrapper_QDateTime::isValid(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

uint  PythonQtWrapper_QDateTime::toTime_t(QDateTime* theWrappedObject) const
{
  return ( theWrappedObject->toTime_t());
}

QDateTime  PythonQtWrapper_QDateTime::toTimeSpec(QDateTime* theWrappedObject, Qt::TimeSpec  spec) const
{
  return ( theWrappedObject->toTimeSpec(spec));
}

QDateTime  PythonQtWrapper_QDateTime::static_QDateTime_fromTime_t(uint  secsSince1Jan1970UTC)
{
  return (QDateTime::fromTime_t(secsSince1Jan1970UTC));
}

void PythonQtWrapper_QDateTime::writeTo(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QDateTime::readFrom(QDateTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QLine* PythonQtWrapper_QLine::new_QLine()
{ 
return new QLine(); }

QLine* PythonQtWrapper_QLine::new_QLine(const QPoint&  pt1, const QPoint&  pt2)
{ 
return new QLine(pt1, pt2); }

QLine* PythonQtWrapper_QLine::new_QLine(int  x1, int  y1, int  x2, int  y2)
{ 
return new QLine(x1, y1, x2, y2); }

int  PythonQtWrapper_QLine::x2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

int  PythonQtWrapper_QLine::x1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QLine::operator_equal(QLine* theWrappedObject, const QLine&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLine::translate(QLine* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QLine::setP1(QLine* theWrappedObject, const QPoint&  p1)
{
  ( theWrappedObject->setP1(p1));
}

int  PythonQtWrapper_QLine::dy(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

int  PythonQtWrapper_QLine::dx(QLine* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

void PythonQtWrapper_QLine::setP2(QLine* theWrappedObject, const QPoint&  p2)
{
  ( theWrappedObject->setP2(p2));
}

bool  PythonQtWrapper_QLine::isNull(QLine* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QLine::y2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

int  PythonQtWrapper_QLine::y1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

QPoint  PythonQtWrapper_QLine::p1(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPoint  PythonQtWrapper_QLine::p2(QLine* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

void PythonQtWrapper_QLine::setPoints(QLine* theWrappedObject, const QPoint&  p1, const QPoint&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

void PythonQtWrapper_QLine::setLine(QLine* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

QLine  PythonQtWrapper_QLine::translated(QLine* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QLine  PythonQtWrapper_QLine::__mul__(QLine* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLine::writeTo(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QLine::readFrom(QLine* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QLine::toString(QLine* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QLineF* PythonQtWrapper_QLineF::new_QLineF()
{ 
return new QLineF(); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QLine&  line)
{ 
return new QLineF(line); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(const QPointF&  pt1, const QPointF&  pt2)
{ 
return new QLineF(pt1, pt2); }

QLineF* PythonQtWrapper_QLineF::new_QLineF(qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{ 
return new QLineF(x1, y1, x2, y2); }

QLineF  PythonQtWrapper_QLineF::unitVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->unitVector());
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

QLineF  PythonQtWrapper_QLineF::normalVector(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->normalVector());
}

qreal  PythonQtWrapper_QLineF::x1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x1());
}

qreal  PythonQtWrapper_QLineF::x2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->x2());
}

void PythonQtWrapper_QLineF::translate(QLineF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

bool  PythonQtWrapper_QLineF::operator_equal(QLineF* theWrappedObject, const QLineF&  d) const
{
  return ( (*theWrappedObject)== d);
}

void PythonQtWrapper_QLineF::setP1(QLineF* theWrappedObject, const QPointF&  p1)
{
  ( theWrappedObject->setP1(p1));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QLineF  PythonQtWrapper_QLineF::static_QLineF_fromPolar(qreal  length, qreal  angle)
{
  return (QLineF::fromPolar(length, angle));
}

qreal  PythonQtWrapper_QLineF::dx(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dx());
}

void PythonQtWrapper_QLineF::setP2(QLineF* theWrappedObject, const QPointF&  p2)
{
  ( theWrappedObject->setP2(p2));
}

qreal  PythonQtWrapper_QLineF::y1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y1());
}

qreal  PythonQtWrapper_QLineF::dy(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->dy());
}

bool  PythonQtWrapper_QLineF::isNull(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QLine  PythonQtWrapper_QLineF::toLine(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->toLine());
}

qreal  PythonQtWrapper_QLineF::y2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->y2());
}

qreal  PythonQtWrapper_QLineF::angleTo(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angleTo(l));
}

qreal  PythonQtWrapper_QLineF::length(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->length());
}

QLineF::IntersectType  PythonQtWrapper_QLineF::intersect(QLineF* theWrappedObject, const QLineF&  l, QPointF*  intersectionPoint) const
{
  return ( theWrappedObject->intersect(l, intersectionPoint));
}

QPointF  PythonQtWrapper_QLineF::p2(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p2());
}

QPointF  PythonQtWrapper_QLineF::p1(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->p1());
}

QPointF  PythonQtWrapper_QLineF::pointAt(QLineF* theWrappedObject, qreal  t) const
{
  return ( theWrappedObject->pointAt(t));
}

void PythonQtWrapper_QLineF::setAngle(QLineF* theWrappedObject, qreal  angle)
{
  ( theWrappedObject->setAngle(angle));
}

void PythonQtWrapper_QLineF::setLength(QLineF* theWrappedObject, qreal  len)
{
  ( theWrappedObject->setLength(len));
}

void PythonQtWrapper_QLineF::setPoints(QLineF* theWrappedObject, const QPointF&  p1, const QPointF&  p2)
{
  ( theWrappedObject->setPoints(p1, p2));
}

void PythonQtWrapper_QLineF::setLine(QLineF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setLine(x1, y1, x2, y2));
}

QLineF  PythonQtWrapper_QLineF::translated(QLineF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject, const QLineF&  l) const
{
  return ( theWrappedObject->angle(l));
}

qreal  PythonQtWrapper_QLineF::angle(QLineF* theWrappedObject) const
{
  return ( theWrappedObject->angle());
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QLineF  PythonQtWrapper_QLineF::__mul__(QLineF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QLineF::writeTo(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QLineF::readFrom(QLineF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QLineF::toString(QLineF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QLocale* PythonQtWrapper_QLocale::new_QLocale()
{ 
return new QLocale(); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(QLocale::Language  language, QLocale::Country  country)
{ 
return new QLocale(language, country); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QLocale&  other)
{ 
return new QLocale(other); }

QLocale* PythonQtWrapper_QLocale::new_QLocale(const QString&  name)
{ 
return new QLocale(name); }

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toTime(string, format));
}

QString  PythonQtWrapper_QLocale::monthName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->monthName(arg__1, format));
}

double  PythonQtWrapper_QLocale::toDouble(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toDouble(s, ok));
}

QString  PythonQtWrapper_QLocale::dayName(QLocale* theWrappedObject, int  arg__1, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dayName(arg__1, format));
}

bool  PythonQtWrapper_QLocale::operator_equal(QLocale* theWrappedObject, const QLocale&  other) const
{
  return ( (*theWrappedObject)== other);
}

int  PythonQtWrapper_QLocale::toInt(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toInt(s, ok, base));
}

ushort  PythonQtWrapper_QLocale::toUShort(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toUShort(s, ok, base));
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_system()
{
  return (QLocale::system());
}

QString  PythonQtWrapper_QLocale::timeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->timeFormat(format));
}

void PythonQtWrapper_QLocale::static_QLocale_setDefault(const QLocale&  locale)
{
  (QLocale::setDefault(locale));
}

QChar  PythonQtWrapper_QLocale::exponential(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->exponential());
}

QLocale::Country  PythonQtWrapper_QLocale::country(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->country());
}

QChar  PythonQtWrapper_QLocale::groupSeparator(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->groupSeparator());
}

QString  PythonQtWrapper_QLocale::static_QLocale_languageToString(QLocale::Language  language)
{
  return (QLocale::languageToString(language));
}

QChar  PythonQtWrapper_QLocale::decimalPoint(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->decimalPoint());
}

QString  PythonQtWrapper_QLocale::dateTimeFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateTimeFormat(format));
}

float  PythonQtWrapper_QLocale::toFloat(QLocale* theWrappedObject, const QString&  s, bool*  ok) const
{
  return ( theWrappedObject->toFloat(s, ok));
}

QLocale::Language  PythonQtWrapper_QLocale::language(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->language());
}

QChar  PythonQtWrapper_QLocale::negativeSign(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->negativeSign());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, const QString&  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDateTime&  dateTime, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(dateTime, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(time, format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QTime&  time, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(time, formatStr));
}

short  PythonQtWrapper_QLocale::toShort(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toShort(s, ok, base));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toString(date, format));
}

QChar  PythonQtWrapper_QLocale::zeroDigit(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->zeroDigit());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, const QDate&  date, const QString&  formatStr) const
{
  return ( theWrappedObject->toString(date, formatStr));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, double  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, float  i, char  f, int  prec) const
{
  return ( theWrappedObject->toString(i, f, prec));
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDate(string, format));
}

QLocale::MeasurementSystem  PythonQtWrapper_QLocale::measurementSystem(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->measurementSystem());
}

QChar  PythonQtWrapper_QLocale::percent(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->percent());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, int  i) const
{
  return ( theWrappedObject->toString(i));
}

QString  PythonQtWrapper_QLocale::dateFormat(QLocale* theWrappedObject, QLocale::FormatType  format) const
{
  return ( theWrappedObject->dateFormat(format));
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, short  i) const
{
  return ( theWrappedObject->toString(i));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

QLocale  PythonQtWrapper_QLocale::static_QLocale_c()
{
  return (QLocale::c());
}

QString  PythonQtWrapper_QLocale::toString(QLocale* theWrappedObject, qulonglong  i) const
{
  return ( theWrappedObject->toString(i));
}

QDate  PythonQtWrapper_QLocale::toDate(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toDate(string, arg__2));
}

QList<QLocale::Country >  PythonQtWrapper_QLocale::static_QLocale_countriesForLanguage(QLocale::Language  lang)
{
  return (QLocale::countriesForLanguage(lang));
}

qlonglong  PythonQtWrapper_QLocale::toLongLong(QLocale* theWrappedObject, const QString&  s, bool*  ok, int  base) const
{
  return ( theWrappedObject->toLongLong(s, ok, base));
}

void PythonQtWrapper_QLocale::setNumberOptions(QLocale* theWrappedObject, QLocale::NumberOptions  options)
{
  ( theWrappedObject->setNumberOptions(options));
}

QTime  PythonQtWrapper_QLocale::toTime(QLocale* theWrappedObject, const QString&  string, QLocale::FormatType  arg__2) const
{
  return ( theWrappedObject->toTime(string, arg__2));
}

QDateTime  PythonQtWrapper_QLocale::toDateTime(QLocale* theWrappedObject, const QString&  string, const QString&  format) const
{
  return ( theWrappedObject->toDateTime(string, format));
}

QLocale::NumberOptions  PythonQtWrapper_QLocale::numberOptions(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->numberOptions());
}

QString  PythonQtWrapper_QLocale::static_QLocale_countryToString(QLocale::Country  country)
{
  return (QLocale::countryToString(country));
}

QString  PythonQtWrapper_QLocale::name(QLocale* theWrappedObject) const
{
  return ( theWrappedObject->name());
}

void PythonQtWrapper_QLocale::writeTo(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QLocale::readFrom(QLocale* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QPoint* PythonQtWrapper_QPoint::new_QPoint()
{ 
return new QPoint(); }

QPoint* PythonQtWrapper_QPoint::new_QPoint(int  xpos, int  ypos)
{ 
return new QPoint(xpos, ypos); }

void PythonQtWrapper_QPoint::setY(QPoint* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QPoint::setX(QPoint* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

int  PythonQtWrapper_QPoint::x(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

int  PythonQtWrapper_QPoint::y(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QPoint*  PythonQtWrapper_QPoint::__imul__(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

QPoint*  PythonQtWrapper_QPoint::__idiv__(QPoint* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

bool  PythonQtWrapper_QPoint::isNull(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

int  PythonQtWrapper_QPoint::manhattanLength(QPoint* theWrappedObject) const
{
  return ( theWrappedObject->manhattanLength());
}

QPoint*  PythonQtWrapper_QPoint::__isub__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)-= p);
}

QPoint*  PythonQtWrapper_QPoint::__iadd__(QPoint* theWrappedObject, const QPoint&  p)
{
  return &( (*theWrappedObject)+= p);
}

bool  PythonQtWrapper_QPoint::operator_equal(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)== p2);
}

const QPoint  PythonQtWrapper_QPoint::__sub__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)- p2);
}

const QPoint  PythonQtWrapper_QPoint::__add__(QPoint* theWrappedObject, const QPoint&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

const QPoint  PythonQtWrapper_QPoint::__div__(QPoint* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

const QPoint  PythonQtWrapper_QPoint::__mul__(QPoint* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

void PythonQtWrapper_QPoint::writeTo(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QPoint::readFrom(QPoint* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QPoint::toString(QPoint* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QPointF* PythonQtWrapper_QPointF::new_QPointF()
{ 
return new QPointF(); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(const QPoint&  p)
{ 
return new QPointF(p); }

QPointF* PythonQtWrapper_QPointF::new_QPointF(qreal  xpos, qreal  ypos)
{ 
return new QPointF(xpos, ypos); }

void PythonQtWrapper_QPointF::setX(QPointF* theWrappedObject, qreal  x)
{
  ( theWrappedObject->setX(x));
}

void PythonQtWrapper_QPointF::setY(QPointF* theWrappedObject, qreal  y)
{
  ( theWrappedObject->setY(y));
}

qreal  PythonQtWrapper_QPointF::x(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QPointF::y(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

QPointF*  PythonQtWrapper_QPointF::__imul__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

QPoint  PythonQtWrapper_QPointF::toPoint(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->toPoint());
}

QPointF*  PythonQtWrapper_QPointF::__idiv__(QPointF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

bool  PythonQtWrapper_QPointF::isNull(QPointF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QPointF*  PythonQtWrapper_QPointF::__isub__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)-= p);
}

QPointF*  PythonQtWrapper_QPointF::__iadd__(QPointF* theWrappedObject, const QPointF&  p)
{
  return &( (*theWrappedObject)+= p);
}

const QPointF  PythonQtWrapper_QPointF::__add__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)+ p2);
}

bool  PythonQtWrapper_QPointF::operator_equal(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)== p2);
}

const QPointF  PythonQtWrapper_QPointF::__sub__(QPointF* theWrappedObject, const QPointF&  p2)
{
  return ( (*theWrappedObject)- p2);
}

const QPointF  PythonQtWrapper_QPointF::__div__(QPointF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

const QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QMatrix&  m)
{
  return ( (*theWrappedObject)* m);
}

QPointF  PythonQtWrapper_QPointF::__mul__(QPointF* theWrappedObject, const QTransform&  m)
{
  return ( (*theWrappedObject)* m);
}

void PythonQtWrapper_QPointF::writeTo(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QPointF::readFrom(QPointF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QPointF::toString(QPointF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRect* PythonQtWrapper_QRect::new_QRect()
{ 
return new QRect(); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QPoint&  bottomright)
{ 
return new QRect(topleft, bottomright); }

QRect* PythonQtWrapper_QRect::new_QRect(const QPoint&  topleft, const QSize&  size)
{ 
return new QRect(topleft, size); }

QRect* PythonQtWrapper_QRect::new_QRect(int  left, int  top, int  width, int  height)
{ 
return new QRect(left, top, width, height); }

void PythonQtWrapper_QRect::adjust(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->adjust(x1, y1, x2, y2));
}

int  PythonQtWrapper_QRect::x(QRect* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

QPoint  PythonQtWrapper_QRect::bottomRight(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottomRight());
}

void PythonQtWrapper_QRect::setTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setTopLeft(p));
}

void PythonQtWrapper_QRect::moveCenter(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveCenter(p));
}

QPoint  PythonQtWrapper_QRect::topLeft(QRect* theWrappedObject) const
{
  return ( theWrappedObject->topLeft());
}

int  PythonQtWrapper_QRect::top(QRect* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

int  PythonQtWrapper_QRect::width(QRect* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

void PythonQtWrapper_QRect::moveBottom(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveBottom(pos));
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, const QPoint&  p) const
{
  return ( theWrappedObject->translated(p));
}

QRect  PythonQtWrapper_QRect::translated(QRect* theWrappedObject, int  dx, int  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

void PythonQtWrapper_QRect::setTopRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setTopRight(p));
}

void PythonQtWrapper_QRect::setWidth(QRect* theWrappedObject, int  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QRect::moveTop(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveTop(pos));
}

int  PythonQtWrapper_QRect::right(QRect* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

bool  PythonQtWrapper_QRect::intersects(QRect* theWrappedObject, const QRect&  r) const
{
  return ( theWrappedObject->intersects(r));
}

QRect  PythonQtWrapper_QRect::normalized(QRect* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

QPoint  PythonQtWrapper_QRect::topRight(QRect* theWrappedObject) const
{
  return ( theWrappedObject->topRight());
}

QPoint  PythonQtWrapper_QRect::center(QRect* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

void PythonQtWrapper_QRect::setBottom(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setBottom(pos));
}

QPoint  PythonQtWrapper_QRect::bottomLeft(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottomLeft());
}

int  PythonQtWrapper_QRect::bottom(QRect* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

bool  PythonQtWrapper_QRect::isEmpty(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QRect  PythonQtWrapper_QRect::united(QRect* theWrappedObject, const QRect&  other) const
{
  return ( theWrappedObject->united(other));
}

void PythonQtWrapper_QRect::setRight(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setRight(pos));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y, bool  proper) const
{
  return ( theWrappedObject->contains(x, y, proper));
}

void PythonQtWrapper_QRect::setRect(QRect* theWrappedObject, int  x, int  y, int  w, int  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

QSize  PythonQtWrapper_QRect::size(QRect* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QRect::moveLeft(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveLeft(pos));
}

int  PythonQtWrapper_QRect::left(QRect* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

void PythonQtWrapper_QRect::moveBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveBottomLeft(p));
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->translate(p));
}

void PythonQtWrapper_QRect::translate(QRect* theWrappedObject, int  dx, int  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

void PythonQtWrapper_QRect::moveBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveBottomRight(p));
}

QRect  PythonQtWrapper_QRect::adjusted(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2) const
{
  return ( theWrappedObject->adjusted(x1, y1, x2, y2));
}

void PythonQtWrapper_QRect::moveTopLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTopLeft(p));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QRect&  r, bool  proper) const
{
  return ( theWrappedObject->contains(r, proper));
}

void PythonQtWrapper_QRect::setLeft(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setLeft(pos));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, int  x, int  y) const
{
  return ( theWrappedObject->contains(x, y));
}

bool  PythonQtWrapper_QRect::contains(QRect* theWrappedObject, const QPoint&  p, bool  proper) const
{
  return ( theWrappedObject->contains(p, proper));
}

void PythonQtWrapper_QRect::setHeight(QRect* theWrappedObject, int  h)
{
  ( theWrappedObject->setHeight(h));
}

bool  PythonQtWrapper_QRect::isValid(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QRect::setBottomRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setBottomRight(p));
}

void PythonQtWrapper_QRect::moveTopRight(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTopRight(p));
}

void PythonQtWrapper_QRect::setCoords(QRect* theWrappedObject, int  x1, int  y1, int  x2, int  y2)
{
  ( theWrappedObject->setCoords(x1, y1, x2, y2));
}

void PythonQtWrapper_QRect::setSize(QRect* theWrappedObject, const QSize&  s)
{
  ( theWrappedObject->setSize(s));
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QRect::moveTo(QRect* theWrappedObject, int  x, int  t)
{
  ( theWrappedObject->moveTo(x, t));
}

bool  PythonQtWrapper_QRect::isNull(QRect* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

void PythonQtWrapper_QRect::moveRight(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->moveRight(pos));
}

void PythonQtWrapper_QRect::setBottomLeft(QRect* theWrappedObject, const QPoint&  p)
{
  ( theWrappedObject->setBottomLeft(p));
}

int  PythonQtWrapper_QRect::y(QRect* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

void PythonQtWrapper_QRect::setX(QRect* theWrappedObject, int  x)
{
  ( theWrappedObject->setX(x));
}

QRect  PythonQtWrapper_QRect::intersected(QRect* theWrappedObject, const QRect&  other) const
{
  return ( theWrappedObject->intersected(other));
}

int  PythonQtWrapper_QRect::height(QRect* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QRect::setY(QRect* theWrappedObject, int  y)
{
  ( theWrappedObject->setY(y));
}

void PythonQtWrapper_QRect::setTop(QRect* theWrappedObject, int  pos)
{
  ( theWrappedObject->setTop(pos));
}

bool  PythonQtWrapper_QRect::operator_equal(QRect* theWrappedObject, const QRect&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QRect::writeTo(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QRect::readFrom(QRect* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QRect::toString(QRect* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRectF* PythonQtWrapper_QRectF::new_QRectF()
{ 
return new QRectF(); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QPointF&  bottomRight)
{ 
return new QRectF(topleft, bottomRight); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QPointF&  topleft, const QSizeF&  size)
{ 
return new QRectF(topleft, size); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(const QRect&  rect)
{ 
return new QRectF(rect); }

QRectF* PythonQtWrapper_QRectF::new_QRectF(qreal  left, qreal  top, qreal  width, qreal  height)
{ 
return new QRectF(left, top, width, height); }

QRectF  PythonQtWrapper_QRectF::intersected(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->intersected(other));
}

void PythonQtWrapper_QRectF::moveCenter(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveCenter(p));
}

void PythonQtWrapper_QRectF::setTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopLeft(p));
}

QPointF  PythonQtWrapper_QRectF::bottomRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomRight());
}

QPointF  PythonQtWrapper_QRectF::topLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topLeft());
}

qreal  PythonQtWrapper_QRectF::top(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->top());
}

qreal  PythonQtWrapper_QRectF::right(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->right());
}

qreal  PythonQtWrapper_QRectF::width(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

void PythonQtWrapper_QRectF::moveBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveBottom(pos));
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->translated(p));
}

QRectF  PythonQtWrapper_QRectF::translated(QRectF* theWrappedObject, qreal  dx, qreal  dy) const
{
  return ( theWrappedObject->translated(dx, dy));
}

void PythonQtWrapper_QRectF::setTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setTopRight(p));
}

void PythonQtWrapper_QRectF::setWidth(QRectF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

QPointF  PythonQtWrapper_QRectF::center(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->center());
}

void PythonQtWrapper_QRectF::setBottom(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setBottom(pos));
}

QRect  PythonQtWrapper_QRectF::toAlignedRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toAlignedRect());
}

void PythonQtWrapper_QRectF::moveTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveTop(pos));
}

QPointF  PythonQtWrapper_QRectF::topRight(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->topRight());
}

QRectF  PythonQtWrapper_QRectF::normalized(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->normalized());
}

bool  PythonQtWrapper_QRectF::intersects(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->intersects(r));
}

QPointF  PythonQtWrapper_QRectF::bottomLeft(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottomLeft());
}

qreal  PythonQtWrapper_QRectF::bottom(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->bottom());
}

void PythonQtWrapper_QRectF::setRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setRight(pos));
}

bool  PythonQtWrapper_QRectF::isEmpty(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QRectF  PythonQtWrapper_QRectF::united(QRectF* theWrappedObject, const QRectF&  other) const
{
  return ( theWrappedObject->united(other));
}

void PythonQtWrapper_QRectF::setRect(QRectF* theWrappedObject, qreal  x, qreal  y, qreal  w, qreal  h)
{
  ( theWrappedObject->setRect(x, y, w, h));
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, qreal  x, qreal  y) const
{
  return ( theWrappedObject->contains(x, y));
}

void PythonQtWrapper_QRectF::moveLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveLeft(pos));
}

qreal  PythonQtWrapper_QRectF::left(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->left());
}

QSizeF  PythonQtWrapper_QRectF::size(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->size());
}

void PythonQtWrapper_QRectF::moveBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomLeft(p));
}

QRectF  PythonQtWrapper_QRectF::adjusted(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2) const
{
  return ( theWrappedObject->adjusted(x1, y1, x2, y2));
}

void PythonQtWrapper_QRectF::moveBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveBottomRight(p));
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, qreal  dx, qreal  dy)
{
  ( theWrappedObject->translate(dx, dy));
}

void PythonQtWrapper_QRectF::translate(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->translate(p));
}

bool  PythonQtWrapper_QRectF::isValid(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QRectF&  r) const
{
  return ( theWrappedObject->contains(r));
}

bool  PythonQtWrapper_QRectF::contains(QRectF* theWrappedObject, const QPointF&  p) const
{
  return ( theWrappedObject->contains(p));
}

void PythonQtWrapper_QRectF::setHeight(QRectF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QRectF::moveTopLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopLeft(p));
}

void PythonQtWrapper_QRectF::moveTopRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTopRight(p));
}

void PythonQtWrapper_QRectF::setBottomRight(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomRight(p));
}

void PythonQtWrapper_QRectF::setSize(QRectF* theWrappedObject, const QSizeF&  s)
{
  ( theWrappedObject->setSize(s));
}

void PythonQtWrapper_QRectF::setCoords(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->setCoords(x1, y1, x2, y2));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->moveTo(p));
}

void PythonQtWrapper_QRectF::moveTo(QRectF* theWrappedObject, qreal  x, qreal  t)
{
  ( theWrappedObject->moveTo(x, t));
}

bool  PythonQtWrapper_QRectF::isNull(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QRect  PythonQtWrapper_QRectF::toRect(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->toRect());
}

void PythonQtWrapper_QRectF::setLeft(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setLeft(pos));
}

void PythonQtWrapper_QRectF::moveRight(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->moveRight(pos));
}

qreal  PythonQtWrapper_QRectF::x(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->x());
}

qreal  PythonQtWrapper_QRectF::height(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

void PythonQtWrapper_QRectF::setTop(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setTop(pos));
}

void PythonQtWrapper_QRectF::setX(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setX(pos));
}

void PythonQtWrapper_QRectF::setBottomLeft(QRectF* theWrappedObject, const QPointF&  p)
{
  ( theWrappedObject->setBottomLeft(p));
}

void PythonQtWrapper_QRectF::adjust(QRectF* theWrappedObject, qreal  x1, qreal  y1, qreal  x2, qreal  y2)
{
  ( theWrappedObject->adjust(x1, y1, x2, y2));
}

qreal  PythonQtWrapper_QRectF::y(QRectF* theWrappedObject) const
{
  return ( theWrappedObject->y());
}

void PythonQtWrapper_QRectF::setY(QRectF* theWrappedObject, qreal  pos)
{
  ( theWrappedObject->setY(pos));
}

bool  PythonQtWrapper_QRectF::operator_equal(QRectF* theWrappedObject, const QRectF&  arg__2)
{
  return ( (*theWrappedObject)== arg__2);
}

void PythonQtWrapper_QRectF::writeTo(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QRectF::readFrom(QRectF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QRectF::toString(QRectF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QRegExp* PythonQtWrapper_QRegExp::new_QRegExp()
{ 
return new QRegExp(); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QRegExp&  rx)
{ 
return new QRegExp(rx); }

QRegExp* PythonQtWrapper_QRegExp::new_QRegExp(const QString&  pattern, Qt::CaseSensitivity  cs, QRegExp::PatternSyntax  syntax)
{ 
return new QRegExp(pattern, cs, syntax); }

QStringList  PythonQtWrapper_QRegExp::capturedTexts(QRegExp* theWrappedObject)
{
  return ( theWrappedObject->capturedTexts());
}

void PythonQtWrapper_QRegExp::setPatternSyntax(QRegExp* theWrappedObject, QRegExp::PatternSyntax  syntax)
{
  ( theWrappedObject->setPatternSyntax(syntax));
}

bool  PythonQtWrapper_QRegExp::isValid(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

int  PythonQtWrapper_QRegExp::pos(QRegExp* theWrappedObject, int  nth)
{
  return ( theWrappedObject->pos(nth));
}

int  PythonQtWrapper_QRegExp::numCaptures(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->numCaptures());
}

int  PythonQtWrapper_QRegExp::indexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
  return ( theWrappedObject->indexIn(str, offset, caretMode));
}

void PythonQtWrapper_QRegExp::setPattern(QRegExp* theWrappedObject, const QString&  pattern)
{
  ( theWrappedObject->setPattern(pattern));
}

Qt::CaseSensitivity  PythonQtWrapper_QRegExp::caseSensitivity(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->caseSensitivity());
}

void PythonQtWrapper_QRegExp::setCaseSensitivity(QRegExp* theWrappedObject, Qt::CaseSensitivity  cs)
{
  ( theWrappedObject->setCaseSensitivity(cs));
}

bool  PythonQtWrapper_QRegExp::operator_equal(QRegExp* theWrappedObject, const QRegExp&  rx) const
{
  return ( (*theWrappedObject)== rx);
}

QString  PythonQtWrapper_QRegExp::pattern(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->pattern());
}

int  PythonQtWrapper_QRegExp::matchedLength(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->matchedLength());
}

bool  PythonQtWrapper_QRegExp::exactMatch(QRegExp* theWrappedObject, const QString&  str) const
{
  return ( theWrappedObject->exactMatch(str));
}

bool  PythonQtWrapper_QRegExp::isMinimal(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isMinimal());
}

bool  PythonQtWrapper_QRegExp::isEmpty(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

void PythonQtWrapper_QRegExp::setMinimal(QRegExp* theWrappedObject, bool  minimal)
{
  ( theWrappedObject->setMinimal(minimal));
}

QString  PythonQtWrapper_QRegExp::errorString(QRegExp* theWrappedObject)
{
  return ( theWrappedObject->errorString());
}

QRegExp::PatternSyntax  PythonQtWrapper_QRegExp::patternSyntax(QRegExp* theWrappedObject) const
{
  return ( theWrappedObject->patternSyntax());
}

QString  PythonQtWrapper_QRegExp::static_QRegExp_escape(const QString&  str)
{
  return (QRegExp::escape(str));
}

QString  PythonQtWrapper_QRegExp::cap(QRegExp* theWrappedObject, int  nth)
{
  return ( theWrappedObject->cap(nth));
}

int  PythonQtWrapper_QRegExp::lastIndexIn(QRegExp* theWrappedObject, const QString&  str, int  offset, QRegExp::CaretMode  caretMode) const
{
  return ( theWrappedObject->lastIndexIn(str, offset, caretMode));
}

void PythonQtWrapper_QRegExp::writeTo(QRegExp* theWrappedObject, QDataStream&  out)
{
  out <<  (*theWrappedObject);
}

void PythonQtWrapper_QRegExp::readFrom(QRegExp* theWrappedObject, QDataStream&  in)
{
  in >>  (*theWrappedObject);
}



QSize* PythonQtWrapper_QSize::new_QSize()
{ 
return new QSize(); }

QSize* PythonQtWrapper_QSize::new_QSize(int  w, int  h)
{ 
return new QSize(w, h); }

bool  PythonQtWrapper_QSize::isValid(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, const QSize&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

void PythonQtWrapper_QSize::scale(QSize* theWrappedObject, int  w, int  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

QSize  PythonQtWrapper_QSize::expandedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

void PythonQtWrapper_QSize::setWidth(QSize* theWrappedObject, int  w)
{
  ( theWrappedObject->setWidth(w));
}

void PythonQtWrapper_QSize::setHeight(QSize* theWrappedObject, int  h)
{
  ( theWrappedObject->setHeight(h));
}

QSize*  PythonQtWrapper_QSize::__imul__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

QSize  PythonQtWrapper_QSize::boundedTo(QSize* theWrappedObject, const QSize&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

bool  PythonQtWrapper_QSize::isNull(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QSize*  PythonQtWrapper_QSize::__idiv__(QSize* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

int  PythonQtWrapper_QSize::width(QSize* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

void PythonQtWrapper_QSize::transpose(QSize* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

QSize*  PythonQtWrapper_QSize::__isub__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QSize*  PythonQtWrapper_QSize::__iadd__(QSize* theWrappedObject, const QSize&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

bool  PythonQtWrapper_QSize::isEmpty(QSize* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

int  PythonQtWrapper_QSize::height(QSize* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

const QSize  PythonQtWrapper_QSize::__add__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

bool  PythonQtWrapper_QSize::operator_equal(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)== s2);
}

const QSize  PythonQtWrapper_QSize::__sub__(QSize* theWrappedObject, const QSize&  s2)
{
  return ( (*theWrappedObject)- s2);
}

const QSize  PythonQtWrapper_QSize::__div__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

const QSize  PythonQtWrapper_QSize::__mul__(QSize* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

void PythonQtWrapper_QSize::writeTo(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QSize::readFrom(QSize* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QSize::toString(QSize* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QSizeF* PythonQtWrapper_QSizeF::new_QSizeF()
{ 
return new QSizeF(); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(const QSize&  sz)
{ 
return new QSizeF(sz); }

QSizeF* PythonQtWrapper_QSizeF::new_QSizeF(qreal  w, qreal  h)
{ 
return new QSizeF(w, h); }

bool  PythonQtWrapper_QSizeF::isValid(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, const QSizeF&  s, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(s, mode));
}

void PythonQtWrapper_QSizeF::setHeight(QSizeF* theWrappedObject, qreal  h)
{
  ( theWrappedObject->setHeight(h));
}

void PythonQtWrapper_QSizeF::scale(QSizeF* theWrappedObject, qreal  w, qreal  h, Qt::AspectRatioMode  mode)
{
  ( theWrappedObject->scale(w, h, mode));
}

QSizeF  PythonQtWrapper_QSizeF::expandedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->expandedTo(arg__1));
}

void PythonQtWrapper_QSizeF::setWidth(QSizeF* theWrappedObject, qreal  w)
{
  ( theWrappedObject->setWidth(w));
}

QSizeF*  PythonQtWrapper_QSizeF::__imul__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)*= c);
}

bool  PythonQtWrapper_QSizeF::isNull(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QSizeF  PythonQtWrapper_QSizeF::boundedTo(QSizeF* theWrappedObject, const QSizeF&  arg__1) const
{
  return ( theWrappedObject->boundedTo(arg__1));
}

qreal  PythonQtWrapper_QSizeF::width(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->width());
}

QSizeF*  PythonQtWrapper_QSizeF::__idiv__(QSizeF* theWrappedObject, qreal  c)
{
  return &( (*theWrappedObject)/= c);
}

void PythonQtWrapper_QSizeF::transpose(QSizeF* theWrappedObject)
{
  ( theWrappedObject->transpose());
}

QSizeF*  PythonQtWrapper_QSizeF::__isub__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)-= arg__1);
}

QSizeF*  PythonQtWrapper_QSizeF::__iadd__(QSizeF* theWrappedObject, const QSizeF&  arg__1)
{
  return &( (*theWrappedObject)+= arg__1);
}

QSize  PythonQtWrapper_QSizeF::toSize(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->toSize());
}

bool  PythonQtWrapper_QSizeF::isEmpty(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

qreal  PythonQtWrapper_QSizeF::height(QSizeF* theWrappedObject) const
{
  return ( theWrappedObject->height());
}

const QSizeF  PythonQtWrapper_QSizeF::__add__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)+ s2);
}

const QSizeF  PythonQtWrapper_QSizeF::__sub__(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)- s2);
}

bool  PythonQtWrapper_QSizeF::operator_equal(QSizeF* theWrappedObject, const QSizeF&  s2)
{
  return ( (*theWrappedObject)== s2);
}

const QSizeF  PythonQtWrapper_QSizeF::__div__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)/ c);
}

const QSizeF  PythonQtWrapper_QSizeF::__mul__(QSizeF* theWrappedObject, qreal  c)
{
  return ( (*theWrappedObject)* c);
}

void PythonQtWrapper_QSizeF::writeTo(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QSizeF::readFrom(QSizeF* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}

QString PythonQtWrapper_QSizeF::toString(QSizeF* obj) {
  QString result;
  QDebug d(&result);
  d << *obj;
  return result;
}



QTime* PythonQtWrapper_QTime::new_QTime()
{ 
return new QTime(); }

QTime* PythonQtWrapper_QTime::new_QTime(int  h, int  m, int  s, int  ms)
{ 
return new QTime(h, m, s, ms); }

int  PythonQtWrapper_QTime::msecsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->msecsTo(arg__1));
}

bool  PythonQtWrapper_QTime::operator_less(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)< other);
}

QTime  PythonQtWrapper_QTime::addSecs(QTime* theWrappedObject, int  secs) const
{
  return ( theWrappedObject->addSecs(secs));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, Qt::DateFormat  f) const
{
  return ( theWrappedObject->toString(f));
}

QString  PythonQtWrapper_QTime::toString(QTime* theWrappedObject, const QString&  format) const
{
  return ( theWrappedObject->toString(format));
}

void PythonQtWrapper_QTime::start(QTime* theWrappedObject)
{
  ( theWrappedObject->start());
}

bool  PythonQtWrapper_QTime::isValid(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

bool  PythonQtWrapper_QTime::static_QTime_isValid(int  h, int  m, int  s, int  ms)
{
  return (QTime::isValid(h, m, s, ms));
}

int  PythonQtWrapper_QTime::hour(QTime* theWrappedObject) const
{
  return ( theWrappedObject->hour());
}

int  PythonQtWrapper_QTime::elapsed(QTime* theWrappedObject) const
{
  return ( theWrappedObject->elapsed());
}

bool  PythonQtWrapper_QTime::setHMS(QTime* theWrappedObject, int  h, int  m, int  s, int  ms)
{
  return ( theWrappedObject->setHMS(h, m, s, ms));
}

int  PythonQtWrapper_QTime::minute(QTime* theWrappedObject) const
{
  return ( theWrappedObject->minute());
}

bool  PythonQtWrapper_QTime::operator_equal(QTime* theWrappedObject, const QTime&  other) const
{
  return ( (*theWrappedObject)== other);
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, const QString&  format)
{
  return (QTime::fromString(s, format));
}

QTime  PythonQtWrapper_QTime::static_QTime_fromString(const QString&  s, Qt::DateFormat  f)
{
  return (QTime::fromString(s, f));
}

bool  PythonQtWrapper_QTime::isNull(QTime* theWrappedObject) const
{
  return ( theWrappedObject->isNull());
}

QTime  PythonQtWrapper_QTime::static_QTime_currentTime()
{
  return (QTime::currentTime());
}

int  PythonQtWrapper_QTime::msec(QTime* theWrappedObject) const
{
  return ( theWrappedObject->msec());
}

int  PythonQtWrapper_QTime::secsTo(QTime* theWrappedObject, const QTime&  arg__1) const
{
  return ( theWrappedObject->secsTo(arg__1));
}

QTime  PythonQtWrapper_QTime::addMSecs(QTime* theWrappedObject, int  ms) const
{
  return ( theWrappedObject->addMSecs(ms));
}

int  PythonQtWrapper_QTime::restart(QTime* theWrappedObject)
{
  return ( theWrappedObject->restart());
}

int  PythonQtWrapper_QTime::second(QTime* theWrappedObject) const
{
  return ( theWrappedObject->second());
}

void PythonQtWrapper_QTime::writeTo(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QTime::readFrom(QTime* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QUrl* PythonQtWrapper_QUrl::new_QUrl()
{ 
return new QUrl(); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url)
{ 
return new QUrl(url); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QString&  url, QUrl::ParsingMode  mode)
{ 
return new QUrl(url, mode); }

QUrl* PythonQtWrapper_QUrl::new_QUrl(const QUrl&  copy)
{ 
return new QUrl(copy); }

QString  PythonQtWrapper_QUrl::password(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->password());
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toAce(const QString&  arg__1)
{
  return (QUrl::toAce(arg__1));
}

void PythonQtWrapper_QUrl::removeAllQueryItems(QUrl* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeAllQueryItems(key));
}

void PythonQtWrapper_QUrl::setUserInfo(QUrl* theWrappedObject, const QString&  userInfo)
{
  ( theWrappedObject->setUserInfo(userInfo));
}

void PythonQtWrapper_QUrl::setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url)
{
  ( theWrappedObject->setEncodedUrl(url));
}

void PythonQtWrapper_QUrl::setEncodedFragment(QUrl* theWrappedObject, const QByteArray&  fragment)
{
  ( theWrappedObject->setEncodedFragment(fragment));
}

QList<QByteArray >  PythonQtWrapper_QUrl::allEncodedQueryItemValues(QUrl* theWrappedObject, const QByteArray&  key) const
{
  return ( theWrappedObject->allEncodedQueryItemValues(key));
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromAce(const QByteArray&  arg__1)
{
  return (QUrl::fromAce(arg__1));
}

void PythonQtWrapper_QUrl::setHost(QUrl* theWrappedObject, const QString&  host)
{
  ( theWrappedObject->setHost(host));
}

char  PythonQtWrapper_QUrl::queryPairDelimiter(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->queryPairDelimiter());
}

void PythonQtWrapper_QUrl::static_QUrl_setIdnWhitelist(const QStringList&  arg__1)
{
  (QUrl::setIdnWhitelist(arg__1));
}

void PythonQtWrapper_QUrl::addEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key, const QByteArray&  value)
{
  ( theWrappedObject->addEncodedQueryItem(key, value));
}

QString  PythonQtWrapper_QUrl::queryItemValue(QUrl* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->queryItemValue(key));
}

QByteArray  PythonQtWrapper_QUrl::toEncoded(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->toEncoded(options));
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromLocalFile(const QString&  localfile)
{
  return (QUrl::fromLocalFile(localfile));
}

QStringList  PythonQtWrapper_QUrl::allQueryItemValues(QUrl* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->allQueryItemValues(key));
}

void PythonQtWrapper_QUrl::setEncodedHost(QUrl* theWrappedObject, const QByteArray&  host)
{
  ( theWrappedObject->setEncodedHost(host));
}

void PythonQtWrapper_QUrl::setPath(QUrl* theWrappedObject, const QString&  path)
{
  ( theWrappedObject->setPath(path));
}

void PythonQtWrapper_QUrl::setEncodedQuery(QUrl* theWrappedObject, const QByteArray&  query)
{
  ( theWrappedObject->setEncodedQuery(query));
}

void PythonQtWrapper_QUrl::setAuthority(QUrl* theWrappedObject, const QString&  authority)
{
  ( theWrappedObject->setAuthority(authority));
}

QByteArray  PythonQtWrapper_QUrl::encodedUserName(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedUserName());
}

void PythonQtWrapper_QUrl::clear(QUrl* theWrappedObject)
{
  ( theWrappedObject->clear());
}

QByteArray  PythonQtWrapper_QUrl::encodedQuery(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedQuery());
}

QString  PythonQtWrapper_QUrl::errorString(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->errorString());
}

QString  PythonQtWrapper_QUrl::scheme(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->scheme());
}

void PythonQtWrapper_QUrl::setUrl(QUrl* theWrappedObject, const QString&  url, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setUrl(url, mode));
}

void PythonQtWrapper_QUrl::setUrl(QUrl* theWrappedObject, const QString&  url)
{
  ( theWrappedObject->setUrl(url));
}

QList<QPair<QByteArray , QByteArray >  >  PythonQtWrapper_QUrl::encodedQueryItems(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedQueryItems());
}

void PythonQtWrapper_QUrl::setScheme(QUrl* theWrappedObject, const QString&  scheme)
{
  ( theWrappedObject->setScheme(scheme));
}

void PythonQtWrapper_QUrl::addQueryItem(QUrl* theWrappedObject, const QString&  key, const QString&  value)
{
  ( theWrappedObject->addQueryItem(key, value));
}

void PythonQtWrapper_QUrl::setEncodedUrl(QUrl* theWrappedObject, const QByteArray&  url, QUrl::ParsingMode  mode)
{
  ( theWrappedObject->setEncodedUrl(url, mode));
}

void PythonQtWrapper_QUrl::removeEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->removeEncodedQueryItem(key));
}

QByteArray  PythonQtWrapper_QUrl::encodedHost(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedHost());
}

bool  PythonQtWrapper_QUrl::isParentOf(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( theWrappedObject->isParentOf(url));
}

QString  PythonQtWrapper_QUrl::path(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->path());
}

void PythonQtWrapper_QUrl::setPassword(QUrl* theWrappedObject, const QString&  password)
{
  ( theWrappedObject->setPassword(password));
}

QStringList  PythonQtWrapper_QUrl::static_QUrl_idnWhitelist()
{
  return (QUrl::idnWhitelist());
}

bool  PythonQtWrapper_QUrl::isEmpty(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isEmpty());
}

QByteArray  PythonQtWrapper_QUrl::encodedPassword(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedPassword());
}

void PythonQtWrapper_QUrl::removeAllEncodedQueryItems(QUrl* theWrappedObject, const QByteArray&  key)
{
  ( theWrappedObject->removeAllEncodedQueryItems(key));
}

bool  PythonQtWrapper_QUrl::hasQueryItem(QUrl* theWrappedObject, const QString&  key) const
{
  return ( theWrappedObject->hasQueryItem(key));
}

QString  PythonQtWrapper_QUrl::authority(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->authority());
}

QList<QPair<QString , QString >  >  PythonQtWrapper_QUrl::queryItems(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->queryItems());
}

void PythonQtWrapper_QUrl::setFragment(QUrl* theWrappedObject, const QString&  fragment)
{
  ( theWrappedObject->setFragment(fragment));
}

bool  PythonQtWrapper_QUrl::operator_equal(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( (*theWrappedObject)== url);
}

QString  PythonQtWrapper_QUrl::host(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->host());
}

int  PythonQtWrapper_QUrl::port(QUrl* theWrappedObject, int  defaultPort) const
{
  return ( theWrappedObject->port(defaultPort));
}

void PythonQtWrapper_QUrl::setEncodedPath(QUrl* theWrappedObject, const QByteArray&  path)
{
  ( theWrappedObject->setEncodedPath(path));
}

bool  PythonQtWrapper_QUrl::operator_less(QUrl* theWrappedObject, const QUrl&  url) const
{
  return ( (*theWrappedObject)< url);
}

char  PythonQtWrapper_QUrl::queryValueDelimiter(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->queryValueDelimiter());
}

int  PythonQtWrapper_QUrl::port(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->port());
}

void PythonQtWrapper_QUrl::setEncodedPassword(QUrl* theWrappedObject, const QByteArray&  password)
{
  ( theWrappedObject->setEncodedPassword(password));
}

bool  PythonQtWrapper_QUrl::isValid(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isValid());
}

QString  PythonQtWrapper_QUrl::fragment(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->fragment());
}

QUrl  PythonQtWrapper_QUrl::resolved(QUrl* theWrappedObject, const QUrl&  relative) const
{
  return ( theWrappedObject->resolved(relative));
}

void PythonQtWrapper_QUrl::setQueryItems(QUrl* theWrappedObject, const QList<QPair<QString , QString >  >&  query)
{
  ( theWrappedObject->setQueryItems(query));
}

QByteArray  PythonQtWrapper_QUrl::encodedPath(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedPath());
}

QString  PythonQtWrapper_QUrl::toString(QUrl* theWrappedObject, QUrl::FormattingOptions  options) const
{
  return ( theWrappedObject->toString(options));
}

void PythonQtWrapper_QUrl::setEncodedUserName(QUrl* theWrappedObject, const QByteArray&  userName)
{
  ( theWrappedObject->setEncodedUserName(userName));
}

bool  PythonQtWrapper_QUrl::isRelative(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->isRelative());
}

QString  PythonQtWrapper_QUrl::userName(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->userName());
}

bool  PythonQtWrapper_QUrl::hasQuery(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->hasQuery());
}

QByteArray  PythonQtWrapper_QUrl::encodedFragment(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->encodedFragment());
}

void PythonQtWrapper_QUrl::setQueryDelimiters(QUrl* theWrappedObject, char  valueDelimiter, char  pairDelimiter)
{
  ( theWrappedObject->setQueryDelimiters(valueDelimiter, pairDelimiter));
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromEncoded(const QByteArray&  url, QUrl::ParsingMode  mode)
{
  return (QUrl::fromEncoded(url, mode));
}

QString  PythonQtWrapper_QUrl::toLocalFile(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->toLocalFile());
}

QByteArray  PythonQtWrapper_QUrl::encodedQueryItemValue(QUrl* theWrappedObject, const QByteArray&  key) const
{
  return ( theWrappedObject->encodedQueryItemValue(key));
}

QByteArray  PythonQtWrapper_QUrl::static_QUrl_toPercentEncoding(const QString&  arg__1, const QByteArray&  exclude, const QByteArray&  include)
{
  return (QUrl::toPercentEncoding(arg__1, exclude, include));
}

void PythonQtWrapper_QUrl::setPort(QUrl* theWrappedObject, int  port)
{
  ( theWrappedObject->setPort(port));
}

QString  PythonQtWrapper_QUrl::static_QUrl_fromPercentEncoding(const QByteArray&  arg__1)
{
  return (QUrl::fromPercentEncoding(arg__1));
}

bool  PythonQtWrapper_QUrl::hasEncodedQueryItem(QUrl* theWrappedObject, const QByteArray&  key) const
{
  return ( theWrappedObject->hasEncodedQueryItem(key));
}

bool  PythonQtWrapper_QUrl::hasFragment(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->hasFragment());
}

QUrl  PythonQtWrapper_QUrl::static_QUrl_fromEncoded(const QByteArray&  url)
{
  return (QUrl::fromEncoded(url));
}

void PythonQtWrapper_QUrl::removeQueryItem(QUrl* theWrappedObject, const QString&  key)
{
  ( theWrappedObject->removeQueryItem(key));
}

void PythonQtWrapper_QUrl::setEncodedQueryItems(QUrl* theWrappedObject, const QList<QPair<QByteArray , QByteArray >  >&  query)
{
  ( theWrappedObject->setEncodedQueryItems(query));
}

QString  PythonQtWrapper_QUrl::userInfo(QUrl* theWrappedObject) const
{
  return ( theWrappedObject->userInfo());
}

void PythonQtWrapper_QUrl::setUserName(QUrl* theWrappedObject, const QString&  userName)
{
  ( theWrappedObject->setUserName(userName));
}

void PythonQtWrapper_QUrl::writeTo(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 <<  (*theWrappedObject);
}

void PythonQtWrapper_QUrl::readFrom(QUrl* theWrappedObject, QDataStream&  arg__1)
{
  arg__1 >>  (*theWrappedObject);
}



QString  PythonQtWrapper_Qt::static_Qt_convertFromPlainText(const QString&  plain, Qt::WhiteSpaceMode  mode)
{
  return (Qt::convertFromPlainText(plain, mode));
}

QString  PythonQtWrapper_Qt::static_Qt_escape(const QString&  plain)
{
  return (Qt::escape(plain));
}

bool  PythonQtWrapper_Qt::static_Qt_mightBeRichText(const QString&  arg__1)
{
  return (Qt::mightBeRichText(arg__1));
}

QTextCodec*  PythonQtWrapper_Qt::static_Qt_codecForHtml(const QByteArray&  ba)
{
  return (Qt::codecForHtml(ba));
}


