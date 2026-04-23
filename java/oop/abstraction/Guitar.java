package oop.abstraction;

public class Guitar implements Playable {
  @Override
  public String play() {
    return "You are playing the guitar";
  }
}