//Author : Jonathan

#ifndef FRAMEBUFFER_H
#define FRAMEBUFFER_H

#include <string>
#include <ostream>
#include "../Point.h"
using namespace std;

/** @class FrameBuffer
  * Kelas FrameBuffer yang berfungsi untuk mengatur tampilan pada layar.
  */
class FrameBuffer {
public:
  /** @brief Jenis warna yang tersedia.
    */
  enum Color {
    TRANSPARENT,
    BLACK, MAROON, GREEN, BROWN, DARK_BLUE, PURPLE, TEAL, WHITE,
    GRAY, RED, LIME, YELLOW, BLUE, PINK, CYAN, LIGHT_GRAY
  };

  /** @brief Constructor.
    * @details Menciptakan FrameBuffer dengan ukuran rows x cols
    * dengan status warna colored.
    * @param rows Nilai ukuran baris.
    * @param cols Nilai ukuran kolom.
    * @param colored Status warna FrameBuffer.
    */
  FrameBuffer(int rows, int cols, bool colored);

  /** @brief Destructor.
    * @details Mengembalikan memori yang dialokasi oleh constructor.
    */
  ~FrameBuffer();

  /** @brief Mengambil nilai ukuran baris FrameBuffer.
    * @return Nilai ukuran baris FrameBuffer.
    */
  int GetRows() const {
    return rows;
  }

  /** @brief Mengambil nilai ukuran kolom FrameBuffer.
    * @return Nilai ukuran kolom FrameBuffer.
    */
  int GetCols() const {
    return cols;
  }

  /** @brief Memeriksa apakah FrameBuffer berwarna atau tidak.
    * @return True jika FrameBuffer berwarna dan false jika tidak.
    */
  bool IsColored() const {
    return colored;
  }

  /** @brief Set status warna FrameBuffer.
    * @param colored Status warna FrameBuffer.
    */
  void SetColored(bool colored) {
    FrameBuffer::colored = colored;
  }

  /** @brief Mengambil input_prompt dari FrameBuffer.
    * @return string yang merepresentasikan input_prompt dari FrameBuffer.
    */
  string GetInputPrompt() const {
    return input_prompt;
  }

  /** @brief Set input_prompt dari FrameBuffer.
    * @param input_prompt input_prompt yang diset ke FrameBuffer.
    */
  void SetInputPrompt(const string &input_prompt) {
    FrameBuffer::input_prompt = input_prompt;
  }

  /** @brief Mengosongkan isi layar dari FrameBuffer.
    */
  void Clear();

  /** @brief Menggambar sebuah karakter pada posisi tertentu di FrameBuffer
    * dengan warna tulisan dan latar yang ditentukan.
    * @param p Posisi tempat karacter akan digambar.
    * @param content Karakter yang akan digambar.
    * @param fg_color Warna karakter (foreground) yang akan digambar.
    * @param bg_color Warna latar (background) dari karakter yang akan digambar.
    */
  void DrawPoint(const Point &p, char content, Color fg_color, Color bg_color);

  /** @brief Menggambar sebuah garis horizontal pada posisi yang ditentukan.
    * dengan warna tulisan dan latar yang ditentukan.
    * @param p1 Posisi awal garis yang akan digambar.
    * @param p2 Posisi akhir garis yang akan digambar.
    * @param content Karakter yang merepresentasikan garis yang akan digambar.
    * @param fg_color Warna tulisan (foreground) dari garis yang akan digambar.
    * @param bg_color Warna latar (background) dari garis yang akan digambar.
    */
  void DrawHorizontalLine(const Point &p1, const Point &p2, char content,
                          Color fg_color, Color bg_color);

  /** @brief Menggambar sebuah garis vertikal pada posisi yang ditentukan.
    * dengan warna tulisan dan latar yang ditentukan.
    * @param p1 Posisi awal garis yang akan digambar.
    * @param p2 Posisi akhir garis yang akan digambar.
    * @param content Karakter yang merepresentasikan garis yang akan digambar.
    * @param fg_color Warna tulisan (foreground) dari garis yang akan digambar.
    * @param bg_color Warna latar (background) dari garis yang akan digambar.
    */
  void DrawVerticalLine(const Point &p1, const Point &p2, char content,
                        Color fg_color, Color bg_color);

  /** @brief Menggambar sebuah text box di FrameBuffer
    * pada posisi kiri atas dan kanan bawah yang ditentukan dengan warna tulisan
    * dan latar yang ditentukan.
    * @param top_left Posisi kiri atas dari text box yang akan digambar.
    * @param bottom_right Posisi kanan bawah dari text box yang akan digambar.
    * @param str Isi dari text box yang akan digambar.
    * @param fg_color Warna tulisan/foreground dari text box yang akan digambar.
    * @param bg_color Warna latar (background) dari text box yang akan digambar.
    */
  void DrawTextBox(const Point &top_left, const Point &bottom_right, string str,
                   Color fg_color, Color bg_color);

  /** @brief Menggambar sebuah persegi panjang di FrameBuffer
    * pada posisi kiri atas dan kanan bawah yang ditentukan dengan warna tulisan
    * dan latar yang ditentukan.
    * @param top_left Posisi kiri atas dari text box yang akan digambar.
    * @param bottom_right Posisi kanan bawah dari text box yang akan digambar.
    * @param border_character Karakter yang merepresentasikan garis pembatas
    * persegi panjang yang akan digambar.
    * @param text_color Warna dari text di persegi panjang yang akan digambar.
    * @param bg_color Warna latar dari persegi panjang yang akan digambar.
    * @param border_color Warna garis pembatas persegi panjang yang digambar.
    */
  void DrawRectangle(const Point &top_left, const Point &bottom_right,
                     char border_character, Color text_color, Color bg_color,
                     Color border_color);

  /** @brief Mencetak FrameBuffer ke layar dengan menggunakan output stream.
    * @details Merupakan friend function.
    * @param os Output stream yang akan mencetak FrameBuffer.
    * @param fb FrameBuffer yang akan dicetak ke layar.
    * @return Reference ke output stream yang akan mencetak FrameBuffer.
    */
  friend ostream &operator<<(ostream &os, const FrameBuffer &fb);

  /** @brief Membersihkan (menghapus) layar console.
    */
  void ClearScreen();

private:
  /** @brief Karakter kosong (spasi).
    */
  static const char BLANK;
  static const string CS_INITIATOR;
  static const string CS_TERMINATOR;
  static const string RESET;
  /** @brief Konstanta-konstanta yang berisi kode warna tulisan (foreground).
    */
  static const string FG_COLOR_CONSTANTS[];

  /** @brief Konstanta-konstanta yang berisi kode warna latar (background).
    */
  static const string BG_COLOR_CONSTANTS[];

  /** @brief Mengembalikan indeks FrameBuffer pada baris dan kolom yang ditentukan.
    * @param r Nilai baris.
    * @param c Nilai kolom.
    * @return Nilai indeks di FrameBuffer.
    */
  int idx(int r, int c) const {
    return r * cols + c;
  }
  /** @brief Mengembalikan indeks di FrameBuffer pada posisi yang ditentukan.
    * @param p Nilai titik.
    * @return Nilai indeks di FrameBuffer.
    */
  int idx(const Point &p) const {
    return p.GetR() * cols + p.GetC();
  }
  /** @brief Nilai ukuran baris FrameBuffer.
    */
  int rows;
  /** @brief Nilai ukuran kolom FrameBuffer.
    */
  int cols;
  /** @brief Status warna FrameBuffer (true jika berwarna dan false jika tidak).
    */
  bool colored;
  /** @brief Isi dari FrameBuffer.
    */
  char *contents;
  /** @brief Warna tulisan (foreground) pada FrameBuffer.
    */
  Color *fg_colors;
  /** @brief Warna latar (background) pada FrameBuffer.
    */
  Color *bg_colors;
  /** @brief String yang berisi kalimat permintaan input.
    */
  string input_prompt;
};

#endif //FRAMEBUFFER_H
