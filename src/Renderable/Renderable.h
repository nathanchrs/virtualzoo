#ifndef RENDERABLE_H
#define RENDERABLE_H

/** @class Renderable
  * Kelas abstrak Renderable merepresentasikan perilaku objek yang dapat digambar di atas layar.
  */
class Renderable {
public:
    /**
     * @brief Mengembalikan satu karakter yang merepesentasikan bentuk objek yang bersangkutan di atas console teks.
     */
    virtual void render() = 0;
};

#endif //RENDERABLE_H
