#ifndef POINT_H
#define POINT_H

/** @class Point
	* Kelas Point yang merepresentasikan sebuah titik.
	*/
class Point {
public:
  /** @brief Constructor.
		* @details Menciptakan titik dengan koordinat (0, 0).
		*/
  Point() : Point(0, 0) {}

  /** @brief Constructor.
		* @details Menciptakan titik dengan koordinat (r, c).
		* @param r Nilai baris (ordinat).
		* @param c Nilai kolom (absis).
		*/
  Point(int r, int c) : r(r), c(c) {}

  /** @brief Mengambil nilai baris (ordinat).
		* @return Nilai baris (ordinat).
		*/
  int GetR() const { return r; }

  /** @brief Mengambil nilai kolom (absis).
		* @return Nilai kolom (absis).
		*/
  int GetC() const { return c; }

  /** @brief Set nilai baris (ordinat).
		* @param r Nilai baris (ordinat).
		*/
  void SetR(int r) { Point::r = r; }

  /** @brief Set nilai kolom (absis).
		* @param c Nilai kolom (absis).
		*/
  void SetC(int c) { Point::c = c; }

  /**@brief Memeriksa apakah point berada dalam persegi panjang (0, 0)
   * hingga (rows-1, cols-1) inklusif.
	 * @param rows Batas jumlah baris.
	 * @param cols Batas jumlah kolom.
	 * @return True jika point berada dalam batasan, false jika tidak.
	 */
  bool InArea(int rows, int cols) const {
    return r >= 0 && c >= 0 && r < rows && c < cols;
  }

  /** @brief Operator+.
    * @details Menambahkan (mentranslasi) current point dengan point rhs.
    * @param rhs Point yang ditambahkan.
    * @return Point hasil penambahan dengan rhs.
    */
  Point operator+(const Point &rhs) {
				return Point(r + rhs.r, c + rhs.c);
  }

private:
  /** @brief Nilai baris (ordinat).
    */
  int r;
  /** @brief Nilai kolom (absis).
    */
  int c;
};

#endif //POINT_H
