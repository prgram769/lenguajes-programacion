/*Mini project to scrap webs*/

import java.net.URL;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.net.HttpURLConnection;

public class WebScrapper {
  public static void main(String[] args) {
    try {
      URL testURL = new URL("http://example.com");

      HttpURLConnection myURLConnection = (HttpURLConnection) testURL.openConnection();

      BufferedReader in = new BufferedReader(
          new InputStreamReader(myURLConnection.getInputStream()));
      String inputLine;

      StringBuffer content = new StringBuffer();

      while ((inputLine = in.readLine()) != null) {
        content.append(inputLine);
      }

      in.close();

      myURLConnection.disconnect();

      System.out.println(content.toString());
    } catch (Exception e) {
    }
  }
}
