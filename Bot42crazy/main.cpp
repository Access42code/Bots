#include <iostream>
#include <string>
#include < algorithm>
#include <regex>
#include <map>

using namespace std;
map<string,string> database = {

{"(hello|privet)",
    "Hello humanoid friend"},

{"(how are you|how do you do)",
  "Still computing PI to the trillionth digit"
  },
{ "what are you doing",
   "Answering stoopid qustions"
},
{
    "fuck",
    "PLEASE DO NOT MATERITSYA"
}
};
 string to_lower(string text) {
transform (text.begin(),text.end(),text.begin(), ::tolower);
return text;
}
void loverCase(string& text){
transform (text.begin(),text.end(),text.begin(), ::tolower);
}

 void botSay(string text) {
cout << "[BOT]:" << text << endl;
}
string userAsk(){
string question;
cout <<"[USER]:";
getline ( cin, question);
loverCase(question);
return question;
}
int main()
{
    string question;
    botSay ("Hello Dear User, My name is Bot42crazy ");

     while(question != "exit") {
int answersCount = 0;
    question = userAsk();

    for (auto entry : database){

        regex regularExpression = regex(".*" + entry.first +".*");
    if(regex_matcch(qustion, regularExpressio{
       botSay(entry.second);
       answersCount++;
     }
    }
if(answersCount == 0) {
    botsay("Sorry I dont know how to answer this :(");
}
if (answersCount >= 3){
    botsay ("Sorry for the long reply");
}
     }
    return 0;
}
