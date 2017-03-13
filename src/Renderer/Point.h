#ifndef POINT_H
#define POINT_H

/** @class Point
  * Kelas Point yang merepresentasikan sebuah titik.
  */
class Point {
public:
    /** @brief Constructor.
      * Menciptakan titik dengan koordinat (0, 0).
      */
    Point() : Point(0, 0) {}

    /** @brief Constructor.
      * Menciptakan titik dengan koordinat (r, c).
      * @param r Nilai baris (ordinat).
      * @param c Nilai kolom (absis).
      */
    Point(int r, int c) : r(r), c(c) {}

    /** @brief Mengambil nilai baris.
      * @return Nilai baris.
      */
    int getR() const { return r; }

    /** @brief Mengambil nilai kolom.
      * @return Nilai kolom.
      */
    int getC() const { return c; }

    /** @brief Set nilai baris.
      * @param r Nilai baris.
      */
    void setR(int r) { Point::r = r; }

    /** @brief Set nilai kolom.
      * @param c Nilai kolom.
      */
    void setC(int c) { Point::c = c; }

    /**
     * Mengecek apakah point berada dalam persegi panjang (0, 0) hingga (rows-1, cols-1) inklusif.
     * @param rows Batas jumlah baris.
     * @param cols Batas jumlah kolom.
     * @return True jika point berada dalam batasan yang diberikan, false jika tidak.
     */
    bool inArea(int rows, int cols) const { return r > 0 && c > 0 && r < rows && c < cols; }

    Point operator+(const Point &rhs) {
        return Point(r + rhs.r, c + rhs.c);
    }

private:
    int r;
    int c;
};

#endif //POINT_H
