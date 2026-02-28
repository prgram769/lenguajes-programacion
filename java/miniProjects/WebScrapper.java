/*Mini project to scrap webs*/

import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpResponse.BodyHandlers;
import java.util.Scanner;
// import java.util.ArrayList;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class WebScrapper {
  public static void main(String[] args) {
    Scanner read = new Scanner(System.in);

    try {
      HttpClient client = HttpClient.newBuilder()
          .followRedirects(HttpClient.Redirect.ALWAYS)
          .build();
      
      String endPoint = "";

      try {
        endPoint = args[1];


      } catch (Exception e) {
        endPoint = "com";
      }

      String link = "http://" + args[0] + "." + endPoint;

      try {
      } catch (Exception e) {
        
      }

      HttpRequest request = HttpRequest.newBuilder()
          .uri(new URI(link))
          .GET()
          .build();

      HttpResponse<String> response = client.send(request, BodyHandlers.ofString());
      
      String html = response.body();

      System.out.print("Tell me what tag you want to search? ");

      String search = read.nextLine();

      String tag = "<" + search + "[^>]*>(.*?)" + "</" + search + ">";

      // String tagTest = "<script type=\"application/ld+json\" nonce=\"\">(.*?)</script>";

      Pattern pattern = Pattern.compile(tag, Pattern.CASE_INSENSITIVE);

      Matcher matcher = pattern.matcher(html);

      // ArrayList<String> results = new ArrayList<>();

      // while (matcher.find()) {
      //   results.add(matcher.group(1));
      // }
      //
      // System.out.println(results);

      matcher.find();

      System.out.println("\n" + matcher.group(1));

      read.close();
    } catch (Exception e) {
      System.err.println(e);
    }
  }
}
