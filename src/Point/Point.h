//
// Created by nim_13515004 on 11/03/17.
//

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
    Point();

    /** @brief Constructor.
      * Menciptakan titik dengan koordinat (x, y).
      * @param x Nilai absis.
      * @param y Nilai ordinat.
      */
    Point(int x, int y);

    /** @brief Mengambil nilai absis.
      * @return Nilai absis.
      */
    int GetAbsis();

    /** @brief Mengambil nilai ordinat.
      * @return Nilai ordinat.
      */
    int GetOrdinat ();

    /** @brief Set nilai absis.
      * @param _X Nilai absis.
      */
    void SetAbsis (int _X);

    /** @brief Set nilai ordinat.
      * @param _Y Nilai ordinat.
      */
    void SetOrdinat (int _Y);

private:
    int x;
    int y;
};

#endif //POINT_H
