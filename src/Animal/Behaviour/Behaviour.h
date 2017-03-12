#ifndef BEHAVIOUR_H
#define BEHAVIOUR_H

/** @class Behaviour.
  *  Kelas Behaviour yang merepresentasikan hewan dengan kelakukan tertentu (buas atau jinak).
  */
class Behaviour {
public:
    /** @Constructor.
      * Menciptakan hewan dengan kelakuan tertentu (buas atau jinak).
      * @param _wild Kelakuan hewan (True jika liar dan false jika tidak).
      */
    Behaviour(bool _wild);

    /** @brief Destructor.
      */
    virtual ~Behaviour();

    /** @brief Memeriksa apakah hewan buas atau tidak.
      * @return True jika hewan adalah hewan buas dan False jika tidak.
      */
    bool isWild() const;

protected:
    bool wild;
};


#endif //BEHAVIOUR_H
