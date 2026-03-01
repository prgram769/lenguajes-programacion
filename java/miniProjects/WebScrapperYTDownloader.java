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

public class WebScrapperYTDownloader {
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

      String attributes = "/";

      System.out.println("Tell me what do you want to do. 1.Web scrapping. 2.Download video from youtube.");

      int option = read.nextInt();

      if (option == 2) {
        try {
          if (args[0].toLowerCase().equals("youtube")) {
            attributes = attributes + "watch?v=" + args[2];
          } else {
            attributes = attributes + args[2];
          }

          link = link + attributes;

          if (link.contains("youtube") && link.contains("/watch?v=")) {
            read.nextLine();

            System.out.print("Which video format you do you want to recive? ");

            String videoFormat = read.nextLine();

            String command = "kitty yt-dlp " + "-t" + videoFormat + " " + link;

            ProcessBuilder pb = new ProcessBuilder(command.split("\\s"));

            Process p = pb.start();

            read.close();

            return;
          }
        } catch (Exception e) {
          // System.err.println("The third arg doesn't exist. Error: " + e);
        }

      } else if (option > 2 || option < 1) {
        System.err.println("You must enter valid data.");
      }

      if (args[0].toLowerCase().equals("youtube")) {
        attributes = attributes + "watch?v=" + args[2];
      } else {
        attributes = attributes + args[2];
      }

      link = link + attributes;

      HttpRequest request = HttpRequest.newBuilder()
          .uri(new URI(link))
          .GET()
          .build();

      HttpResponse<String> response = client.send(request, BodyHandlers.ofString());

      String html = response.body();

      read.nextLine();

      System.out.print("\nTell me what tag you want to search? ");

      String search = read.nextLine();

      String tag = "<" + search + "[^>]*>(.*?)" + "</" + search + ">";

      // String tagTest = "<script type=\"application/ld+json\"
      // nonce=\"\">(.*?)</script>";

      Pattern pattern = Pattern.compile(tag, Pattern.CASE_INSENSITIVE);

      Matcher matcher = pattern.matcher(html);

      // ArrayList<String> results = new ArrayList<>();

      // while (matcher.find()) {
      // results.add(matcher.group(1));
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
