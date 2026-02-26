/*Program which calc the aspect ratio of an image from an URL or file*/

import java.awt.image.BufferedImage;
import java.io.File;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Arrays;

import javax.imageio.ImageIO;

public class AspectImage {
  public static int getDataFromURL(String url) {
    try {
      URL imageUrl = new URL(url);

      HttpURLConnection connection = (HttpURLConnection) imageUrl.openConnection();

      BufferedImage myImage = ImageIO.read(connection.getInputStream());

      double aspectRatio = (double) myImage.getWidth() / (double) myImage.getHeight();

      double[] aspects = { Math.abs(1.78 - aspectRatio), Math.abs(0.80 - aspectRatio), Math.abs(1.33 - aspectRatio),
          Math.abs(1.5 - aspectRatio), Math.abs(1.25 - aspectRatio), Math.abs(1.67 - aspectRatio) };

      double[] aspectsSorted = aspects.clone();

      Arrays.sort(aspectsSorted);

      int index = 0;

      for (int i = 0; i < aspects.length; i++) {
        if (aspects[i] == aspectsSorted[0]) {
          index = i;

          break;
        }
      }

      connection.disconnect();

      return index;
    } catch (Exception e) {
      System.err.println("You must enter a valid image route or a valid image URL when you call the program like AspectImage <imageRoute/imageURL>");

      return 0;
    }
  }

  public static void main(String[] args) {
    try {
      System.out.println("|--Aspect ratio calculator--|\n");
      if (args[0].contains("http")) {
        int index = getDataFromURL(args[0]);

        switch (index) {
          case 0:
            System.out.println("The rough aspect ratio of this image is 16:9");

            break;
          case 1:
            System.out.println("The rough aspect ratio of this image is 4:5");

            break;
          case 2:
            System.out.println("The rough aspect ratio of this image is 4:3");

            break;
          case 3:
            System.out.println("The rough aspect ratio of this image is 3:2");

            break;
          case 4:
            System.out.println("The rough aspect ratio of this image is 5:4");

            break;
          case 5:
            System.out.println("The rough aspect ratio of this image is 5:3");

            break;
        }
        System.out.println("\nMade with ❤️ by rugby01");

        return;
      }

      BufferedImage myImage = ImageIO.read(new File(args[0]));

      double aspectRatio = (double) myImage.getWidth() / (double) myImage.getHeight();

      double[] aspects = { Math.abs(1.78 - aspectRatio), Math.abs(0.80 - aspectRatio), Math.abs(1.33 - aspectRatio),
          Math.abs(1.5 - aspectRatio), Math.abs(1.25 - aspectRatio), Math.abs(1.67 - aspectRatio) };

      double[] aspectsSorted = aspects.clone();

      Arrays.sort(aspectsSorted);

      int index = 0;

      for (int i = 0; i < aspects.length; i++) {
        if (aspects[i] == aspectsSorted[0]) {
          index = i;

          break;
        }
      }

      switch (index) {
        case 0:
          System.out.println("The rough aspect ratio of this image is 16:9");

          break;
        case 1:
          System.out.println("The rough aspect ratio of this image is 4:5");

          break;
        case 2:
          System.out.println("The rough aspect ratio of this image is 4:3");

          break;
        case 3:
          System.out.println("The rough aspect ratio of this image is 3:2");

          break;
        case 4:
          System.out.println("The rough aspect ratio of this image is 5:4");

          break;
        case 5:
          System.out.println("The rough aspect ratio of this image is 5:3");

          break;
      }
    } catch (Exception e) {
      System.err.println("You must enter a valid image route or a valid image URL when you call the program like AspectImage <imageRoute/imageURL>");
    }
    System.out.println("\nMade with ❤️ by rugby01");
  }
}

// made by rugby01
