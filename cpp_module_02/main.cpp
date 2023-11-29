#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "Fireball.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  ASpell* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);

  ASpell* fireball = new Fireball();

  richard.learnSpell(fireball);
  richard.learnSpell(polymorph);
  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");
  richard.launchSpell("Fireball", *wall);


  richard.launchSpell("Fireball", *wall);
  richard.launchSpell("Polymorph", *wall);
}
