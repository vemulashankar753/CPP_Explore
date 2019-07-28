#include <iostream>
#include <curl>


int main() {

  curl_global_init();
  CURL *curl = curl_easy_init();
  if(curl) {
   CURLcode res;
   curl_easy_setopt(curl, CURLOPT_URL, "https:// operations-configman-pprd.tbbo-comcast.com/operations/getRPDConfig?rpdMacAddress"));
   curl_easy_setopt(curl, CURLOPT_
   curl_easy_setopt(curl, CURLOPT_SSLCERT, "client.pem");
   curl_easy_setopt(curl, CURLOPT_SSLKEY, "key.pem");
   res = curl_easy_perform(curl);
   curl_easy_cleanup(curl);
 } 

//  easyhandle = curl_easy_init();

