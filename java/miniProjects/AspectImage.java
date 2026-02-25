/*Program which calc the aspect ratio of an image from an URL or file*/

import java.awt.Image;
import java.awt.image.BufferedImage;
import java.io.File;
import java.net.HttpURLConnection;
import java.net.URL;

import javax.imageio.ImageIO;

public class AspectImage {
  public static int[] getDataFromURL(String url) {
    try {
      URL imageUrl = new URL(url);

      HttpURLConnection connection = (HttpURLConnection) imageUrl.openConnection();

      BufferedImage myImage = ImageIO.read(connection.getInputStream());

      int val1 = myImage.getWidth();
      int val2 = myImage.getHeight();

      connection.disconnect();

      return new int[] { val1, val2 };
    } catch (Exception e) {
      System.err.println(e);

      return new int[] {};
    }
  }

  public static void main(String[] args) {
    try {
      if (args[0].contains("http")) {
        int[] dimensions = getDataFromURL(args[0]);

        return;
      }

      BufferedImage myImage = ImageIO.read(new File(args[0]));

      System.out.println(myImage.getWidth());
      System.out.println(myImage.getHeight());

      double aspectRatio = (double) myImage.getWidth() / (double) myImage.getHeight();

      System.out.println(aspectRatio);

      double[] aspects = { Math.abs(1.78 - aspectRatio), Math.abs(0.80 - aspectRatio), Math.abs(1.33 - aspectRatio),
          Math.abs(1.5 - aspectRatio), Math.abs(1.25 - aspectRatio), Math.abs(1.67 - aspectRatio) };

      if (condition) {
        
      }
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}
