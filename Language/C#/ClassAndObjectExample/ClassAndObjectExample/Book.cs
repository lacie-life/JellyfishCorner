using System;
using System.Collections.Generic;
using System.Text;

namespace ClassAndObjectExample
{
    class Book
    {
        public string Title;
        public string author;
        public int pages;

        public Book(string name, string author, int pages) 
        {
            Console.WriteLine("Creating Book ..... ");
            this.Title = name;
            this.author = author;
            this.pages = pages;
        }

    }
}
