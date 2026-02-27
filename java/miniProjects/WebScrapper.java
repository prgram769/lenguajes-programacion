/*Mini project to scrap webs*/

import java.net.URI;
import java.net.http.HttpClient;
import java.net.http.HttpRequest;
import java.net.http.HttpResponse;
import java.net.http.HttpResponse.BodyHandlers;
import java.util.regex.Pattern;

public class WebScrapper {
  public static void main(String[] args) {
    try {
      HttpClient client = HttpClient.newBuilder()
          .followRedirects(HttpClient.Redirect.ALWAYS)
          .build();

      HttpRequest request = HttpRequest.newBuilder()
          .uri(new URI("http://iesruizgijon.com"))
          .GET()
          .build();

      HttpResponse<String> response = client.send(request, BodyHandlers.ofString());
      
      String html = response.body();

      Pattern pattern = Pattern.compile("<title>(.*?)</title>");

      System.out.println(pattern);

    } catch (Exception e) {
      System.err.println(e);
    }
  }
}
