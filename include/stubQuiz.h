#ifndef STUBQUIZ_H
#define STUBQUIZ_H

#include "Interfaces.h"


class StubQuiz:public IQuiz
{
public:
    void SetPerg(string in,string p,string r);
};

#endif // STUBQUIZ_H
