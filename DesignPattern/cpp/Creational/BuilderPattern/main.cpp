#include <istream>
#include "HTMLbuilder.h"
#include "PersonBuilder/PersonBulder.h"

bool HTMLDemo()
{
  // <p>hello</p>
  auto text = "hello";
  string output;
  output += "<p>";
  output += text;
  output += "</p>";
  printf("<p>%s</p>", text);

  // <ul><li>hello</li><li>world</li></ul>
  string words[] = { "hello", "world" };
  ostringstream oss;
  oss << "<ul>";
  for (auto w : words)
    oss << "  <li>" << w << "</li>";
  oss << "</ul>";
  printf(oss.str().c_str());

  // easier
  HtmlBuilder builder{ "ul" };
  builder.add_child("li", "hello").add_child("li", "world");
  cout << builder.str() << endl;


  auto builder2 = HtmlElement::build("ul")
    ->add_child_2("li", "hello")->add_child_2("li", "world");
  cout << builder2 << endl;

  getchar();
  return true;
}

int main()
{
    bool sta = HTMLDemo();

    return 0;
}