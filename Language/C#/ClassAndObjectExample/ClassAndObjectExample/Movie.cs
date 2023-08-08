using System;
using System.Collections.Generic;
using System.Text;

namespace ClassAndObjectExample
{
    class Movie
    {
        private string title;
        private string director;
        private string rating;

        public static int longTime = 0;

        public Movie (string aTitle, string aDirector, string aRating)
        {
            this.title = aTitle;
            this.director = aDirector;
            this.rating = aRating;
        }

        public string Rating
        {
            get { return rating; }
            set {
                if (value == "G" || value == "PG")
                {
                    rating = value;
                }else
                {
                    rating = "NR";
                }
            }
        }

    }
}
