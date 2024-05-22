#pragma once
#include "gameplay/academic_life/score.h"

class ESPB :
    public Score
{
public:
    static ESPB& Instance() {
        static ESPB instance;
        return instance;

    }

    void Update(int amount) override;
    int GetValue() const override;

private:
    ESPB() : value(0) {}
    int value;
    int m_max_espb = 240;
    int m_min_espb = 0;
};

