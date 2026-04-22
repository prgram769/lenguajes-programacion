// 10. Crea una clase Character con método attack(). Luego crea subclases Warrior, Archer, Wizard con ataques diferentes. 
// En main, crea un array de Character y llama a attack() para cada uno.

public class Ej10 {
  public static void main(String[] args) {
    Character myCharacter = new Character();
    Warrior myWarrior = new Warrior();
    Archer myArcher = new Archer();
    Wizard myWizard = new Wizard();
    
    Character[] myCharactersArray = {myCharacter,myWarrior,myArcher,myWizard};

    for (Character character : myCharactersArray) {
      character.attack();
    }
  } 
}