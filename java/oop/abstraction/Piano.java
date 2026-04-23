package oop.abstraction;

public class Piano implements Playable {
  @Override
  public String play() {
    return "You are playing the piano";
  }
}