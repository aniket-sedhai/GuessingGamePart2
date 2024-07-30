#include <cstdlib>
#include "GuessingGame.h"

GuessingGame::GuessingGame(int LargestPossibleTargetValue):
    TargetValue(rand() % LargestPossibleTargetValue + 1),
    GuessesMade(0)
{
	// TODO:  Fill in as appropriate
	// NOTE:  Remember to use initialzier lists for all constructors
}

GuessingGame::GuessingGame(const GuessingGame& rhs):
    TargetValue(rhs.TargetValue),
    GuessesMade(rhs.GuessesMade)
{
	// TODO:  Fill in as appropriate
	// NOTE:  Remember to use initialzier lists for all constructors
}

GuessingGame& GuessingGame::operator=(const GuessingGame& rhs)
{
	// TODO:  Fill in as appropriate
	// NOTE:  What is "this" and why did I include this question here?
    TargetValue = rhs.TargetValue;
    GuessesMade = rhs.GuessesMade;
    return *this;
}

void GuessingGame::IncrementGuessCounter()
{
	// TODO:  Fill in as appropriate
    ++GuessesMade;
}

int GuessingGame::GetGuessesMade() const
{
	// TODO:  Fill in as appropriate
    return GuessesMade;
}

bool operator <(int guess, const GuessingGame& game)
{
	// TODO:  Fill in as appropriate
    return (guess < game.TargetValue);
}

bool operator >(int guess, const GuessingGame& game)
{
	// TODO:  Fill in as appropriate
    return (guess > game.TargetValue);
}

bool operator !=(int guess, const GuessingGame& game)
{
	// TODO:  Fill in as appropriate
    return (guess != game.TargetValue);
}
