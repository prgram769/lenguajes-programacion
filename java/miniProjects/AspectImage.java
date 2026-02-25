/*Program which calc the aspect ratio of an image from an URL or file*/

import java.awt.Image;
import java.awt.image.BufferedImage;
import java.io.File;

import javax.imageio.ImageIO;

public class AspectImage {
  public static void main(String[] args) {
    try {
      BufferedImage myImage = ImageIO.read(new File(args[0]));

      ImageIO.write(myImage, "png", new File("test.png"));

      System.out.println(myImage.getWidth());
      System.out.println(myImage.getHeight());

    } catch (Exception e) {
      System.err.println(e);

      System.out.println(args[0]);
    }
  }
}
