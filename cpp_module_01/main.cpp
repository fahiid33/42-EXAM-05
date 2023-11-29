#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);
  ASpell *spell = new Fwoosh();
  ASpell *spell2 = new Fwoosh();

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
  delete fwoosh;
}
